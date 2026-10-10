// from server: 55% by colin
struct RBX_DescribedBase {
    void* construct(const char* const& name);
};

struct RBX_VRocket_FactoryProduct : RBX_DescribedBase {
    char pad[0x110 - sizeof(RBX_DescribedBase)];
    void* field_110;
    void* construct();
};

void* RBX_VRocket_FactoryProduct::construct()
{
    RBX_DescribedBase::construct(*(const char* const*)0x8af3e8);
    *(float*)((char*)this + 0xfc) = *(float*)0x7bf7b4;
    *(void**)this = (void*)0x7bf76c;
    *(float*)((char*)this + 0x100) = *(float*)0x7bf764;
    *(void**)((char*)this + 4) = (void*)0x7bf760;
    *(void**)((char*)this + 0x10) = (void*)0x7bf758;
    *(void**)((char*)this + 0x14) = (void*)0x7bf744;
    *(void**)((char*)this + 0x2c) = (void*)0x7bf734;
    *(void**)((char*)this + 0x44) = (void*)0x7bf724;
    *(void**)((char*)this + 0x5c) = (void*)0x7bf714;
    *(void**)((char*)this + 0x74) = (void*)0x7bf704;
    *(void**)((char*)this + 0x8c) = (void*)0x7bf6f4;
    *(void**)((char*)this + 0xe8) = (void*)0x7bf6dc;
    *(void**)((char*)this + 0xf0) = (void*)0x7bf6d0;
    *(float*)((char*)this + 0x104) = *(float*)0x7bf750;
    *(float*)((char*)this + 0x108) = 0.0f;
    *(float*)((char*)this + 0x10c) = 0.0f;
    void* p = (void*)((char*)this + 0x110);
    ((void (__thiscall*)(void*))0x475050)(p);

    return this;
}
