/****************************************************************************
**
**  FougTools
**  Copyright FougSys (1 Mar. 2011)
**  contact@fougsys.fr
**
** This software is a computer program whose purpose is to provide utility
** tools for the C++ language, the Qt and Open Cascade toolkits.
**
** This software is governed by the CeCILL-C license under French law and
** abiding by the rules of distribution of free software.  You can  use,
** modify and/ or redistribute the software under the terms of the CeCILL-C
** license as circulated by CEA, CNRS and INRIA at the following URL
** "http://www.cecill.info".
**
** As a counterpart to the access to the source code and  rights to copy,
** modify and redistribute granted by the license, users are provided only
** with a limited warranty  and the software's author,  the holder of the
** economic rights,  and the successive licensors  have only  limited
** liability.
**
** In this respect, the user's attention is drawn to the risks associated
** with loading,  using,  modifying and/or developing or reproducing the
** software by the user in light of its specific status of free software,
** that may mean  that it is complicated to manipulate,  and  that  also
** therefore means  that it is reserved for developers  and  experienced
** professionals having in-depth computer knowledge. Users are therefore
** encouraged to load and test the software's suitability as regards their
** requirements in conditions enabling the security of their systems and/or
** data to be ensured and,  more generally, to use and operate it in the
** same conditions as regards security.
**
** The fact that you are presently reading this means that you have had
** knowledge of the CeCILL-C license and that you accept its terms.
**
****************************************************************************/

#ifndef OCC_GEOM_TOOLS_H
#define OCC_GEOM_TOOLS_H

#include "occtools.h"

#include <Handle_Geom_Curve.hxx>
#include <Handle_Geom_Surface.hxx>
#include <gp_Pnt2d.hxx>
#include <gp_Dir2d.hxx>
#include <gp_Dir.hxx>
#include <gp_Pnt.hxx>
#include <gp_Vec.hxx>

namespace occ {

class OCCTOOLS_EXPORT GeomTools
{
public:
  static gp_Pnt geomCurveD0(const Handle_Geom_Curve& curve, Standard_Real u);
  static Standard_Real curveLength(const Handle_Geom_Curve& curve);
  static Standard_Real curveLengthBetweenParams(const Handle_Geom_Curve& curve,
                                                Standard_Real firstU,
                                                Standard_Real lastU);
  static gp_Vec normalToSurfaceAtUV(const Handle_Geom_Surface& surface,
                                    Standard_Real u,
                                    Standard_Real v);
};

} // namespace occ

#endif // OCC_GEOM_TOOLS_H
