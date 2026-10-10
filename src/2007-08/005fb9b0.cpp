// from server: 43% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct RefCounted {
    void* vfptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Container {
    void* begin;
    void* end;
    void* cap;
};

struct LockTool {
    char pad[0xc0];
    Container items;
    void process(int arg);
};

extern "C" void __cdecl sub_4178F0(void* out);
extern "C" void* __cdecl sub_630D36(void* a, void* b, void* c, void* d, void* e);
extern "C" void __cdecl sub_5782C0(void* self, int arg);

void LockTool::process(int arg) {
    Container* c = &this->items;
    if (c->begin == 0)
        return;

    Container local;
    sub_4178F0(&local);

    void* first = local.begin;
    void* last = local.end;
    void* cap = local.cap;

    if (first > last)
        _invalid_parameter_noinfo();

    void* it = first;
    if (it > cap)
        _invalid_parameter_noinfo();

    while (it != last) {
        if (it >= cap)
            _invalid_parameter_noinfo();

        void* inst = *(void**)it;

        void* result = sub_630D36(inst, (void*)0, (void*)0x881f4c, (void*)0x884a28, (void*)0);
        if (result != 0) {
            sub_5782C0(result, arg);
        } else {
            ((LockTool*)inst)->process(arg);
        }

        if (it >= cap)
            _invalid_parameter_noinfo();

        it = (char*)it + 8;
    }

    RefCounted* rc = (RefCounted*)local.begin;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void (__thiscall *dtor)(RefCounted*) = *(void (__thiscall **)(RefCounted*))((char*)rc->vfptr + 4);
            dtor(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                void (__thiscall *wdtor)(RefCounted*) = *(void (__thiscall **)(RefCounted*))((char*)rc->vfptr + 8);
                wdtor(rc);
            }
        }
    }
}
