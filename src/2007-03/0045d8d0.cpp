// roc 2007-03 0045d8d0  unit: seg_00450000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045d8d0
//
// 0045d8d0  56                   push esi
// 0045d8d1  e8dad0ffff           call 0x45a9b0
// 0045d8d6  8bf0                 mov esi, eax
// 0045d8d8  6a01                 push 1
// 0045d8da  8bce                 mov ecx, esi
// 0045d8dc  e80fbeffff           call 0x4596f0
// 0045d8e1  6a01                 push 1
// 0045d8e3  50                   push eax
// 0045d8e4  8bce                 mov ecx, esi
// 0045d8e6  e8f5c8ffff           call 0x45a1e0
// 0045d8eb  6a01                 push 1
// 0045d8ed  6a00                 push 0
// 0045d8ef  50                   push eax
// 0045d8f0  8bce                 mov ecx, esi
// 0045d8f2  e829c1ffff           call 0x459a20
// 0045d8f7  5e                   pop esi
// 0045d8f8  c3                   ret 
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
