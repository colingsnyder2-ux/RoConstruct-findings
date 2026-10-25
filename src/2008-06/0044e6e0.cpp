// from server: 100% by king_originala
// roc 2008-06 0044e6e0  unit: CRobloxControlColorSelector  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044e6e0
//
// 0044e6e0  53                   push ebx
// 0044e6e1  8bd9                 mov ebx, ecx
// 0044e6e3  56                   push esi
// 0044e6e4  8b730c               mov esi, dword ptr [ebx + 0xc]
// 0044e6e7  85f6                 test esi, esi
// 0044e6e9  7425                 je 0x44e710
// 0044e6eb  57                   push edi
// 0044e6ec  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 0044e6ef  3bf7                 cmp esi, edi
// 0044e6f1  7410                 je 0x44e703
// 0044e6f3  8d4e08               lea ecx, [esi + 8]
// 0044e6f6  ff15143f8000         call dword ptr [0x803f14]
// 0044e6fc  83c60c               add esi, 0xc
// 0044e6ff  3bf7                 cmp esi, edi
// 0044e701  75f0                 jne 0x44e6f3
// 0044e703  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0044e706  50                   push eax
// 0044e707  e86e1f2500           call 0x6a067a
// 0044e70c  83c404               add esp, 4
// 0044e70f  5f                   pop edi
// 0044e710  5e                   pop esi
// 0044e711  c7430c00000000       mov dword ptr [ebx + 0xc], 0
// 0044e718  c7431000000000       mov dword ptr [ebx + 0x10], 0
// 0044e71f  c7431400000000       mov dword ptr [ebx + 0x14], 0
// 0044e726  5b                   pop ebx
// 0044e727  c3                   ret 

typedef void (__thiscall *DestroyFunction)(void *);
extern DestroyFunction destroyElement;
void __cdecl operator delete(void *);

struct Element {
    unsigned char data[8];
    unsigned char value[4];
};

struct S {
    unsigned char padding[12];
    Element *first;
    Element *last;
    Element *limit;

    void clear();
};

void S::clear()
{
    if (first) {
        Element *p = first;
        Element *end = last;
        for (; p != end; ++p)
            destroyElement(p->value);
        operator delete(first);
    }
    first = 0;
    last = 0;
    limit = 0;
}
