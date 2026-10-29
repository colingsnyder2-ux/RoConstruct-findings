// roc 2009-06 00464b80  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464b80
//
// 00464b80  56                   push esi
// 00464b81  e8bad4ffff           call 0x462040
// 00464b86  8bf0                 mov esi, eax
// 00464b88  6a01                 push 1
// 00464b8a  8bce                 mov ecx, esi
// 00464b8c  e8ffc1ffff           call 0x460d90
// 00464b91  6a01                 push 1
// 00464b93  50                   push eax
// 00464b94  8bce                 mov ecx, esi
// 00464b96  e8e5ccffff           call 0x461880
// 00464b9b  6a01                 push 1
// 00464b9d  6a00                 push 0
// 00464b9f  50                   push eax
// 00464ba0  8bce                 mov ecx, esi
// 00464ba2  e8c9c4ffff           call 0x461070
// 00464ba7  5e                   pop esi
// 00464ba8  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00463f10@CScriptEditor@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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