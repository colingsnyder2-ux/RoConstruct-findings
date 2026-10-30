// roc 2009-06 00464d70  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464d70
//
// 00464d70  56                   push esi
// 00464d71  e8cad2ffff           call 0x462040
// 00464d76  8bf0                 mov esi, eax
// 00464d78  6a01                 push 1
// 00464d7a  6a01                 push 1
// 00464d7c  8bce                 mov ecx, esi
// 00464d7e  e80dc5ffff           call 0x461290
// 00464d83  6a01                 push 1
// 00464d85  8bce                 mov ecx, esi
// 00464d87  85c0                 test eax, eax
// 00464d89  740b                 je 0x464d96
// 00464d8b  6a00                 push 0
// 00464d8d  6a01                 push 1
// 00464d8f  e8acc4ffff           call 0x461240
// 00464d94  5e                   pop esi
// 00464d95  c3                   ret 
// 00464d96  6a10                 push 0x10
// 00464d98  6a01                 push 1
// 00464d9a  e8a1c4ffff           call 0x461240
// 00464d9f  5e                   pop esi
// 00464da0  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@CScriptEditor@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Control {
    int query(int, bool);
    void update(int, int, bool);
};

struct CScriptEditor {
    int* control();
    void func_00464100();
};

void CScriptEditor::func_00464100()
{
    Control* p = reinterpret_cast<Control*>(control());
    if (p->query(1, true))
        p->update(1, 0, true);
    else
        p->update(1, 16, true);
}