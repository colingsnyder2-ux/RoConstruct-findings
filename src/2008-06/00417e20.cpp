// roc 2008-06 00417e20  unit: VCLuaFunction::?$CComObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417e20
//
// 00417e20  8b442408             mov eax, dword ptr [esp + 8]
// 00417e24  8b08                 mov ecx, dword ptr [eax]
// 00417e26  3b0da8648100         cmp ecx, dword ptr [0x8164a8]
// 00417e2c  7532                 jne 0x417e60
// 00417e2e  8b5004               mov edx, dword ptr [eax + 4]
// 00417e31  3b15ac648100         cmp edx, dword ptr [0x8164ac]
// 00417e37  7527                 jne 0x417e60
// 00417e39  8b4808               mov ecx, dword ptr [eax + 8]
// 00417e3c  3b0db0648100         cmp ecx, dword ptr [0x8164b0]
// 00417e42  751c                 jne 0x417e60
// 00417e44  8b500c               mov edx, dword ptr [eax + 0xc]
// 00417e47  3b15b4648100         cmp edx, dword ptr [0x8164b4]
// 00417e4d  7511                 jne 0x417e60
// 00417e4f  b801000000           mov eax, 1
// 00417e54  33c9                 xor ecx, ecx
// 00417e56  85c0                 test eax, eax
// 00417e58  0f94c1               sete cl
// 00417e5b  8bc1                 mov eax, ecx
// 00417e5d  c20800               ret 8
// 00417e60  33c0                 xor eax, eax
// 00417e62  33c9                 xor ecx, ecx
// 00417e64  85c0                 test eax, eax
// 00417e66  0f94c1               sete cl
// 00417e69  8bc1                 mov eax, ecx
// 00417e6b  c20800               ret 8
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
