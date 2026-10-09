// roc 2007-03 00413290  unit: seg_00410000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00413290
//
// 00413290  8b442408             mov eax, dword ptr [esp + 8]
// 00413294  8b08                 mov ecx, dword ptr [eax]
// 00413296  3b0d30f17800         cmp ecx, dword ptr [0x78f130]
// 0041329c  7532                 jne 0x4132d0
// 0041329e  8b5004               mov edx, dword ptr [eax + 4]
// 004132a1  3b1534f17800         cmp edx, dword ptr [0x78f134]
// 004132a7  7527                 jne 0x4132d0
// 004132a9  8b4808               mov ecx, dword ptr [eax + 8]
// 004132ac  3b0d38f17800         cmp ecx, dword ptr [0x78f138]
// 004132b2  751c                 jne 0x4132d0
// 004132b4  8b500c               mov edx, dword ptr [eax + 0xc]
// 004132b7  3b153cf17800         cmp edx, dword ptr [0x78f13c]
// 004132bd  7511                 jne 0x4132d0
// 004132bf  b801000000           mov eax, 1
// 004132c4  33c9                 xor ecx, ecx
// 004132c6  85c0                 test eax, eax
// 004132c8  0f94c1               sete cl
// 004132cb  8bc1                 mov eax, ecx
// 004132cd  c20800               ret 8
// 004132d0  33c0                 xor eax, eax
// 004132d2  33c9                 xor ecx, ecx
// 004132d4  85c0                 test eax, eax
// 004132d6  0f94c1               sete cl
// 004132d9  8bc1                 mov eax, ecx
// 004132db  c20800               ret 8
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
