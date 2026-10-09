// roc 2007-03 0066b5e0  unit: seg_00660000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066b5e0
//
// 0066b5e0  8b442408             mov eax, dword ptr [esp + 8]
// 0066b5e4  99                   cdq 
// 0066b5e5  f77c2404             idiv dword ptr [esp + 4]
// 0066b5e9  33c9                 xor ecx, ecx
// 0066b5eb  85d2                 test edx, edx
// 0066b5ed  0f95c1               setne cl
// 0066b5f0  03c1                 add eax, ecx
// 0066b5f2  c20800               ret 8
// copied from an identical function in another client (function ?sub_0067FDB0@ns_ROCX000030@@YGHHH@Z)

namespace ns_ROCX000030 {
int __stdcall sub_0067FDB0(int divisor, int value)
{
    int quotient = value / divisor;
    int remainder = value % divisor;
    return quotient + (remainder != 0 ? 1 : 0);
}
}
