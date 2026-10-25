// from server: 100% by king_originala
// roc 2008-06 00463f80  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463f80
//
// 00463f80  56                   push esi
// 00463f81  e84ad4ffff           call 0x4613d0
// 00463f86  8bf0                 mov esi, eax
// 00463f88  6a01                 push 1
// 00463f8a  8bce                 mov ecx, esi
// 00463f8c  e88fc1ffff           call 0x460120
// 00463f91  6a01                 push 1
// 00463f93  50                   push eax
// 00463f94  8bce                 mov ecx, esi
// 00463f96  e875ccffff           call 0x460c10
// 00463f9b  6a01                 push 1
// 00463f9d  6a00                 push 0
// 00463f9f  50                   push eax
// 00463fa0  8bce                 mov ecx, esi
// 00463fa2  e8a9c4ffff           call 0x460450
// 00463fa7  5e                   pop esi
// 00463fa8  c3                   ret 

struct Control {
    int func_00460120(int);
    int func_00460c10(int, int);
    void func_00460450(int, int, int);
};

struct CScriptEditor {
    int* func_004613d0();
    void func_00463f80();
};

void CScriptEditor::func_00463f80()
{
    Control* control = reinterpret_cast<Control*>(func_004613d0());
    int position = control->func_00460120(1);
    int line = control->func_00460c10(position, 1);
    control->func_00460450(line, 0, 1);
}
