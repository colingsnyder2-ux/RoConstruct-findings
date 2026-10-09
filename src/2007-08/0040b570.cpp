// from server: 100% by colin
// roc 2007-08 0040b570  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b570
//
// 0040b570  8b442408             mov eax, dword ptr [esp + 8]
// 0040b574  8b08                 mov ecx, dword ptr [eax]
// 0040b576  3b0d40027900         cmp ecx, dword ptr [0x790240]
// 0040b57c  7532                 jne 0x40b5b0
// 0040b57e  8b5004               mov edx, dword ptr [eax + 4]
// 0040b581  3b1544027900         cmp edx, dword ptr [0x790244]
// 0040b587  7527                 jne 0x40b5b0
// 0040b589  8b4808               mov ecx, dword ptr [eax + 8]
// 0040b58c  3b0d48027900         cmp ecx, dword ptr [0x790248]
// 0040b592  751c                 jne 0x40b5b0
// 0040b594  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040b597  3b154c027900         cmp edx, dword ptr [0x79024c]
// 0040b59d  7511                 jne 0x40b5b0
// 0040b59f  b801000000           mov eax, 1
// 0040b5a4  33c9                 xor ecx, ecx
// 0040b5a6  85c0                 test eax, eax
// 0040b5a8  0f94c1               sete cl
// 0040b5ab  8bc1                 mov eax, ecx
// 0040b5ad  c20800               ret 8
// 0040b5b0  33c0                 xor eax, eax
// 0040b5b2  33c9                 xor ecx, ecx
// 0040b5b4  85c0                 test eax, eax
// 0040b5b6  0f94c1               sete cl
// 0040b5b9  8bc1                 mov eax, ecx
// 0040b5bb  c20800               ret 8

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
