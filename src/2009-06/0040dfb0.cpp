// roc 2009-06 0040dfb0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040dfb0
//
// 0040dfb0  8b442408             mov eax, dword ptr [esp + 8]
// 0040dfb4  8b08                 mov ecx, dword ptr [eax]
// 0040dfb6  3b0dc8698b00         cmp ecx, dword ptr [0x8b69c8]
// 0040dfbc  7532                 jne 0x40dff0
// 0040dfbe  8b5004               mov edx, dword ptr [eax + 4]
// 0040dfc1  3b15cc698b00         cmp edx, dword ptr [0x8b69cc]
// 0040dfc7  7527                 jne 0x40dff0
// 0040dfc9  8b4808               mov ecx, dword ptr [eax + 8]
// 0040dfcc  3b0dd0698b00         cmp ecx, dword ptr [0x8b69d0]
// 0040dfd2  751c                 jne 0x40dff0
// 0040dfd4  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040dfd7  3b15d4698b00         cmp edx, dword ptr [0x8b69d4]
// 0040dfdd  7511                 jne 0x40dff0
// 0040dfdf  b801000000           mov eax, 1
// 0040dfe4  33c9                 xor ecx, ecx
// 0040dfe6  85c0                 test eax, eax
// 0040dfe8  0f94c1               sete cl
// 0040dfeb  8bc1                 mov eax, ecx
// 0040dfed  c20800               ret 8
// 0040dff0  33c0                 xor eax, eax
// 0040dff2  33c9                 xor ecx, ecx
// 0040dff4  85c0                 test eax, eax
// 0040dff6  0f94c1               sete cl
// 0040dff9  8bc1                 mov eax, ecx
// 0040dffb  c20800               ret 8
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
