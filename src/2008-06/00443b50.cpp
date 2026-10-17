// from server: 63% by colin
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instance_type;
extern char properties_type;

struct Entry {
    void* object;
    void* other;
};

struct Storage;

struct Owner {
    Storage* storage;
};

struct Storage {
    Owner* owner;
    unsigned char padding[8];
    Entry* begin;
    Entry* end;
};

extern "C" void* __cdecl sub_557950(void*);

struct S {
    unsigned char padding[0x130];
    Storage* storage;
    void* f(void* arg);
};

void* S::f(void* arg)
{
    Storage* s = storage;
    void* result;
    if (s) {
        Entry* e = *(Entry**)((char*)arg + 0xc);
        void* p = *(void**)((char*)e + 4);
        result = sub_557950((char*)p + 4);
    } else {
        result = 0;
    }
    if (result) {
        void* r = ((void* (__thiscall*)(void*))0x4438c0)(result);
        if (r) {
            void* q = (char*)*(void**)((char*)arg + 4) + 4;
            return sub_557950(q);
        }
    }
    return 0;
}
