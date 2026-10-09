// roc 2012-06 004a0530  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a0530
//
// 004a0530  56                   push esi
// 004a0531  e85a370500           call 0x4f3c90
// 004a0536  8bf0                 mov esi, eax
// 004a0538  6a01                 push 1
// 004a053a  8bce                 mov ecx, esi
// 004a053c  e8efc4ffff           call 0x49ca30
// 004a0541  6a01                 push 1
// 004a0543  50                   push eax
// 004a0544  8bce                 mov ecx, esi
// 004a0546  e815d0ffff           call 0x49d560
// 004a054b  6a01                 push 1
// 004a054d  6a00                 push 0
// 004a054f  50                   push eax
// 004a0550  8bce                 mov ecx, esi
// 004a0552  e849c8ffff           call 0x49cda0
// 004a0557  5e                   pop esi
// 004a0558  c3                   ret 
// copied from an identical function in another client (function ?func@CScriptEditor@ns_ROCX000007@@QAEXXZ)

namespace ns_ROCX000007 {
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
