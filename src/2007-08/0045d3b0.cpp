// from server: 100% by colin
// roc 2007-08 0045d3b0  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d3b0
//
// 0045d3b0  56                   push esi
// 0045d3b1  8b742408             mov esi, dword ptr [esp + 8]
// 0045d3b5  57                   push edi
// 0045d3b6  8b3e                 mov edi, dword ptr [esi]
// 0045d3b8  6a01                 push 1
// 0045d3ba  83c158               add ecx, 0x58
// 0045d3bd  e8deecffff           call 0x45c0a0
// 0045d3c2  50                   push eax
// 0045d3c3  8b07                 mov eax, dword ptr [edi]
// 0045d3c5  8bce                 mov ecx, esi
// 0045d3c7  ffd0                 call eax
// 0045d3c9  5f                   pop edi
// 0045d3ca  5e                   pop esi
// 0045d3cb  c20400               ret 4

struct CScintillaView_Sub {
    int method(int);
};

struct CScintillaView {
    char pad[0x58];
    CScintillaView_Sub sub;
    void sub_45D3B0(int* p);
};

void CScintillaView::sub_45D3B0(int* p) {
    int* v = *(int**)p;
    int r = sub.method(1);
    ((void (__thiscall*)(int*, int))v[0])(p, r);
}
