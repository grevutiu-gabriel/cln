// ffloor().

// General includes.
#include "base/cl_sysdep.h"

// Specification.
#include "cln/sfloat.h"


// Implementation.

#include "float/sfloat/cl_SF.h"

/* For inline version of minusp */
#include "base/cl_inline.h"
#include "float/sfloat/elem/cl_SF_minusp.cc"

namespace cln {

const cl_SF CL_FLATTEN ffloor (const cl_SF& x)
{
	if (minusp_inline(x))
		return futruncate(x);
	else
		return ftruncate(x);
}

}  // namespace cln
