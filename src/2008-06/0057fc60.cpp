// from server: 64% by colin
struct Instance {
    void* vtable;
    int refs;
};

struct ModelInstance : Instance {
    int pad;
};

extern "C" void* __cdecl sub_6A17C6(void*, void*, void*, void*, int);
extern "C" void __cdecl sub_802890();
extern "C" void __cdecl sub_4213A0(void*, void*);
extern "C" void __cdecl sub_459830(void*, void*, void*, void*);

struct FilteredSelection {
    char pad0[0xc];
    void* begin;
    void* end;
    void* cap;

    void Add(Instance* inst);
};

void FilteredSelection::Add(Instance* inst)
{
    void* p = sub_6A17C6(inst->vtable, 0, (void*)0x92907c, (void*)0x932a40, 0);
    if (p) {
        sub_4213A0(&begin, &p);
    }
    Instance* other = *(Instance**)((char*)inst + 8);
    if (other) {
        void* e = end;
        if (begin > e) {
            sub_802890();
        }
        void* b = begin;
        if (b > cap) {
            sub_802890();
        }
        void* first = begin;
        void* it = b;
        while (it != e) {
            if (*(Instance**)it == other) break;
            it = (char*)it + 4;
        }
        void* c = cap;
        if (begin > c) {
            sub_802890();
        }
        void* bb = begin;
        if (first && first != bb) {
            sub_802890();
        }
        if (it != c) {
            sub_459830(this, &it, first, it);
        }
    }
}
