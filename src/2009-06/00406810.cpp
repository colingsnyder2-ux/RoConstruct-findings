// roc 2009-06 00406810  unit: VCApp::?$CComObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00406810
//
// 00406810  8b442408             mov eax, dword ptr [esp + 8]
// 00406814  8b08                 mov ecx, dword ptr [eax]
// 00406816  3b0db8698b00         cmp ecx, dword ptr [0x8b69b8]
// 0040681c  7532                 jne 0x406850
// 0040681e  8b5004               mov edx, dword ptr [eax + 4]
// 00406821  3b15bc698b00         cmp edx, dword ptr [0x8b69bc]
// 00406827  7527                 jne 0x406850
// 00406829  8b4808               mov ecx, dword ptr [eax + 8]
// 0040682c  3b0dc0698b00         cmp ecx, dword ptr [0x8b69c0]
// 00406832  751c                 jne 0x406850
// 00406834  8b500c               mov edx, dword ptr [eax + 0xc]
// 00406837  3b15c4698b00         cmp edx, dword ptr [0x8b69c4]
// 0040683d  7511                 jne 0x406850
// 0040683f  b801000000           mov eax, 1
// 00406844  33c9                 xor ecx, ecx
// 00406846  85c0                 test eax, eax
// 00406848  0f94c1               sete cl
// 0040684b  8bc1                 mov eax, ecx
// 0040684d  c20800               ret 8
// 00406850  33c0                 xor eax, eax
// 00406852  33c9                 xor ecx, ecx
// 00406854  85c0                 test eax, eax
// 00406856  0f94c1               sete cl
// 00406859  8bc1                 mov eax, ecx
// 0040685b  c20800               ret 8
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
