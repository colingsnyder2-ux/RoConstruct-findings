// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Instance {
    void* vptr;
    char pad[0xbc];
    void* field_c0;
};

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct Container {
    char pad0[4];
    void* begin;
    void* end;
};

extern "C" void* __cdecl sub_630d36(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_4178f0(void*, void*);
extern "C" char __cdecl sub_574080(void*);

Instance* __cdecl sub_5fbac0(Instance* self);

Instance* __cdecl sub_5fbac0(Instance* self) {
    void* p = sub_630d36(self, 0, (void*)0x881f4c, (void*)0x884a28, 0);
    if (p == 0) {
        if (sub_574080(p)) {
            goto fallthrough;
        }
        return (Instance*)p;
    }
fallthrough:
    {
        Container c;
        sub_4178f0((char*)self + 0xc0, &c);
        Instance* result = 0;
        if (c.begin != 0) {
            void* it = c.begin;
            void* end = c.end;
            while (it != end) {
                Instance* child = *(Instance**)it;
                Instance* r = sub_5fbac0(child);
                if (r != 0) {
                    result = r;
                    break;
                }
                it = (char*)it + 8;
            }
        }
        return result;
    }
}
