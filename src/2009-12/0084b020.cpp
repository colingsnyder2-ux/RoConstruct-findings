// roc 2009-12 0084b020  unit: CXTPPrintPageHeaderFooter  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084b020
//
// 0084b020  8b442408             mov eax, dword ptr [esp + 8]
// 0084b024  99                   cdq 
// 0084b025  f77c2404             idiv dword ptr [esp + 4]
// 0084b029  33c9                 xor ecx, ecx
// 0084b02b  85d2                 test edx, edx
// 0084b02d  0f95c1               setne cl
// 0084b030  03c1                 add eax, ecx
// 0084b032  c20800               ret 8
// copied from an identical function in another client (function ?sub_0067FDB0@ns_ROCX000028@@YGHHH@Z)

namespace ns_ROCX000028 {
int __stdcall sub_0067FDB0(int divisor, int value)
{
    int quotient = value / divisor;
    int remainder = value % divisor;
    return quotient + (remainder != 0 ? 1 : 0);
}
}
