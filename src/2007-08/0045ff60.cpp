// from server: 100% by colin
// roc 2007-08 0045ff60  unit: CScriptEditor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ff60
//
// 0045ff60  56                   push esi
// 0045ff61  e8cad2ffff           call 0x45d230
// 0045ff66  8bf0                 mov esi, eax
// 0045ff68  6a01                 push 1
// 0045ff6a  8bce                 mov ecx, esi
// 0045ff6c  e8efbfffff           call 0x45bf60
// 0045ff71  6a01                 push 1
// 0045ff73  50                   push eax
// 0045ff74  8bce                 mov ecx, esi
// 0045ff76  e8d5caffff           call 0x45ca50
// 0045ff7b  6a01                 push 1
// 0045ff7d  6a00                 push 0
// 0045ff7f  50                   push eax
// 0045ff80  8bce                 mov ecx, esi
// 0045ff82  e8b9c2ffff           call 0x45c240
// 0045ff87  5e                   pop esi
// 0045ff88  c3                   ret 

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
