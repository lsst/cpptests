// -*- LSST-C++ -*-
/* 
 * LSST Data Management System
 * Copyright 2008, 2009 LSST Corporation.
 * 
 * This product includes software developed by the
 * LSST Project (http://www.lsst.org/).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the LSST License Statement and 
 * the GNU General Public License along with this program.  If not, 
 * see <http://www.lsstcorp.org/LegalNotices/>.
 */

/* 
RULE

[LsstDm-3-6 - 3]


SPECIFICATION

LSST DM C++ Programming Style Guidelines, Section 3 Naming Conventions
Rule 3-6. Names representing namespaces should be all lowercase and 
     based on component or directory name. 


EXAMPLE

	analyzer, iomanager, mainwindow


DEFINITION

Common practice in the C++ development community. 



CAVEAT 

This Rule only checks that namespace names starts with a lowercase letter;
    it does not check that namespace names are based on component 
    or directory name.



ATTTRIBUTION

Implementation based on Parasoft:NAMING-30; heavily modified to conform 
to LSST rule.
*/


// EXAMPLE TO FAIL

namespace lsst {
namespace afw {
namespace math {

}}}
namespace afwMath = lsst::afw::math;    //violation



// REPAIR

namespace afwmath = lsst::afw::math;    // OK

