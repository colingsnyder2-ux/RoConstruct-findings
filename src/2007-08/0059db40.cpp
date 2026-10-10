// from server: 50% by colin
struct EnumDesc {
    void construct();
};

extern "C" void __stdcall sub_59ccb0();
extern "C" void* __stdcall sub_58e6a0();

void EnumDesc::construct()
{
    sub_59ccb0();
    *(void**)this = (void*)0x7b21c4;
    *(void**)((char*)this + 4) = (void*)0x7b21b8;
    *(void**)((char*)this + 0x10) = (void*)0x7b21b0;
    *(void**)((char*)this + 0x14) = (void*)0x7b21a0;
    *(void**)((char*)this + 0x2c) = (void*)0x7b2190;
    *(void**)((char*)this + 0x44) = (void*)0x7b2180;
    *(void**)((char*)this + 0x5c) = (void*)0x7b2170;
    *(void**)((char*)this + 0x74) = (void*)0x7b2160;
    *(void**)((char*)this + 0x8c) = (void*)0x7b2150;
    *(void**)((char*)this + 0xe8) = (void*)0x7b2148;
    *(void**)((char*)this + 0xc) = sub_58e6a0();
}
