// from server: 46% by colin
struct BackpackItem {
    void construct();
    char pad0[0x0c - 4];
    int field0c;
    char pad1[0xe8 - 0x10];
    int fielde8;
};

extern "C" void __stdcall sub_59efe0();
extern "C" int __stdcall sub_59dc70();

void BackpackItem::construct()
{
    sub_59efe0();
    *(int*)((char*)this + 0x0c) = 0;
    *(int*)((char*)this + 0x00) = 0x7b2a1c;
    *(int*)((char*)this + 0x04) = 0x7b2a10;
    *(int*)((char*)this + 0x10) = 0x7b2a08;
    *(int*)((char*)this + 0x14) = 0x7b29f8;
    *(int*)((char*)this + 0x2c) = 0x7b29e8;
    *(int*)((char*)this + 0x44) = 0x7b29d8;
    *(int*)((char*)this + 0x5c) = 0x7b29c8;
    *(int*)((char*)this + 0x74) = 0x7b29b8;
    *(int*)((char*)this + 0x8c) = 0x7b29a8;
    *(int*)((char*)this + 0xe8) = 0x7b29a0;
    field0c = sub_59dc70();
}
