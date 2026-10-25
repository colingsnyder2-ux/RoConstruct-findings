// from server: 100% by king_originala
// roc 2008-06 00463f10  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463f10
//
// 00463f10  56                   push esi
// 00463f11  e8bad4ffff           call 0x4613d0
// 00463f16  8bf0                 mov esi, eax
// 00463f18  6a01                 push 1
// 00463f1a  8bce                 mov ecx, esi
// 00463f1c  e8ffc1ffff           call 0x460120
// 00463f21  6a01                 push 1
// 00463f23  50                   push eax
// 00463f24  8bce                 mov ecx, esi
// 00463f26  e8e5ccffff           call 0x460c10
// 00463f2b  6a01                 push 1
// 00463f2d  6a00                 push 0
// 00463f2f  50                   push eax
// 00463f30  8bce                 mov ecx, esi
// 00463f32  e8c9c4ffff           call 0x460400
// 00463f37  5e                   pop esi
// 00463f38  c3                   ret 

struct Control {
    int func_00460120(int direct);
    int func_00460c10(int position, int direct);
    void func_00460400(int position, int anchor, int direct);
};

struct CScriptEditor {
    int* func_004613d0();
    void func_00463f10();
};

void CScriptEditor::func_00463f10()
{
    Control* control = reinterpret_cast<Control*>(func_004613d0());
    int position = control->func_00460120(1);
    position = control->func_00460c10(position, 1);
    control->func_00460400(position, 0, 1);
}
