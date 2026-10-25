// from server: 100% by tester
// roc 2008-06 005c9c50  unit: RBX::Stats::TypedMemItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9c50
//
// 005c9c50  56                   push esi
// 005c9c51  8bf1                 mov esi, ecx
// 005c9c53  8d8e58010000         lea ecx, [esi + 0x158]
// 005c9c59  e86213e6ff           call 0x42afc0
// 005c9c5e  50                   push eax
// 005c9c5f  8bce                 mov ecx, esi
// 005c9c61  e83af2ffff           call 0x5c8ea0
// 005c9c66  5e                   pop esi
// 005c9c67  c3                   ret 

struct TypedStatsItem {
    int getValue();
    void update(int);
};

struct TypedMemItem {
    void update();
};

void TypedMemItem::update()
{
    int v = ((TypedStatsItem*)((char*)this + 0x158))->getValue();
    ((TypedStatsItem*)this)->update(v);
}
