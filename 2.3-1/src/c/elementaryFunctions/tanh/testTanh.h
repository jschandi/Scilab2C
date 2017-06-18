/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef _TESTTANH_H_
#define _TESTTANH_H_

#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "tanh.h"
#include "constant.h"

void stanhsTest(void);

void dtanhsTest(void);

void ctanhsTest(void);

void ztanhsTest(void);

void stanhaTest(void);

void dtanhaTest(void);

void ctanhaTest(void);

void ztanhaTest(void);

int testTanh(void);

#endif /* !_TESTTANH_H_ */
