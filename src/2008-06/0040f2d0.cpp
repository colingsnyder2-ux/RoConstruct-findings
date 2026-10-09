// roc 2008-06 0040f2d0  unit: VCBrowserViewExternal::?$CComContainedObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f2d0
//
// 0040f2d0  8b442408             mov eax, dword ptr [esp + 8]
// 0040f2d4  8b08                 mov ecx, dword ptr [eax]
// 0040f2d6  3b0dd8648100         cmp ecx, dword ptr [0x8164d8]
// 0040f2dc  7532                 jne 0x40f310
// 0040f2de  8b5004               mov edx, dword ptr [eax + 4]
// 0040f2e1  3b15dc648100         cmp edx, dword ptr [0x8164dc]
// 0040f2e7  7527                 jne 0x40f310
// 0040f2e9  8b4808               mov ecx, dword ptr [eax + 8]
// 0040f2ec  3b0de0648100         cmp ecx, dword ptr [0x8164e0]
// 0040f2f2  751c                 jne 0x40f310
// 0040f2f4  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040f2f7  3b15e4648100         cmp edx, dword ptr [0x8164e4]
// 0040f2fd  7511                 jne 0x40f310
// 0040f2ff  b801000000           mov eax, 1
// 0040f304  33c9                 xor ecx, ecx
// 0040f306  85c0                 test eax, eax
// 0040f308  0f94c1               sete cl
// 0040f30b  8bc1                 mov eax, ecx
// 0040f30d  c20800               ret 8
// 0040f310  33c0                 xor eax, eax
// 0040f312  33c9                 xor ecx, ecx
// 0040f314  85c0                 test eax, eax
// 0040f316  0f94c1               sete cl
// 0040f319  8bc1                 mov eax, ecx
// 0040f31b  c20800               ret 8
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
