// from server: 91% by king_originala
// roc 2008-06 00464170  unit: CScriptEditor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464170
//
// 00464170  56                   push esi
// 00464171  e85ad2ffff           call 0x4613d0
// 00464176  8bf0                 mov esi, eax
// 00464178  6a01                 push 1
// 0046417a  6a00                 push 0
// 0046417c  8bce                 mov ecx, esi
// 0046417e  e89dc4ffff           call 0x460620
// 00464183  6a01                 push 1
// 00464185  8bce                 mov ecx, esi
// 00464187  85c0                 test eax, eax
// 00464189  740b                 je 0x464196
// 0046418b  6a00                 push 0
// 0046418d  6a00                 push 0
// 0046418f  e83cc4ffff           call 0x4605d0
// 00464194  5e                   pop esi
// 00464195  c3                   ret 
// 00464196  6a20                 push 0x20
// 00464198  6a00                 push 0
// 0046419a  e831c4ffff           call 0x4605d0
// 0046419f  5e                   pop esi
// 004641a0  c3                   ret 

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
