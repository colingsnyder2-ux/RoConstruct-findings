// roc 2011-06 0048d830  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048d830
//
// 0048d830  56                   push esi
// 0048d831  e8bad7ffff           call 0x48aff0
// 0048d836  8bf0                 mov esi, eax
// 0048d838  6a01                 push 1
// 0048d83a  8bce                 mov ecx, esi
// 0048d83c  e8bfc4ffff           call 0x489d00
// 0048d841  6a01                 push 1
// 0048d843  50                   push eax
// 0048d844  8bce                 mov ecx, esi
// 0048d846  e8e5cfffff           call 0x48a830
// 0048d84b  6a01                 push 1
// 0048d84d  6a00                 push 0
// 0048d84f  50                   push eax
// 0048d850  8bce                 mov ecx, esi
// 0048d852  e819c8ffff           call 0x48a070
// 0048d857  5e                   pop esi
// 0048d858  c3                   ret 
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
