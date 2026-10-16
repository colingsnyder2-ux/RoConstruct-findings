// from server: 56% by colin
struct Entry {
    void* object;
    void* other;
};

struct Storage;

struct Owner {
    Storage* storage;
};

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern "C" void* __cdecl sub_557950(void*);

struct S {
    unsigned char padding[0x130];
    void* field130;
    void* f(void* arg);
};

void* S::f(void* arg)
{
    void* p = field130;
    void* result;
    if (p != 0) {
        Entry* e = (Entry*)((char*)arg + 0xc);
        void* v = e->other;
        result = sub_557950((char*)v + 4);
    } else {
        result = 0;
    }
    if (result != 0) {
        void* r = ((void* (__thiscall*)(void*))0x4438c0)(result);
        if (r != 0) {
            void* v2 = (char*)arg + 4;
            return sub_557950((char*)v2 + 4);
        }
    }
    return 0;
}
