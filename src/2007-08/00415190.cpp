// from server: 100% by colin
// roc 2007-08 00415190  unit: VCLuaFunction::?$CComContainedObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00415190
//
// 00415190  8b442408             mov eax, dword ptr [esp + 8]
// 00415194  8b08                 mov ecx, dword ptr [eax]
// 00415196  3b0d10027900         cmp ecx, dword ptr [0x790210]
// 0041519c  7532                 jne 0x4151d0
// 0041519e  8b5004               mov edx, dword ptr [eax + 4]
// 004151a1  3b1514027900         cmp edx, dword ptr [0x790214]
// 004151a7  7527                 jne 0x4151d0
// 004151a9  8b4808               mov ecx, dword ptr [eax + 8]
// 004151ac  3b0d18027900         cmp ecx, dword ptr [0x790218]
// 004151b2  751c                 jne 0x4151d0
// 004151b4  8b500c               mov edx, dword ptr [eax + 0xc]
// 004151b7  3b151c027900         cmp edx, dword ptr [0x79021c]
// 004151bd  7511                 jne 0x4151d0
// 004151bf  b801000000           mov eax, 1
// 004151c4  33c9                 xor ecx, ecx
// 004151c6  85c0                 test eax, eax
// 004151c8  0f94c1               sete cl
// 004151cb  8bc1                 mov eax, ecx
// 004151cd  c20800               ret 8
// 004151d0  33c0                 xor eax, eax
// 004151d2  33c9                 xor ecx, ecx
// 004151d4  85c0                 test eax, eax
// 004151d6  0f94c1               sete cl
// 004151d9  8bc1                 mov eax, ecx
// 004151db  c20800               ret 8

struct S {
    int f(int, const int* a);
};

int S::f(int, const int* a) {
    extern int g0;
    extern int g1;
    extern int g2;
    extern int g3;
    int r;
    if (a[0] == g0 && a[1] == g1 && a[2] == g2 && a[3] == g3)
        r = 1;
    else
        r = 0;
    return !r;
}
