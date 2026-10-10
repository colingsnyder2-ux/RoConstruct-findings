// from server: 46% by colin
struct BoundPropGetSet {
    void construct();
};

extern "C" void __stdcall sub_005d3fb0();
extern "C" int __stdcall sub_0052cb30();
extern "C" void __stdcall sub_0077e6a4();

void BoundPropGetSet::construct()
{
    sub_005d3fb0();
    *(int*)((char*)this + 0) = 0x7bb4bc;
    *(int*)((char*)this + 4) = 0x7bb4b4;
    *(int*)((char*)this + 0x10) = 0x7bb4ac;
    *(int*)((char*)this + 0x14) = 0x7bb49c;
    *(int*)((char*)this + 0x2c) = 0x7bb48c;
    *(int*)((char*)this + 0x44) = 0x7bb47c;
    *(int*)((char*)this + 0x5c) = 0x7bb46c;
    *(int*)((char*)this + 0x74) = 0x7bb45c;
    *(int*)((char*)this + 0x8c) = 0x7bb44c;
    *(int*)((char*)this + 0xe8) = 0;
    *(int*)((char*)this + 0xec) = 0;
    *(short*)((char*)this + 0xf0) = 0;
    *(short*)((char*)this + 0xf2) = 0;
    *(short*)((char*)this + 0xf4) = 0;
    *(short*)((char*)this + 0xf6) = 0;
    sub_0077e6a4();
    *(int*)((char*)this + 0x114) = sub_0052cb30();
    *(int*)((char*)this + 0x118) = 0;
}
