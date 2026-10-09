// roc 2007-03 00401a00  unit: seg_00400000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00401a00
//
// 00401a00  8b442408             mov eax, dword ptr [esp + 8]
// 00401a04  8b08                 mov ecx, dword ptr [eax]
// 00401a06  3b0d50f17800         cmp ecx, dword ptr [0x78f150]
// 00401a0c  7532                 jne 0x401a40
// 00401a0e  8b5004               mov edx, dword ptr [eax + 4]
// 00401a11  3b1554f17800         cmp edx, dword ptr [0x78f154]
// 00401a17  7527                 jne 0x401a40
// 00401a19  8b4808               mov ecx, dword ptr [eax + 8]
// 00401a1c  3b0d58f17800         cmp ecx, dword ptr [0x78f158]
// 00401a22  751c                 jne 0x401a40
// 00401a24  8b500c               mov edx, dword ptr [eax + 0xc]
// 00401a27  3b155cf17800         cmp edx, dword ptr [0x78f15c]
// 00401a2d  7511                 jne 0x401a40
// 00401a2f  b801000000           mov eax, 1
// 00401a34  33c9                 xor ecx, ecx
// 00401a36  85c0                 test eax, eax
// 00401a38  0f94c1               sete cl
// 00401a3b  8bc1                 mov eax, ecx
// 00401a3d  c20800               ret 8
// 00401a40  33c0                 xor eax, eax
// 00401a42  33c9                 xor ecx, ecx
// 00401a44  85c0                 test eax, eax
// 00401a46  0f94c1               sete cl
// 00401a49  8bc1                 mov eax, ecx
// 00401a4b  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_0040b570@ns_ROCX00001c@@QAEHHPBH@Z)

namespace ns_ROCX00001c {
struct S_func_0040b570 {
    int f(int b, const int* a);
};

extern int g_790240;
extern int g_790244;
extern int g_790248;
extern int g_79024c;

int S_func_0040b570::f(int b, const int* a)
{
    int eq = (a[0] == g_790240) &&
             (a[1] == g_790244) &&
             (a[2] == g_790248) &&
             (a[3] == g_79024c);
    return !eq;
}
}
