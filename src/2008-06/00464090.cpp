// from server: 100% by king_originala
// roc 2008-06 00464090  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464090
//
// 00464090  56                   push esi
// 00464091  e83ad3ffff           call 0x4613d0
// 00464096  8bf0                 mov esi, eax
// 00464098  6a01                 push 1
// 0046409a  6a02                 push 2
// 0046409c  8bce                 mov ecx, esi
// 0046409e  e87dc5ffff           call 0x460620
// 004640a3  6a01                 push 1
// 004640a5  8bce                 mov ecx, esi
// 004640a7  85c0                 test eax, eax
// 004640a9  740b                 je 0x4640b6
// 004640ab  6a00                 push 0
// 004640ad  6a02                 push 2
// 004640af  e81cc5ffff           call 0x4605d0
// 004640b4  5e                   pop esi
// 004640b5  c3                   ret 
// 004640b6  6a10                 push 0x10
// 004640b8  6a02                 push 2
// 004640ba  e811c5ffff           call 0x4605d0
// 004640bf  5e                   pop esi
// 004640c0  c3                   ret 

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
