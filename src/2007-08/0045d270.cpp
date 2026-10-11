// from server: 100% by colin
// roc 2007-08 0045d270  unit: Scintilla::CScintillaView  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d270
//
// 0045d270  53                   push ebx
// 0045d271  56                   push esi
// 0045d272  57                   push edi
// 0045d273  8bf9                 mov edi, ecx
// 0045d275  8d7758               lea esi, [edi + 0x58]
// 0045d278  6a01                 push 1
// 0045d27a  8bce                 mov ecx, esi
// 0045d27c  e84ff5ffff           call 0x45c7d0
// 0045d281  6a01                 push 1
// 0045d283  8bce                 mov ecx, esi
// 0045d285  8bd8                 mov ebx, eax
// 0045d287  e874f5ffff           call 0x45c800
// 0045d28c  3bd8                 cmp ebx, eax
// 0045d28e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045d292  7412                 je 0x45d2a6
// 0045d294  8b01                 mov eax, dword ptr [ecx]
// 0045d296  8b4074               mov eax, dword ptr [eax + 0x74]
// 0045d299  836014fb             and dword ptr [eax + 0x14], 0xfffffffb
// 0045d29d  8b11                 mov edx, dword ptr [ecx]
// 0045d29f  8b4274               mov eax, dword ptr [edx + 0x74]
// 0045d2a2  83481401             or dword ptr [eax + 0x14], 1
// 0045d2a6  51                   push ecx
// 0045d2a7  8bcf                 mov ecx, edi
// 0045d2a9  e868361d00           call 0x630916
// 0045d2ae  5f                   pop edi
// 0045d2af  5e                   pop esi
// 0045d2b0  5b                   pop ebx
// 0045d2b1  c20400               ret 4

struct InnerObj {
    char pad[0x14];
    int flags;
};

struct ArgVTable {
    char pad[0x74];
    InnerObj* inner;
};

struct ArgObj {
    ArgVTable* vtable;
};

struct SubObj {
    int method_45c7d0(int);
    int method_45c800(int);
};

struct CScintillaView {
    char pad[0x58];
    SubObj sub;
    void method_630916(void*);
    void func(ArgObj* arg);
};

void CScintillaView::func(ArgObj* arg) {
    int a = sub.method_45c7d0(1);
    int b = sub.method_45c800(1);
    if (a != b) {
        arg->vtable->inner->flags &= ~4;
        arg->vtable->inner->flags |= 1;
    }
    method_630916(arg);
}
