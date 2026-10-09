// roc 2009-06 0044d480  unit: VCWorkspace::?$CComObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044d480
//
// 0044d480  8b442408             mov eax, dword ptr [esp + 8]
// 0044d484  8b08                 mov ecx, dword ptr [eax]
// 0044d486  3b0da8698b00         cmp ecx, dword ptr [0x8b69a8]
// 0044d48c  7532                 jne 0x44d4c0
// 0044d48e  8b5004               mov edx, dword ptr [eax + 4]
// 0044d491  3b15ac698b00         cmp edx, dword ptr [0x8b69ac]
// 0044d497  7527                 jne 0x44d4c0
// 0044d499  8b4808               mov ecx, dword ptr [eax + 8]
// 0044d49c  3b0db0698b00         cmp ecx, dword ptr [0x8b69b0]
// 0044d4a2  751c                 jne 0x44d4c0
// 0044d4a4  8b500c               mov edx, dword ptr [eax + 0xc]
// 0044d4a7  3b15b4698b00         cmp edx, dword ptr [0x8b69b4]
// 0044d4ad  7511                 jne 0x44d4c0
// 0044d4af  b801000000           mov eax, 1
// 0044d4b4  33c9                 xor ecx, ecx
// 0044d4b6  85c0                 test eax, eax
// 0044d4b8  0f94c1               sete cl
// 0044d4bb  8bc1                 mov eax, ecx
// 0044d4bd  c20800               ret 8
// 0044d4c0  33c0                 xor eax, eax
// 0044d4c2  33c9                 xor ecx, ecx
// 0044d4c4  85c0                 test eax, eax
// 0044d4c6  0f94c1               sete cl
// 0044d4c9  8bc1                 mov eax, ecx
// 0044d4cb  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_0040b570@ns_ROCX000002@@QAEHHPBH@Z)

namespace ns_ROCX000002 {
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
