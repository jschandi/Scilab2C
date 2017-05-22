function opout = FA_SZ_FACTOR(inval)

// 17-Dec-2016 -- Author : Shamik Guha

inval=string(inval);
if (isnum(inval)) then
    in_num = eval(inval) ;
    out=factor(in_num);
    //disp(out);

else
    error(36, "Wrong input argument "+inval+".");

end


out=(length(out));
opout=string(out);

endfunction 
