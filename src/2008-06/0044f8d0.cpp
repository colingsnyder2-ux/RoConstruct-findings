// from server: 54% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct sp_counted_base {
    virtual ~sp_counted_base();
    virtual void dispose();
    virtual void destroy();
    long use_count_;
    long weak_count_;
};

struct SharedCount {
    sp_counted_base* pi_;
    SharedCount();
    SharedCount(const SharedCount&);
    ~SharedCount();
};

struct SharedPtr {
    void* px;
    SharedCount pn;
    SharedPtr();
};

extern "C" unsigned char __cdecl func_00495e60(int, int);
extern "C" unsigned char __cdecl func_00495e70(int, int);
extern "C" void __cdecl func_0046a940();
extern "C" void __cdecl func_006a09f8();

struct CRobloxDoc {
    char pad[0x94];
    void* field_94;
    int method(int, int);
};

int CRobloxDoc::method(int a, int b)
{
    SharedPtr sp;
    func_0046a940();
    int v = *(int*)&sp.pn.pi_;
    unsigned char r1 = func_00495e60(v, 1);
    unsigned char r2;
    if (r1) {
        r2 = func_00495e70(v, 1);
        if (!r2)
            r2 = 0;
        else
            r2 = 1;
    } else {
        r2 = 1;
    }
    unsigned char bl = (r2 == 0) ? 1 : 0;
    sp_counted_base* pi = sp.pn.pi_;
    if (pi) {
        if (_InterlockedExchangeAdd(&pi->use_count_, -1) == 1) {
            pi->dispose();
            if (_InterlockedExchangeAdd(&pi->weak_count_, -1) == 1)
                pi->destroy();
        }
    }
    if (bl)
        return 0;
    func_006a09f8();
    return 0;
}
