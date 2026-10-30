// roc 2009-06 00464bf0  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464bf0
//
// 00464bf0  56                   push esi
// 00464bf1  e84ad4ffff           call 0x462040
// 00464bf6  8bf0                 mov esi, eax
// 00464bf8  6a01                 push 1
// 00464bfa  8bce                 mov ecx, esi
// 00464bfc  e88fc1ffff           call 0x460d90
// 00464c01  6a01                 push 1
// 00464c03  50                   push eax
// 00464c04  8bce                 mov ecx, esi
// 00464c06  e875ccffff           call 0x461880
// 00464c0b  6a01                 push 1
// 00464c0d  6a00                 push 0
// 00464c0f  50                   push eax
// 00464c10  8bce                 mov ecx, esi
// 00464c12  e8a9c4ffff           call 0x4610c0
// 00464c17  5e                   pop esi
// 00464c18  c3                   ret 
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