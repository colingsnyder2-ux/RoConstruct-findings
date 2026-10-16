// from server: 54% by colin





struct String {
    char storage[28];
};

extern "C" {
    void __stdcall string_ctor(String* self, const char* s);
    void __stdcall string_dtor(String* self);
}

struct Base {
    char pad[0x130];
};

struct S : Base {
    int f130;
    int f134;
    int f138;
    int f13c;
    int f140;
    int f144;
    int f148;
    void* ctor();
};

void* S::ctor() {
    char* p = (char*)this;
    *(int*)(p + 0x00) = 0x83cc1c;
    *(int*)(p + 0x10) = 0x83cc10;
    *(int*)(p + 0x14) = 0x83cc08;
    *(int*)(p + 0x20) = 0x83cc00;
    *(int*)(p + 0x24) = 0x83cbf0;
    *(int*)(p + 0x44) = 0x83cbe0;
    *(int*)(p + 0x64) = 0x83cbd0;
    *(int*)(p + 0x84) = 0x83cbc0;
    *(int*)(p + 0xa4) = 0x83cbb0;
    *(int*)(p + 0xc4) = 0x83cba0;
    *(int*)(p + 0x130) = 0x83cb98;
    f134 = 0xe2;
    f138 = 0xe2;
    f13c = 0xe2;
    f140 = 0x1c;
    f144 = 0x17;
    f148 = 0x17;
    String tmp;
    string_ctor(&tmp, (const char*)0x83cb88);
    void (__thiscall *setName)(S*, String*) = (void (__thiscall *)(S*, String*))0x55af90;
    setName(this, &tmp);
    string_dtor(&tmp);

    return this;
}
