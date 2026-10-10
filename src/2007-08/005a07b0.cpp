// from server: 38% by colin
struct SpawnerService {
    char pad0[0xc];
    void* field_c;
    char pad10[0x10];
    char pad20[0x24];
    char pad44[0x18];
    char pad5c[0x18];
    char pad74[0x18];
    char pad8c[0x4];
    SpawnerService();
};

extern "C" void __stdcall sub_59fde0();
extern "C" void* __stdcall sub_58e550();

SpawnerService::SpawnerService()
{
    sub_59fde0();
    *(void**)((char*)this + 0x00) = (void*)0x7b3874;
    *(void**)((char*)this + 0x04) = (void*)0x7b386c;
    *(void**)((char*)this + 0x10) = (void*)0x7b3864;
    *(void**)((char*)this + 0x14) = (void*)0x7b3854;
    *(void**)((char*)this + 0x2c) = (void*)0x7b3844;
    *(void**)((char*)this + 0x44) = (void*)0x7b3834;
    *(void**)((char*)this + 0x5c) = (void*)0x7b3824;
    *(void**)((char*)this + 0x74) = (void*)0x7b3814;
    *(void**)((char*)this + 0x8c) = (void*)0x7b3804;
    field_c = sub_58e550();
}
