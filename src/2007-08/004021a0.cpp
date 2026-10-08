// from server: 89% by colin
// roc 2007-08 004021a0  unit: VCWorkspace::?$CComObject  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004021a0
//
// 004021a0  53                   push ebx
// 004021a1  8b1df0d27700         mov ebx, dword ptr [0x77d2f0]
// 004021a7  56                   push esi
// 004021a8  57                   push edi
// 004021a9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004021ad  be784a7800           mov esi, 0x784a78
// 004021b2  8b06                 mov eax, dword ptr [esi]
// 004021b4  50                   push eax
// 004021b5  57                   push edi
// 004021b6  ffd3                 call ebx
// 004021b8  85c0                 test eax, eax
// 004021ba  7416                 je 0x4021d2
// 004021bc  83c604               add esi, 4
// 004021bf  81fea84a7800         cmp esi, 0x784aa8
// 004021c5  7ceb                 jl 0x4021b2
// 004021c7  5f                   pop edi
// 004021c8  5e                   pop esi
// 004021c9  b801000000           mov eax, 1
// 004021ce  5b                   pop ebx
// 004021cf  c20400               ret 4
// 004021d2  5f                   pop edi
// 004021d3  5e                   pop esi
// 004021d4  33c0                 xor eax, eax
// 004021d6  5b                   pop ebx
// 004021d7  c20400               ret 4

extern "C" int __stdcall lstrcmpiA(const char* a, const char* b);

typedef int (__stdcall *CmpFn)(const char*, const char*);

extern CmpFn g_cmp;
extern const char* g_names[12];

int __stdcall sub_004021a0(const char* name)
{
    CmpFn fn = g_cmp;
    const char** p = g_names;
    do {
        if (fn(*p, name) == 0)
            return 0;
        ++p;
    } while (p < g_names + 12);
    return 1;
}
