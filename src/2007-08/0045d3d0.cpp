// from server: 23% by colin
// roc 2007-08 0045d3d0  unit: Scintilla::CScintillaView  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d3d0
//
// 0045d3d0  53                   push ebx
// 0045d3d1  56                   push esi
// 0045d3d2  57                   push edi
// 0045d3d3  8d7158               lea esi, [ecx + 0x58]
// 0045d3d6  6a01                 push 1
// 0045d3d8  8bce                 mov ecx, esi
// 0045d3da  e8f1f3ffff           call 0x45c7d0
// 0045d3df  6a01                 push 1
// 0045d3e1  8bce                 mov ecx, esi
// 0045d3e3  8bf8                 mov edi, eax
// 0045d3e5  e816f4ffff           call 0x45c800
// 0045d3ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045d3ee  8b11                 mov edx, dword ptr [ecx]
// 0045d3f0  33db                 xor ebx, ebx
// 0045d3f2  3bf8                 cmp edi, eax
// 0045d3f4  8b02                 mov eax, dword ptr [edx]
// 0045d3f6  0f95c3               setne bl
// 0045d3f9  53                   push ebx
// 0045d3fa  ffd0                 call eax
// 0045d3fc  5f                   pop edi
// 0045d3fd  5e                   pop esi
// 0045d3fe  5b                   pop ebx
// 0045d3ff  c20400               ret 4

struct CScintillaView {
    char pad[0x58];
    int field_58;
    int method_45c7d0(int);
    int method_45c800(int);
    void method_45d3d0(int*);
};

int CScintillaView::method_45c7d0(int a) {
    return 0;
}

int CScintillaView::method_45c800(int a) {
    return 0;
}

void CScintillaView::method_45d3d0(int* p) {
    int* self = (int*)((char*)this + 0x58);
    int r1 = ((CScintillaView*)self)->method_45c7d0(1);
    int r2 = ((CScintillaView*)self)->method_45c800(1);
    int v = *p;
    int* vtbl = (int*)v;
    int (*fn)(void*, int) = (int (*)(void*, int))vtbl[0];
    int flag = (r1 != r2) ? 1 : 0;
    fn(p, flag);
}
