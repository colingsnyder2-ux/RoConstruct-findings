// from server: 31% by tester
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    char pad[0xc];
    unsigned int count;
    unsigned int capacity;
    char pad2[0x144];
    void* data;
};

struct Verb {
    void* vtable;
    char pad[0x10];
    char field14[0x0c];
    void* field20;
    char field24[0x0c];

    void Run();
};

extern "C" void __stdcall sub_57D250();
extern "C" void* __stdcall sub_581CC0(void* self, int flag);
extern "C" void __stdcall sub_57FAB0(void* dst, void* a, unsigned int b, unsigned int c, unsigned int d, void* e, void* f);
extern "C" void __stdcall sub_58C5C0(void* a, void* b);

void Verb::Run()
{
    Inner* inner = *(Inner**)((char*)this + 0x20);
    sub_57D250();

    bool (__stdcall *fn)(void*) = *(bool (__stdcall **)(void*))((*(char**)this) + 0xc);
    bool result = fn(this);
    unsigned char flag = (result == 0) ? 1 : 0;

    void* p24 = *(void**)((char*)this + 0x24);
    char* base = (char*)this + 0x14;

    void* r1 = sub_581CC0(base, 1);
    Inner* i1 = *(Inner**)((char*)r1 + 0x154);
    unsigned int c1 = i1->count;
    unsigned int cap1 = i1->capacity;
    if (c1 > cap1) {
        _invalid_parameter_noinfo();
    }
    void* d1 = i1->data;

    void* r2 = sub_581CC0(base, 1);
    Inner* i2 = *(Inner**)((char*)r2 + 0x154);
    unsigned int c2 = i2->count;
    unsigned int cap2 = i2->capacity;
    if (c2 > cap2) {
        _invalid_parameter_noinfo();
    }
    void* d2 = i2->data;

    char buf[16];
    sub_57FAB0(buf, d2, c2, flag, cap1, p24, d1);

    char* p = (char*)this + 0x24;
    char* str;
    if (*(unsigned int*)(p + 0x1c) < 0x10) {
        str = p + 4;
    } else {
        str = *(char**)(p + 4);
    }

    void* p20 = *(void**)((char*)this + 0x20);
    sub_58C5C0(str, p20);

    void* obj = *(void**)buf;
    void** vt = *(void***)obj;
    void (*final)(void*) = (void (*)(void*))vt[0];
    final(obj);
}
