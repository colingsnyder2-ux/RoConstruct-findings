// roc 2010-06 004713c0  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004713c0
//
// 004713c0  56                   push esi
// 004713c1  e82ad3ffff           call 0x46e6f0
// 004713c6  8bf0                 mov esi, eax
// 004713c8  6a01                 push 1
// 004713ca  8bce                 mov ecx, esi
// 004713cc  e85fc0ffff           call 0x46d430
// 004713d1  6a01                 push 1
// 004713d3  50                   push eax
// 004713d4  8bce                 mov ecx, esi
// 004713d6  e845cbffff           call 0x46df20
// 004713db  6a01                 push 1
// 004713dd  6a00                 push 0
// 004713df  50                   push eax
// 004713e0  8bce                 mov ecx, esi
// 004713e2  e829c3ffff           call 0x46d710
// 004713e7  5e                   pop esi
// 004713e8  c3                   ret 
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
