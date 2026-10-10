// from server: 41% by colin
struct Cofm {
    void* field0;
    void load(const char* name);
};

extern "C" void __stdcall sub_624140(void*);
extern "C" void __stdcall sub_566c00(void*);
extern "C" void __stdcall sub_567100(void*);
extern "C" void __stdcall sub_40f800(void*);
extern "C" void __stdcall sub_62fc62(void*);
extern "C" void* __stdcall sub_62fef6(unsigned int);
extern "C" void __stdcall sub_624660(void*);
extern "C" void __stdcall sub_624730(void*);
extern "C" void __stdcall sub_624880(void*, void*, void*);
extern "C" void __stdcall sub_40fb40(void*);

extern "C" void* __stdcall MSVCP80_ctor_ifstream(void*, const char*, int, int);
extern "C" void __stdcall MSVCP80_dtor_ifstream(void*);

void Cofm::load(const char* name) {
    char buf[0x100];
    char stream[0x40];
    char str[0x20];
    void* obj;
    void* old;
    void* tmp;

    sub_624140(buf);
    if (*(int*)(buf + 0x14) >= 0x10) {
        name = *(const char**)buf;
    } else {
        name = buf;
    }
    MSVCP80_ctor_ifstream(stream, name, 0x40, 0x21);
    sub_566c00(str);
    *(void**)(str + 0x1c) = (void*)0x786dcc;
    sub_567100(str);
    obj = *(void**)str;
    *(void**)str = 0;
    tmp = obj;
    if (str) {
        sub_40f800(str);
        sub_62fc62(str);
    }
    void* p = sub_62fef6(0x2c);
    if (p) {
        sub_624660(p);
    } else {
        p = 0;
    }
    old = *(void**)this;
    *(void**)this = p;
    if (old) {
        sub_624730(old);
        sub_62fc62(old);
    }
    sub_624880(this, *(void**)this, tmp);
    if (tmp) {
        sub_40f800(tmp);
        sub_62fc62(tmp);
    }
    sub_40fb40(str);
    MSVCP80_dtor_ifstream(stream);
    sub_40fb40(buf);
}
