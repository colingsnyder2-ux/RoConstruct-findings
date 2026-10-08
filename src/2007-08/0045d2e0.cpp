// from server: 57% by colin
// roc 2007-08 0045d2e0  unit: Scintilla::CScintillaView  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d2e0
//
// 0045d2e0  56                   push esi
// 0045d2e1  8b742408             mov esi, dword ptr [esp + 8]
// 0045d2e5  57                   push edi
// 0045d2e6  8b3e                 mov edi, dword ptr [esi]
// 0045d2e8  6a01                 push 1
// 0045d2ea  83c158               add ecx, 0x58
// 0045d2ed  e82efaffff           call 0x45cd20
// 0045d2f2  f7d8                 neg eax
// 0045d2f4  1bc0                 sbb eax, eax
// 0045d2f6  f7d8                 neg eax
// 0045d2f8  50                   push eax
// 0045d2f9  8b07                 mov eax, dword ptr [edi]
// 0045d2fb  8bce                 mov ecx, esi
// 0045d2fd  ffd0                 call eax
// 0045d2ff  5f                   pop edi
// 0045d300  5e                   pop esi
// 0045d301  c20400               ret 4

struct CScintillaView {
    char pad[0x58];
    int sub_45CD20(int);
    void method(int);
};

void CScintillaView::method(int arg) {
    int* p = (int*)arg;
    int r = sub_45CD20(1);
    int flag = (r != 0) ? 1 : 0;
    int (*fn)(void*, int) = (int (*)(void*, int))p[0];
    fn(this, flag);
}
