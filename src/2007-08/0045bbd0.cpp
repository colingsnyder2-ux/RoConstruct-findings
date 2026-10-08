// from server: 100% by colin
// roc 2007-08 0045bbd0  unit: CRobloxWnd::RenderStatsItem  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045bbd0
//
// 0045bbd0  56                   push esi
// 0045bbd1  8bf1                 mov esi, ecx
// 0045bbd3  e828d0ffff           call 0x458c00
// 0045bbd8  6a00                 push 0
// 0045bbda  8bce                 mov ecx, esi
// 0045bbdc  e8affaffff           call 0x45b690
// 0045bbe1  8bce                 mov ecx, esi
// 0045bbe3  c7465802000000       mov dword ptr [esi + 0x58], 2
// 0045bbea  e891cfffff           call 0x458b80
// 0045bbef  8bce                 mov ecx, esi
// 0045bbf1  5e                   pop esi
// 0045bbf2  e9554d1d00           jmp 0x63094c

struct Item {
    void construct();
    void setValue(int);
    void update();
};

struct RenderStatsItem : Item {
    void construct();
    void setValue(int);
    void update();
    void init();
};

void RenderStatsItem::init()
{
    construct();
    setValue(0);
    *(int*)((char*)this + 0x58) = 2;
    update();
    Item::update();
}
