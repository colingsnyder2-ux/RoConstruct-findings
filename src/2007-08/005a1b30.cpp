// from server: 45% by colin
struct BoundPropGetSet {
    void construct();
};

extern "C" void __stdcall sub_77E6AC();
extern "C" void __stdcall sub_5402B0();

void BoundPropGetSet::construct()
{
    char* self = (char*)this;
    sub_77E6AC();
    *(int*)(self + 0) = 0x7b3f2c;
    *(int*)(self + 4) = 0x7b3f20;
    *(int*)(self + 0x10) = 0x7b3f18;
    *(int*)(self + 0x14) = 0x7b3f08;
    *(int*)(self + 0x2c) = 0x7b3ef8;
    *(int*)(self + 0x44) = 0x7b3ee8;
    *(int*)(self + 0x5c) = 0x7b3ed8;
    *(int*)(self + 0x74) = 0x7b3ec8;
    *(int*)(self + 0x8c) = 0x7b3eb8;
    sub_5402B0();
}
