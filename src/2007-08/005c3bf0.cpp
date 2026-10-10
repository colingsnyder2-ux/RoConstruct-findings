// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall sub_77E708(void*, void*);
extern "C" void* __stdcall sub_77E710(void*, void*);
extern "C" void __cdecl sub_411850(void*);

struct type_info;

struct bad_cast {
    bad_cast(const char*);
};

struct Vconnection {
    void* vfptr;
    void* ptr;
};

struct sp_counted_impl_p {
    void* vfptr;
    void* px;
    long refcount;
};

struct shared_ptr_Instance {
    void* px;
    void* pn;
};

struct type_info_holder {
    void* vfptr;
};

extern type_info_holder type_info_std_basic_string;
extern type_info_holder type_info_boost_shared_ptr_Instance;

void __stdcall func(Vconnection* conn, shared_ptr_Instance* out);

void __stdcall func(Vconnection* conn, shared_ptr_Instance* out)
{
    if (conn != 0) {
        void* p = conn->vfptr;
        if (p != 0) {
            void** vtbl = *(void***)p;
            void* (*fn)(void*) = (void* (*)(void*))vtbl[1];
            p = fn(p);
        } else {
            p = &type_info_std_basic_string;
        }
        if (sub_77E708(p, &type_info_boost_shared_ptr_Instance)) {
            void* q = conn->vfptr;
            q = (char*)q + 4;
            if (q != 0) {
                goto found;
            }
        }
    }
    {
        bad_cast bc("bad cast");
        sub_411850(&bc);
    }
found:
    {
        void* q = conn->vfptr;
        q = (char*)q + 4;
        void* px = *(void**)q;
        out->px = px;
        void* pn = *(void**)((char*)q + 4);
        out->pn = pn;
        if (pn != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)pn + 4), 1);
        }
    }
}
