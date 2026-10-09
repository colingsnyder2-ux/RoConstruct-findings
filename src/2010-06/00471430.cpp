// roc 2010-06 00471430  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00471430
//
// 00471430  56                   push esi
// 00471431  e8bad2ffff           call 0x46e6f0
// 00471436  8bf0                 mov esi, eax
// 00471438  6a01                 push 1
// 0047143a  8bce                 mov ecx, esi
// 0047143c  e8efbfffff           call 0x46d430
// 00471441  6a01                 push 1
// 00471443  50                   push eax
// 00471444  8bce                 mov ecx, esi
// 00471446  e8d5caffff           call 0x46df20
// 0047144b  6a01                 push 1
// 0047144d  6a00                 push 0
// 0047144f  50                   push eax
// 00471450  8bce                 mov ecx, esi
// 00471452  e809c3ffff           call 0x46d760
// 00471457  5e                   pop esi
// 00471458  c3                   ret 
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
