// roc 2011-06 0048d7c0  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048d7c0
//
// 0048d7c0  56                   push esi
// 0048d7c1  e82ad8ffff           call 0x48aff0
// 0048d7c6  8bf0                 mov esi, eax
// 0048d7c8  6a01                 push 1
// 0048d7ca  8bce                 mov ecx, esi
// 0048d7cc  e82fc5ffff           call 0x489d00
// 0048d7d1  6a01                 push 1
// 0048d7d3  50                   push eax
// 0048d7d4  8bce                 mov ecx, esi
// 0048d7d6  e855d0ffff           call 0x48a830
// 0048d7db  6a01                 push 1
// 0048d7dd  6a00                 push 0
// 0048d7df  50                   push eax
// 0048d7e0  8bce                 mov ecx, esi
// 0048d7e2  e839c8ffff           call 0x48a020
// 0048d7e7  5e                   pop esi
// 0048d7e8  c3                   ret 
// copied from an identical function in another client (function ?func@CScriptEditor@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
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
