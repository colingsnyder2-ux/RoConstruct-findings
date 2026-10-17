// from server: 54% by colin
struct Mutex {
    void lock();
    void unlock();
};

struct Key {
    unsigned int first;
    unsigned int second;
};

struct Registry {
    unsigned char padding[32];
    Mutex mutex;
};

struct Name {
    static const Name& declare(const char* s);
};

struct Creator {
    void* vtable;
    int field_4;
    int field_8;
    int field_c;
};

struct CreatorsMap {
    void insert(const Name* name, Creator* creator);
};

struct FactoryProduct {
    unsigned char padding[0x130];
    CreatorsMap creators;
};

struct S_func_004a8ae0 {
    unsigned char padding[0x130];
    CreatorsMap creators;
    void f(void* a1, void* a2);
};

extern "C" void __stdcall func_49bba0(void* p);
extern "C" void __stdcall func_4a7e20(void* p1, void* p2);
extern "C" void __stdcall func_4a5600(void* p1, void* p2, void* p3);
extern "C" void* __stdcall func_554270();

void S_func_004a8ae0::f(void* a1, void* a2)
{
    if (a1 != 0) {
        func_49bba0(a1);
        int v8 = *(int*)((char*)a1 + 8);
        int vc = *(int*)((char*)a1 + 0xc);
        func_4a7e20((char*)this + 0x130, (void*)(v8 + 4));
        func_4a5600(a2, (void*)0x18, &v8);
    } else {
        void* p = func_554270();
        func_4a7e20((char*)this + 0x130, (char*)p + 4);
    }
}
