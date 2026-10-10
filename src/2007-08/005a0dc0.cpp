// from server: 47% by tester
struct VSpawnLocation {
    void construct();
    void setString(const char*);
};

struct SpawnerService {
    void setString(const char*);
};

extern "C" {
    void* __cdecl operator_new(unsigned int);
    void __cdecl basic_string_ctor(void*, const char*);
    void __cdecl basic_string_dtor(void*);
}

void* __cdecl sub_5A0100();
void __cdecl sub_5A0AF0(VSpawnLocation*);
void __cdecl sub_541BF0(VSpawnLocation*, void*);

extern SpawnerService* g_spawnerService;

void VSpawnLocation::construct() {
    sub_5A0AF0(this);
    *(int*)((char*)this + 0) = 0x7b37bc;
    *(int*)((char*)this + 4) = 0x7b37b4;
    *(int*)((char*)this + 0x10) = 0x7b37ac;
    *(int*)((char*)this + 0x14) = 0x7b379c;
    *(int*)((char*)this + 0x2c) = 0x7b378c;
    *(int*)((char*)this + 0x44) = 0x7b377c;
    *(int*)((char*)this + 0x5c) = 0x7b376c;
    *(int*)((char*)this + 0x74) = 0x7b375c;
    *(int*)((char*)this + 0x8c) = 0x7b374c;
    *(int*)((char*)this + 0xec) = (int)sub_5A0100();
    *(int*)((char*)this + 0xf0) = 0;
    char buf[16];
    basic_string_ctor(buf, (const char*)0x7b3510);
    sub_541BF0(this, buf);
    basic_string_dtor(buf);
    char flag = 0;
    g_spawnerService->setString(&flag);
}
