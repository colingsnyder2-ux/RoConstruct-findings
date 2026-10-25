// from server: 100% by atomic.potato
// roc 2008-06 006f7880  unit: CXTPPrintPageHeaderFooter  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f7880
//
// 006f7880  8b442408             mov eax, dword ptr [esp + 8]
// 006f7884  99                   cdq 
// 006f7885  f77c2404             idiv dword ptr [esp + 4]
// 006f7889  33c9                 xor ecx, ecx
// 006f788b  85d2                 test edx, edx
// 006f788d  0f95c1               setne cl
// 006f7890  03c1                 add eax, ecx
// 006f7892  c20800               ret 8

extern "C" int __stdcall func_006f7880(int divisor, int dividend)
{
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    return quotient + (remainder != 0);
}
