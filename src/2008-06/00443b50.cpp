// from server: 80% by colin
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instance_type;
extern char properties_type;

struct Entry {
    void* object;
    void* other;
};

struct S {
    char pad[0x130];
    void* field130;
    void* f(void* arg);
};

struct T {
    void* sub_557950(void* a);
    void* sub_4438c0();
};

void* S::f(void* arg) {
    void* ecx = this->field130;
    void* eax;
    if (ecx != 0) {
        Entry* e = *(Entry**)((char*)arg + 0xc);
        void* p = (void*)((char*)e->other + 4);
        eax = ((T*)ecx)->sub_557950(p);
    } else {
        eax = 0;
    }
    if (eax != 0) {
        void* r = ((T*)eax)->sub_4438c0();
        if (r != 0) {
            void* d = (void*)((char*)(*(void**)((char*)arg + 4)) + 4);
            return ((T*)r)->sub_557950(d);
        }
    }
    return 0;
}
