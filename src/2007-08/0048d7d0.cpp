// from server: 46% by colin
struct VPlayerSignalDesc {
    void construct();
};

extern "C" void __cdecl sub_486A10();
extern "C" int __cdecl sub_48D750();

void VPlayerSignalDesc::construct()
{
    sub_486A10();
    *(int*)((char*)this + 0x00) = 0x79b154;
    *(int*)((char*)this + 0x04) = 0x79b148;
    *(int*)((char*)this + 0x10) = 0x79b140;
    *(int*)((char*)this + 0x14) = 0x79b130;
    *(int*)((char*)this + 0x2c) = 0x79b120;
    *(int*)((char*)this + 0x44) = 0x79b110;
    *(int*)((char*)this + 0x5c) = 0x79b100;
    *(int*)((char*)this + 0x74) = 0x79b0f0;
    *(int*)((char*)this + 0x8c) = 0x79b0e0;
    *(int*)((char*)this + 0x0c) = sub_48D750();
}
