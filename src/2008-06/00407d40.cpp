// roc 2008-06 00407d40  unit: VCApp::?$CComObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407d40
//
// 00407d40  8b442408             mov eax, dword ptr [esp + 8]
// 00407d44  8b08                 mov ecx, dword ptr [eax]
// 00407d46  3b0dc8648100         cmp ecx, dword ptr [0x8164c8]
// 00407d4c  7532                 jne 0x407d80
// 00407d4e  8b5004               mov edx, dword ptr [eax + 4]
// 00407d51  3b15cc648100         cmp edx, dword ptr [0x8164cc]
// 00407d57  7527                 jne 0x407d80
// 00407d59  8b4808               mov ecx, dword ptr [eax + 8]
// 00407d5c  3b0dd0648100         cmp ecx, dword ptr [0x8164d0]
// 00407d62  751c                 jne 0x407d80
// 00407d64  8b500c               mov edx, dword ptr [eax + 0xc]
// 00407d67  3b15d4648100         cmp edx, dword ptr [0x8164d4]
// 00407d6d  7511                 jne 0x407d80
// 00407d6f  b801000000           mov eax, 1
// 00407d74  33c9                 xor ecx, ecx
// 00407d76  85c0                 test eax, eax
// 00407d78  0f94c1               sete cl
// 00407d7b  8bc1                 mov eax, ecx
// 00407d7d  c20800               ret 8
// 00407d80  33c0                 xor eax, eax
// 00407d82  33c9                 xor ecx, ecx
// 00407d84  85c0                 test eax, eax
// 00407d86  0f94c1               sete cl
// 00407d89  8bc1                 mov eax, ecx
// 00407d8b  c20800               ret 8
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
