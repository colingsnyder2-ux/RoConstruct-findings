// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct TimerService;

struct ServiceProvider {
    char pad[0x130];
    TimerService* timerService;
    char pad2[4];
};

struct TimerService {
    char pad[0x130];
    TimerService* next;
    char pad2[4];
};

struct RefCounted {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

extern "C" void __cdecl func_618a40(void*, void*);
extern "C" void __cdecl func_5e5a80(void*, void*);
extern "C" void __cdecl func_4218a0(void*, void*);
extern "C" void __cdecl func_4025b0(void*, void*);

void __stdcall TimerService_set(TimerService* self, void* arg1, void* arg2)
{
    ServiceProvider* sp = 0;
    if (self) {
        sp = (ServiceProvider*)((char*)self + 0x130);
    }
    TimerService* other = self->next;
    if (other) {
        func_5e5a80((char*)other + 0x130, sp);
    }
    RefCounted* rc = 0;
    if (arg1) {
        rc = (RefCounted*)arg1;
        _InterlockedExchangeAdd(&rc->strong, -1);
    }
    void* tmp = 0;
    func_618a40(&tmp, rc);
    self->next = *(TimerService**)tmp;
    func_4025b0((char*)self + 0x138, (char*)tmp + 4);
    if (tmp) {
        RefCounted* r = (RefCounted*)tmp;
        if (_InterlockedExchangeAdd(&r->strong, -1) == 1) {
            r->dispose();
            if (_InterlockedExchangeAdd(&r->weak, -1) == 1) {
                r->destroy();
            }
        }
    }
    ServiceProvider* sp2 = 0;
    if (self) {
        sp2 = (ServiceProvider*)((char*)self + 0x130);
    }
    TimerService* other2 = self->next;
    if (other2) {
        func_4218a0((char*)other2 + 0x130, sp2);
    }
}
