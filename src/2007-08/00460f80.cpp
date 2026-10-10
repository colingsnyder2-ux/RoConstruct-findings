// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCountedBase {
    void* vptr;
    long refCount;
};

struct EventData {
    void* vptr;
    void* field_4;
    RefCountedBase* field_8;
    void* field_c;
    ~EventData();
};

extern "C" void __cdecl func_00437b80(void*);

EventData::~EventData()
{
    this->vptr = (void*)0x794b94;
    if (this->field_c) {
        func_00437b80(this);
    }
    RefCountedBase* p = this->field_8;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            void** vt = *(void***)p;
            ((void (__thiscall*)(RefCountedBase*))vt[1])(p);
            if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
                void** vt2 = *(void***)p;
                ((void (__thiscall*)(RefCountedBase*))vt2[2])(p);
            }
        }
    }
    this->vptr = (void*)0x787f68;
}
