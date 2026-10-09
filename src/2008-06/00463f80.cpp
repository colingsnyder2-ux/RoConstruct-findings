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
// copied from an identical function in another client (function ?func@CScriptEditor@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
struct CScriptEditor {
    void* method_45d230();
    void* method_45bf60(int);
    void* method_45ca50(void*, int);
    void* method_45c240(void*, int, int);
    void func();
};

void CScriptEditor::func() {
    CScriptEditor* p = (CScriptEditor*)method_45d230();
    void* a = p->method_45bf60(1);
    void* b = p->method_45ca50(a, 1);
    p->method_45c240(b, 0, 1);
}
}
