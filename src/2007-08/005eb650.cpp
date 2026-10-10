// from server: 86% by colin
struct BodyMover {
    void construct();
};

extern "C" void __stdcall sub_5402B0();

void BodyMover::construct() {
    *(int*)((char*)this + 0x00) = 0x7be684;
    *(int*)((char*)this + 0x04) = 0x7be678;
    *(int*)((char*)this + 0x10) = 0x7be670;
    *(int*)((char*)this + 0x14) = 0x7be660;
    *(int*)((char*)this + 0x2c) = 0x7be650;
    *(int*)((char*)this + 0x44) = 0x7be640;
    *(int*)((char*)this + 0x5c) = 0x7be630;
    *(int*)((char*)this + 0x74) = 0x7be620;
    *(int*)((char*)this + 0x8c) = 0x7be610;
    *(int*)((char*)this + 0xe8) = 0x7be5f8;
    *(int*)((char*)this + 0xf0) = 0x7be5ec;
    *(int*)((char*)this + 0xf0) = 0x7b525c;
    *(int*)((char*)this + 0xe8) = 0x7b5238;
    sub_5402B0();
}
