// roc 2009-06 00464d00  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464d00
//
// 00464d00  56                   push esi
// 00464d01  e83ad3ffff           call 0x462040
// 00464d06  8bf0                 mov esi, eax
// 00464d08  6a01                 push 1
// 00464d0a  6a02                 push 2
// 00464d0c  8bce                 mov ecx, esi
// 00464d0e  e87dc5ffff           call 0x461290
// 00464d13  6a01                 push 1
// 00464d15  8bce                 mov ecx, esi
// 00464d17  85c0                 test eax, eax
// 00464d19  740b                 je 0x464d26
// 00464d1b  6a00                 push 0
// 00464d1d  6a02                 push 2
// 00464d1f  e81cc5ffff           call 0x461240
// 00464d24  5e                   pop esi
// 00464d25  c3                   ret 
// 00464d26  6a10                 push 0x10
// 00464d28  6a02                 push 2
// 00464d2a  e811c5ffff           call 0x461240
// 00464d2f  5e                   pop esi
// 00464d30  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@CScriptEditor@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Control {
    int query(int, bool);
    void update(int, int, bool);
};

struct CScriptEditor {
    int* control();
    void func_00464090();
};

void CScriptEditor::func_00464090()
{
    Control* p = reinterpret_cast<Control*>(control());
    if (p->query(2, true))
        p->update(2, 0, true);
    else
        p->update(2, 16, true);
}