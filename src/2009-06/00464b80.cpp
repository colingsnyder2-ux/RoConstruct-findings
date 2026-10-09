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
// copied from an identical function in another client (function ?func@CScriptEditor@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
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
