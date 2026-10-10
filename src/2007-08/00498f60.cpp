// from server: 67% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long ref1;
    volatile long ref2;
    void Release();
};

void RefCounted::Release()
{
    if (_InterlockedExchangeAdd(&ref1, -1) == 1) {
        (*(void (__thiscall**)(RefCounted*))((char*)vptr + 4))(this);
    }
    if (_InterlockedExchangeAdd(&ref2, -1) == 1) {
        (*(void (__thiscall**)(RefCounted*))((char*)vptr + 8))(this);
    }
}

struct Guard {
    void* field0;
    char field4;
    Guard();
    ~Guard();
};

extern Guard g_guard;
extern volatile long g_flag;
extern void* g_ptr;

void __stdcall sub_498ED0(void** out);
void* __stdcall sub_54A950(void* p);
void __stdcall sub_541630(void* a, void* b);

void __stdcall sub_498F60()
{
    Guard local;
    void* tmp = 0;
    void* obj = 0;

    if (g_flag == 0) {
        sub_498ED0(&tmp);
        void* v = sub_54A950(&obj);
        sub_541630(*(void**)v, tmp);
        if (obj) {
            RefCounted* r = (RefCounted*)obj;
            r->Release();
        }
        if (tmp) {
            RefCounted* r = (RefCounted*)tmp;
            r->Release();
        }
    }
    g_ptr = (void*)g_flag;
}
