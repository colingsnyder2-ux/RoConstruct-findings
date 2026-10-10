// from server: 60% by colin
struct LocalBackpackItem {
    char pad[0x138];
    int field138;
    int field13c;
    int field140;
    int field144;
    int field148;
    int field14c;
    int field150;
    int field154;
    int field158;
    int field15c;
    int field160;
    int field118;
    void construct();
};

extern void func_005d1250();

void LocalBackpackItem::construct()
{
    func_005d1250();
    *(int*)((char*)this + 0x120) = 0x788350;
    *(int*)((char*)this + 0x124) = 0x78835c;
    *(int*)((char*)this + 0x128) = 0x787e9c;
    *(int*)((char*)this + 0x12c) = 0x787ea8;
    *(int*)((char*)this + 0x130) = 0x79b72c;
    *(int*)((char*)this + 0x134) = 0x7ba668;
    *(int*)((char*)this + 0x00) = 0x7ba91c;
    *(int*)((char*)this + 0x04) = 0x7ba910;
    *(int*)((char*)this + 0x10) = 0x7ba908;
    *(int*)((char*)this + 0x14) = 0x7ba8f8;
    *(int*)((char*)this + 0x2c) = 0x7ba8e8;
    *(int*)((char*)this + 0x44) = 0x7ba8d8;
    *(int*)((char*)this + 0x5c) = 0x7ba8c8;
    *(int*)((char*)this + 0x74) = 0x7ba8b8;
    *(int*)((char*)this + 0x8c) = 0x7ba8a8;
    *(int*)((char*)this + 0xe8) = 0x7ba8a0;
    *(int*)((char*)this + 0x120) = 0x7ba894;
    *(int*)((char*)this + 0x124) = 0x7ba888;
    *(int*)((char*)this + 0x128) = 0x7ba87c;
    *(int*)((char*)this + 0x12c) = 0x7ba870;
    *(int*)((char*)this + 0x130) = 0x7ba864;
    *(int*)((char*)this + 0x134) = 0x7ba858;
    field138 = 0;
    field13c = 0;
    field140 = 0;
    field144 = 0;
    field148 = 0;
    field14c = 0;
    field150 = 0;
    field154 = 0;
    field158 = 0;
    field15c = 0;
    field160 = -1;
    field118 = 1;
}
