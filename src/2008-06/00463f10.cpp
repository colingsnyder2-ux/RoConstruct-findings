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
