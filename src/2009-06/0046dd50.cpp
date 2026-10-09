// roc 2009-06 0046dd50  unit: VCContent::?$CComObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046dd50
//
// 0046dd50  8b442408             mov eax, dword ptr [esp + 8]
// 0046dd54  8b08                 mov ecx, dword ptr [eax]
// 0046dd56  3b0d88698b00         cmp ecx, dword ptr [0x8b6988]
// 0046dd5c  7532                 jne 0x46dd90
// 0046dd5e  8b5004               mov edx, dword ptr [eax + 4]
// 0046dd61  3b158c698b00         cmp edx, dword ptr [0x8b698c]
// 0046dd67  7527                 jne 0x46dd90
// 0046dd69  8b4808               mov ecx, dword ptr [eax + 8]
// 0046dd6c  3b0d90698b00         cmp ecx, dword ptr [0x8b6990]
// 0046dd72  751c                 jne 0x46dd90
// 0046dd74  8b500c               mov edx, dword ptr [eax + 0xc]
// 0046dd77  3b1594698b00         cmp edx, dword ptr [0x8b6994]
// 0046dd7d  7511                 jne 0x46dd90
// 0046dd7f  b801000000           mov eax, 1
// 0046dd84  33c9                 xor ecx, ecx
// 0046dd86  85c0                 test eax, eax
// 0046dd88  0f94c1               sete cl
// 0046dd8b  8bc1                 mov eax, ecx
// 0046dd8d  c20800               ret 8
// 0046dd90  33c0                 xor eax, eax
// 0046dd92  33c9                 xor ecx, ecx
// 0046dd94  85c0                 test eax, eax
// 0046dd96  0f94c1               sete cl
// 0046dd99  8bc1                 mov eax, ecx
// 0046dd9b  c20800               ret 8
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
