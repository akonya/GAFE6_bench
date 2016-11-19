// A Change
// =============================================
//   Hold all headers to keep things nice    
// =============================================

#ifndef __MAINHEAD_H__
#define __MAINHEAD_H__

#include "getgmsh.h"

//#include <fstream>

#include <cuda.h>
#include <cuda_runtime.h>
#include <device_launch_parameters.h>
#include <stdio.h>
#include <cuda_texture_types.h>
#include <texture_fetch_functions.h>
#include <texture_types.h>
//#include "extlib/cmdparser.hpp"

#include "gpuinfo.h"
#include "errorhandle.h"
#include "datastruct.h"
#include "classstruct.h"
#include "getmesh.h"
//#include "getmeshios.h"
#include "getAs.h"
#include "printmeshorder.h"
#include "packdata.h"
#include "texdef.h"
#include "forcecalc.h"
#include "rundynamics.h"
#include "datatodevice.h"
#include "parameters.h"
#include "anyerrors.h"
//#include "GPUdynamics.h"
#include "read_dev_data.h"
#include "exit_program.h"
#include "update_r.h"
#include "printVTKframe.h"

#include "illumination_cpu.h"
#include "clparse.h"

#include "gpuForce.h"
#include "sendForce.h"
#include "getEnergy.h"
#include "getQ.h"
#include "setn.h"

#include "UserDefined.h"
#include "extlib/gmsh_io/gmsh_io.hpp"








#endif //__MAINHEAD_H__
