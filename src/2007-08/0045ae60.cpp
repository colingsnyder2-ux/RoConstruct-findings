// from server: 77% by colin
// roc 2007-08 0045ae60  unit: RBX::Stats::H::?$TypedStatsItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ae60
//
// 0045ae60  51                   push ecx
// 0045ae61  56                   push esi
// 0045ae62  8bf1                 mov esi, ecx
// 0045ae64  8d8e10010000         lea ecx, [esi + 0x110]
// 0045ae6a  e88102fdff           call 0x42b0f0
// 0045ae6f  89442404             mov dword ptr [esp + 4], eax
// 0045ae73  8d442404             lea eax, [esp + 4]
// 0045ae77  50                   push eax
// 0045ae78  8bce                 mov ecx, esi
// 0045ae7a  e821be1300           call 0x596ca0
// 0045ae7f  5e                   pop esi
// 0045ae80  59                   pop ecx
// 0045ae81  c3                   ret 

struct TypedStatsItem {
    void update();
};

struct Item {
    void formatValue(int);
};

extern "C" int __fastcall sub_42B0F0(int);
extern "C" void __fastcall sub_596CA0(int, int);

void TypedStatsItem::update() {
    int v = sub_42B0F0((int)this + 0x110);
    sub_596CA0((int)this, (int)&v);
}
