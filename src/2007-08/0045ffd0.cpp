// from server: 100% by colin
// roc 2007-08 0045ffd0  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ffd0
//
// 0045ffd0  56                   push esi
// 0045ffd1  e85ad2ffff           call 0x45d230
// 0045ffd6  8bf0                 mov esi, eax
// 0045ffd8  6a01                 push 1
// 0045ffda  8bce                 mov ecx, esi
// 0045ffdc  e87fbfffff           call 0x45bf60
// 0045ffe1  6a01                 push 1
// 0045ffe3  50                   push eax
// 0045ffe4  8bce                 mov ecx, esi
// 0045ffe6  e865caffff           call 0x45ca50
// 0045ffeb  6a01                 push 1
// 0045ffed  6a00                 push 0
// 0045ffef  50                   push eax
// 0045fff0  8bce                 mov ecx, esi
// 0045fff2  e899c2ffff           call 0x45c290
// 0045fff7  5e                   pop esi
// 0045fff8  c3                   ret 

struct CScriptEditor {
    void* field0;

    void sub_45FFD0();
};

extern "C" void* __cdecl sub_45D230();

struct Helper {
    void* sub_45BF60(int);
    void* sub_45CA50(void*, int);
    void* sub_45C290(void*, int, int);
};

void CScriptEditor::sub_45FFD0()
{
    Helper* p = (Helper*)sub_45D230();
    void* a = p->sub_45BF60(1);
    void* b = p->sub_45CA50(a, 1);
    p->sub_45C290(b, 0, 1);
}
