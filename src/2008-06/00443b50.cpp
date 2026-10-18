// from server: 65% by colin
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instance_type;
extern char properties_type;

struct Instance {
    char padding[0x110];
    void* name;
};

struct Ptr {
    Instance* px;
    void* pn;
};

struct Entry {
    void* object;
    void* other;
};

struct Storage;

struct Owner {
    Storage* storage;
};

struct S {
    char pad[0x130];
    void* field130;
    void* f(void* arg);
};

void* sub_557950(void* a, void* b);
void* sub_4438c0(void* a);

void* S::f(void* arg) {
    void* ecx = this->field130;
    void* eax;
    if (ecx != 0) {
        Entry* e = (Entry*)((Ptr*)arg)->px;
        void* p = (void*)((char*)e->other + 4);
        eax = sub_557950(ecx, p);
    } else {
        eax = 0;
    }
    if (eax != 0) {
        void* r = sub_4438c0(eax);
        if (r != 0) {
            void* d = (void*)((char*)((Ptr*)arg)->pn + 4);
            return sub_557950(r, d);
        }
    }
    return 0;
}
