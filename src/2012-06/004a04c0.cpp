// roc 2012-06 004a04c0  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a04c0
//
// 004a04c0  56                   push esi
// 004a04c1  e8ca370500           call 0x4f3c90
// 004a04c6  8bf0                 mov esi, eax
// 004a04c8  6a01                 push 1
// 004a04ca  8bce                 mov ecx, esi
// 004a04cc  e85fc5ffff           call 0x49ca30
// 004a04d1  6a01                 push 1
// 004a04d3  50                   push eax
// 004a04d4  8bce                 mov ecx, esi
// 004a04d6  e885d0ffff           call 0x49d560
// 004a04db  6a01                 push 1
// 004a04dd  6a00                 push 0
// 004a04df  50                   push eax
// 004a04e0  8bce                 mov ecx, esi
// 004a04e2  e869c8ffff           call 0x49cd50
// 004a04e7  5e                   pop esi
// 004a04e8  c3                   ret 
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
