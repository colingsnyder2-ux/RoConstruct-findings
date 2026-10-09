// roc 2009-12 0046d960  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046d960
//
// 0046d960  56                   push esi
// 0046d961  e87ad2ffff           call 0x46abe0
// 0046d966  8bf0                 mov esi, eax
// 0046d968  6a01                 push 1
// 0046d96a  8bce                 mov ecx, esi
// 0046d96c  e8bfbfffff           call 0x469930
// 0046d971  6a01                 push 1
// 0046d973  50                   push eax
// 0046d974  8bce                 mov ecx, esi
// 0046d976  e8a5caffff           call 0x46a420
// 0046d97b  6a01                 push 1
// 0046d97d  6a00                 push 0
// 0046d97f  50                   push eax
// 0046d980  8bce                 mov ecx, esi
// 0046d982  e8d9c2ffff           call 0x469c60
// 0046d987  5e                   pop esi
// 0046d988  c3                   ret 
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
