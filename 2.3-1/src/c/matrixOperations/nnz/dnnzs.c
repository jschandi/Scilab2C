/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
 
/*Function returns cumulative sum of members of array/matrix*/

#include "nnz.h"
#include "types.h"
#include "uint16.h"

uint16 dnnzs(double in)
{
	if(in !=0)
	return 1;
	else
	return 0;
}
