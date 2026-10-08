// from server: 88% by colin
// roc 2007-08 0045d880  unit: Scintilla::CScintillaView  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d880
//
// 0045d880  8b442404             mov eax, dword ptr [esp + 4]
// 0045d884  56                   push esi
// 0045d885  8d7158               lea esi, [ecx + 0x58]
// 0045d888  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0045d88b  6a01                 push 1
// 0045d88d  51                   push ecx
// 0045d88e  8bce                 mov ecx, esi
// 0045d890  e8bbf1ffff           call 0x45ca50
// 0045d895  6a01                 push 1
// 0045d897  50                   push eax
// 0045d898  8bce                 mov ecx, esi
// 0045d89a  e8c1f6ffff           call 0x45cf60
// 0045d89f  5e                   pop esi
// 0045d8a0  c20400               ret 4

struct CScintillaView {
    char pad[0x58];
    int field_58;
    int sub_45CA50(int, int);
    int sub_45CF60(int, int);
    int func(int*);
};

int CScintillaView::func(int* p) {
    int* self = (int*)((char*)this + 0x58);
    int v = p[3];
    int r = ((CScintillaView*)self)->sub_45CA50(v, 1);
    return ((CScintillaView*)self)->sub_45CF60(r, 1);
}
