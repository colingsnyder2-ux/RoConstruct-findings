// from server: 42% by atomic.potato
struct bad_cast_copy {
    void* vftable;
    char pad[8];
};

extern "C" void* __stdcall sub_80285c();
extern "C" void __cdecl sub_6a158c(void*, const char*);

struct bad_lexical_cast {
    char pad0[0xc];
    int field_c;
    int field_10;
    void bad_lexical_cast_ctor(const bad_cast_copy*);
};

void bad_lexical_cast::bad_lexical_cast_ctor(const bad_cast_copy* other)
{
    bad_cast_copy local;
    sub_80285c();
    local.vftable = (void*)0x827224;
    local.pad[0] = 0;
    local.pad[1] = 0;
    local.pad[2] = 0;
    local.pad[3] = 0;
    local.pad[4] = 0;
    local.pad[5] = 0;
    local.pad[6] = 0;
    local.pad[7] = 0;
    *(int*)((char*)&local + 0x10) = field_c;
    *(int*)((char*)&local + 0x14) = field_10;
    sub_6a158c(&local, (const char*)0x8e5c90);
}
