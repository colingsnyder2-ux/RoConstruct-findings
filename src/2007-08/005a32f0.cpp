// from server: 70% by colin
struct RBXInstance {
    char pad[0xbc];
    RBXInstance* next;
};

struct Vec {
    char pad[4];
    RBXInstance** begin;
    RBXInstance** end;
};

struct Holder {
    char pad[0xc0];
    Vec* vec;
};

extern "C" int __cdecl sub_630d36(RBXInstance*, int, const char*, const char*, int);
extern "C" void* __fastcall sub_40e590(void*);

extern "C" int __cdecl sub_48dfb0(RBXInstance* p)
{
    while (p) {
        int r = sub_630d36(p, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (r)
            return (int)sub_40e590((void*)r);
        p = p->next;
    }
    return 0;
}

struct VTeams {
    bool check();
};

bool VTeams::check()
{
    Holder* h = (Holder*)this;
    unsigned int n = (unsigned int)sub_48dfb0((RBXInstance*)h);
    unsigned int i = 0;
    if (n > 0) {
        void (__stdcall *fn)() = *(void (__stdcall**)())0x77e6d8;
        do {
            Vec* v = h->vec;
            RBXInstance** b = v->begin;
            if (b == 0 || i >= (unsigned int)((v->end - b) >> 3))
                fn();
            RBXInstance* e = v->begin[i];
            int r = sub_630d36(e, 0, (const char*)0x88e1c8, (const char*)0x881f4c, 0);
            if (r != 0 && *(char*)(r + 0x124) == 0)
                return true;
            i++;
            n = (unsigned int)sub_48dfb0((RBXInstance*)h);
        } while (i < n);
    }
    return false;
}
