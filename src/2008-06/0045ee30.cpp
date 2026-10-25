// from server: 100% by king_originala
// roc 2008-06 0045ee30  unit: G3D::VStopwatch::?$TypedStatsItem  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ee30
//
// 0045ee30  83ec58               sub esp, 0x58
// 0045ee33  56                   push esi
// 0045ee34  8bf1                 mov esi, ecx
// 0045ee36  8d442404             lea eax, [esp + 4]
// 0045ee3a  50                   push eax
// 0045ee3b  8d8e58010000         lea ecx, [esi + 0x158]
// 0045ee41  e86affffff           call 0x45edb0
// 0045ee46  50                   push eax
// 0045ee47  8bce                 mov ecx, esi
// 0045ee49  e852a11600           call 0x5c8fa0
// 0045ee4e  5e                   pop esi
// 0045ee4f  83c458               add esp, 0x58
// 0045ee52  c3                   ret 

struct Value
{
    char data[0x58];
};

struct Item
{
    Value getValue();
};

struct S
{
    char padding[0x158];
    Item item;

    void setValue(const Value &value);
    void update();
};

void S::update()
{
    setValue(item.getValue());
}
