// roc 2008-06 00416880  unit: VCContent::?$CComContainedObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416880
//
// 00416880  8b442408             mov eax, dword ptr [esp + 8]
// 00416884  8b08                 mov ecx, dword ptr [eax]
// 00416886  3b0d98648100         cmp ecx, dword ptr [0x816498]
// 0041688c  7532                 jne 0x4168c0
// 0041688e  8b5004               mov edx, dword ptr [eax + 4]
// 00416891  3b159c648100         cmp edx, dword ptr [0x81649c]
// 00416897  7527                 jne 0x4168c0
// 00416899  8b4808               mov ecx, dword ptr [eax + 8]
// 0041689c  3b0da0648100         cmp ecx, dword ptr [0x8164a0]
// 004168a2  751c                 jne 0x4168c0
// 004168a4  8b500c               mov edx, dword ptr [eax + 0xc]
// 004168a7  3b15a4648100         cmp edx, dword ptr [0x8164a4]
// 004168ad  7511                 jne 0x4168c0
// 004168af  b801000000           mov eax, 1
// 004168b4  33c9                 xor ecx, ecx
// 004168b6  85c0                 test eax, eax
// 004168b8  0f94c1               sete cl
// 004168bb  8bc1                 mov eax, ecx
// 004168bd  c20800               ret 8
// 004168c0  33c0                 xor eax, eax
// 004168c2  33c9                 xor ecx, ecx
// 004168c4  85c0                 test eax, eax
// 004168c6  0f94c1               sete cl
// 004168c9  8bc1                 mov eax, ecx
// 004168cb  c20800               ret 8
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
