// from server: 77% by colin
// roc 2007-08 004b1ea0  unit: RBX::Stats::_N::?$TypedStatsItem  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b1ea0
//
// 004b1ea0  51                   push ecx
// 004b1ea1  56                   push esi
// 004b1ea2  8bf1                 mov esi, ecx
// 004b1ea4  8d8e10010000         lea ecx, [esi + 0x110]
// 004b1eaa  e84192f7ff           call 0x42b0f0
// 004b1eaf  88442407             mov byte ptr [esp + 7], al
// 004b1eb3  8d442407             lea eax, [esp + 7]
// 004b1eb7  50                   push eax
// 004b1eb8  8bce                 mov ecx, esi
// 004b1eba  e8414e0e00           call 0x596d00
// 004b1ebf  5e                   pop esi
// 004b1ec0  59                   pop ecx
// 004b1ec1  c3                   ret 

struct TypedStatsItem {
    char pad[0x110];
    void update();
};

extern "C" bool __fastcall sub_42b0f0(void*);
extern "C" void __fastcall sub_596d00(void*, bool*);

void TypedStatsItem::update()
{
    bool result = sub_42b0f0((char*)this + 0x110);
    sub_596d00(this, &result);
}
