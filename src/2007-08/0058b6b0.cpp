// from server: 45% by colin
struct SoundService {
    char pad[0x118];
    float volume;
    char pad2[0x11d - 0x11c];
    unsigned char flags;
    char pad3[0x120 - 0x11e];
    int something;
    int something2;
    char pad5[0x1c];
    void* stringObj;
    SoundService();
};

extern "C" {
    void __stdcall sub_58af60();
    void* __stdcall sub_52cb30();
    void __stdcall sub_541bf0(void*);
    void __stdcall string_ctor_pbd(void*, const char*);
    void __stdcall string_ctor(void*);
    void __stdcall string_dtor(void*);
}

SoundService::SoundService() {
    sub_58af60();
    *(void**)((char*)this + 0xe8) = (void*)0x795b60;
    *(void**)this = (void*)0x7aeb04;
    *(void**)((char*)this + 4) = (void*)0x7aeafc;
    *(void**)((char*)this + 0x10) = (void*)0x7aeaf4;
    *(void**)((char*)this + 0x14) = (void*)0x7aeae4;
    *(void**)((char*)this + 0x2c) = (void*)0x7aead4;
    *(void**)((char*)this + 0x44) = (void*)0x7aeac4;
    *(void**)((char*)this + 0x5c) = (void*)0x7aeab4;
    *(void**)((char*)this + 0x74) = (void*)0x7aeaa4;
    *(void**)((char*)this + 0x8c) = (void*)0x7aea94;
    *(void**)((char*)this + 0xe8) = (void*)0x7aea88;
    *(int*)((char*)this + 0xec) = 0;
    *(int*)((char*)this + 0xf0) = 0;
    *(int*)((char*)this + 0xf4) = 0;
    string_ctor((char*)this + 0xf8);
    *(void**)((char*)this + 0x114) = sub_52cb30();
    *(float*)((char*)this + 0x118) = *(float*)0x797e9c;
    *(unsigned char*)((char*)this + 0x11d) &= 0xf8;
    *(unsigned char*)((char*)this + 0x11c) = 0;
    *(int*)((char*)this + 0x120) = -1;
    *(int*)((char*)this + 0x124) = 0;
    string_ctor_pbd((char*)this + 0x14, "?VAR Milestone");
    sub_541bf0((char*)this + 0x14);
    string_dtor((char*)this + 0x14);
}
