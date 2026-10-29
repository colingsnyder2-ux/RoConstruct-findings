// roc 2009-06 00464de0  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464de0
//
// 00464de0  56                   push esi
// 00464de1  e85ad2ffff           call 0x462040
// 00464de6  8bf0                 mov esi, eax
// 00464de8  6a01                 push 1
// 00464dea  6a00                 push 0
// 00464dec  8bce                 mov ecx, esi
// 00464dee  e89dc4ffff           call 0x461290
// 00464df3  6a01                 push 1
// 00464df5  8bce                 mov ecx, esi
// 00464df7  85c0                 test eax, eax
// 00464df9  740b                 je 0x464e06
// 00464dfb  6a00                 push 0
// 00464dfd  6a00                 push 0
// 00464dff  e83cc4ffff           call 0x461240
// 00464e04  5e                   pop esi
// 00464e05  c3                   ret 
// 00464e06  6a20                 push 0x20
// 00464e08  6a00                 push 0
// 00464e0a  e831c4ffff           call 0x461240
// 00464e0f  5e                   pop esi
// 00464e10  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@CScriptEditor@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Control {
    int query(int, bool);
    void update(int, int, bool);
};

struct CScriptEditor {
    int* control();
    void func_00464170();
};

void CScriptEditor::func_00464170()
{
    Control* p = reinterpret_cast<Control*>(control());
    if (p->query(0, true))
        p->update(0, 0, true);
    else
        p->update(0, 32, true);
}