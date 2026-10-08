// from server: 68% by colin
// roc 2007-08 005974a0  unit: RBX::Stats::TypedMemItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005974a0
//
// 005974a0  56                   push esi
// 005974a1  8bf1                 mov esi, ecx
// 005974a3  8d8e10010000         lea ecx, [esi + 0x110]
// 005974a9  e8e272feff           call 0x57e790
// 005974ae  50                   push eax
// 005974af  8bce                 mov ecx, esi
// 005974b1  e8aaf5ffff           call 0x596a60
// 005974b6  5e                   pop esi
// 005974b7  c3                   ret 

struct TypedStatsItem {
    char pad[0x110];
    int* getValuePtr();
    void formatMem(int);
};

struct TypedMemItem : TypedStatsItem {
    void update();
};

void TypedMemItem::update()
{
    formatMem(*getValuePtr());
}
