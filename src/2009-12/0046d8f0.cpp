// roc 2009-12 0046d8f0  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046d8f0
//
// 0046d8f0  56                   push esi
// 0046d8f1  e8ead2ffff           call 0x46abe0
// 0046d8f6  8bf0                 mov esi, eax
// 0046d8f8  6a01                 push 1
// 0046d8fa  8bce                 mov ecx, esi
// 0046d8fc  e82fc0ffff           call 0x469930
// 0046d901  6a01                 push 1
// 0046d903  50                   push eax
// 0046d904  8bce                 mov ecx, esi
// 0046d906  e815cbffff           call 0x46a420
// 0046d90b  6a01                 push 1
// 0046d90d  6a00                 push 0
// 0046d90f  50                   push eax
// 0046d910  8bce                 mov ecx, esi
// 0046d912  e8f9c2ffff           call 0x469c10
// 0046d917  5e                   pop esi
// 0046d918  c3                   ret 
// copied from an identical function in another client (function ?func@CScriptEditor@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
