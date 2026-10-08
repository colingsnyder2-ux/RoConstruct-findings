// from server: 89% by colin
// roc 2007-08 004583e0  unit: CRobloxWnd  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004583e0
//
// 004583e0  56                   push esi
// 004583e1  57                   push edi
// 004583e2  8bf9                 mov edi, ecx
// 004583e4  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 004583ea  3935d8d08b00         cmp dword ptr [0x8bd0d8], esi
// 004583f0  7412                 je 0x458404
// 004583f2  8b06                 mov eax, dword ptr [esi]
// 004583f4  8b9098000000         mov edx, dword ptr [eax + 0x98]
// 004583fa  8bce                 mov ecx, esi
// 004583fc  ffd2                 call edx
// 004583fe  8935d8d08b00         mov dword ptr [0x8bd0d8], esi
// 00458404  8b87a4000000         mov eax, dword ptr [edi + 0xa4]
// 0045840a  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 0045840d  50                   push eax
// 0045840e  e80df50f00           call 0x557920
// 00458413  5f                   pop edi
// 00458414  5e                   pop esi
// 00458415  c3                   ret 

struct CRobloxWnd {
    char pad[0x68];
    int field_68;
    char pad2[0x94 - 0x6c];
    void* field_94;
    char pad3[0xa4 - 0x98];
    int field_a4;
    void func();
};

extern void* g_8bd0d8;

void CRobloxWnd::func() {
    void* p = field_94;
    if (g_8bd0d8 != p) {
        (*(void (__thiscall**)(void*))((*(int*)p) + 0x98))(p);
        g_8bd0d8 = p;
    }
    extern void __stdcall sub_557920(int, int);
    sub_557920(field_a4, field_68);
}
