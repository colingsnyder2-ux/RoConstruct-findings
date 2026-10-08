// from server: 100% by colin
// roc 2007-08 0067fdb0  unit: CXTPPrintPageHeaderFooter  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067fdb0
//
// 0067fdb0  8b442408             mov eax, dword ptr [esp + 8]
// 0067fdb4  99                   cdq 
// 0067fdb5  f77c2404             idiv dword ptr [esp + 4]
// 0067fdb9  33c9                 xor ecx, ecx
// 0067fdbb  85d2                 test edx, edx
// 0067fdbd  0f95c1               setne cl
// 0067fdc0  03c1                 add eax, ecx
// 0067fdc2  c20800               ret 8

int __stdcall sub_0067FDB0(int divisor, int value)
{
    int quotient = value / divisor;
    int remainder = value % divisor;
    return quotient + (remainder != 0 ? 1 : 0);
}
