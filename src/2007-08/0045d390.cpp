// from server: 91% by colin
// roc 2007-08 0045d390  unit: Scintilla::CScintillaView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d390
//
// 0045d390  56                   push esi
// 0045d391  8b742408             mov esi, dword ptr [esp + 8]
// 0045d395  57                   push edi
// 0045d396  8b3e                 mov edi, dword ptr [esi]
// 0045d398  6a01                 push 1
// 0045d39a  83c158               add ecx, 0x58
// 0045d39d  e89ef7ffff           call 0x45cb40
// 0045d3a2  50                   push eax
// 0045d3a3  8b07                 mov eax, dword ptr [edi]
// 0045d3a5  8bce                 mov ecx, esi
// 0045d3a7  ffd0                 call eax
// 0045d3a9  5f                   pop edi
// 0045d3aa  5e                   pop esi
// 0045d3ab  c20400               ret 4

struct CScintillaView {
    char pad[0x58];
    int field_58;
    int method_45cb40(int);
    int method_45d390(int*);
};

int CScintillaView::method_45d390(int* arg) {
    int* p = arg;
    int v = *p;
    int r = method_45cb40(1);
    return (*(int (__thiscall**)(int*, int))v)(p, r);
}
