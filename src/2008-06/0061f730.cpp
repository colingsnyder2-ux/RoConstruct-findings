// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct type_info {
    virtual bool operator==(const type_info&) const;
};

struct bad_cast {
    bad_cast(const char*);
};

struct sp_counted_base {
    long refcount;
};

struct shared_ptr_holder {
    void* px;
    sp_counted_base* pn;
};

void __stdcall sub_40a3f0(void*);

struct Vconnection_impl {
    void* vfptr;
    void* ptr;
    void __cdecl assign(shared_ptr_holder* out);
};

void Vconnection_impl::assign(shared_ptr_holder* out) {
    void* p = this->ptr;
    if (p != 0) {
        void* obj = *(void**)p;
        if (obj != 0) {
            void** vt = *(void***)obj;
            typedef void* (__stdcall *Fn)(void*);
            Fn fn = (Fn)vt[1];
            obj = fn(obj);
        } else {
            obj = (void*)0x929614;
        }
        type_info* ti = (type_info*)0x935980;
        bool ok = ((type_info*)obj)->operator==(*ti);
        if (ok) {
            char* base = (char*)*(void**)p;
            base += 4;
            if (base != 0) {
                goto do_assign;
            }
        }
    }
    {
        bad_cast bc("bad cast");
        sub_40a3f0(&bc);
    }
do_assign:
    {
        char* src = (char*)*(void**)p;
        void* a = *(void**)src;
        void* b = *(void**)(src + 4);
        out->px = a;
        out->pn = (sp_counted_base*)b;
        if (b != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
        }
    }
}
