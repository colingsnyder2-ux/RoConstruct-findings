// from server: 54% by colin
struct CRbxDocTemplate {
    void sub_448b50(int);
};

struct RefCounted {
    virtual void sub_0();
    virtual void sub_4();
    virtual void sub_8();
};

extern RefCounted* g_8bbe94;

struct String {
    char data[0x1c];
    String(const char*);
    ~String();
};

extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void __cdecl sub_412dc0(void*, String*);
extern "C" void __cdecl sub_77e698(String*, const char*);
extern "C" void __cdecl sub_77e6ac(String*);

void CRbxDocTemplate::sub_448b50(int arg) {
    RefCounted* old;
    RefCounted* obj;
    void* mem;

    mem = sub_62fef6(0x28);
    obj = 0;
    if (mem != 0) {
        int* vtbl = *(int**)arg;
        const char* name = ((const char* (__thiscall*)(int*))vtbl[1])((int*)arg);
        String temp(name);
        sub_412dc0(mem, &temp);
        obj = (RefCounted*)mem;
        temp.~String();
    }

    old = g_8bbe94;
    g_8bbe94 = obj;
    if (old != 0) {
        old->sub_0();
    }
}
