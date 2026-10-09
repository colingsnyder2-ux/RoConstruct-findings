// roc 2007-03 0045d860  unit: seg_00450000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045d860
//
// 0045d860  56                   push esi
// 0045d861  e84ad1ffff           call 0x45a9b0
// 0045d866  8bf0                 mov esi, eax
// 0045d868  6a01                 push 1
// 0045d86a  8bce                 mov ecx, esi
// 0045d86c  e87fbeffff           call 0x4596f0
// 0045d871  6a01                 push 1
// 0045d873  50                   push eax
// 0045d874  8bce                 mov ecx, esi
// 0045d876  e865c9ffff           call 0x45a1e0
// 0045d87b  6a01                 push 1
// 0045d87d  6a00                 push 0
// 0045d87f  50                   push eax
// 0045d880  8bce                 mov ecx, esi
// 0045d882  e849c1ffff           call 0x4599d0
// 0045d887  5e                   pop esi
// 0045d888  c3                   ret 
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
