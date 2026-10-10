// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct MarshaledListener
{
    void* vptr;
    int field4;
    int field8;
    int fieldC;
    char field10[0x18];
    void* field28;

    MarshaledListener(int a, void* b, void* c);
    ~MarshaledListener();
};

struct Helper454150
{
    void method(MarshaledListener* self, void* arg);
};

extern "C" void __cdecl sub_4A6C60(char* dest, char* src);

MarshaledListener::MarshaledListener(int a, void* b, void* c)
{
    this->vptr = (void*)0x7921e4;
    this->field4 = 0;
    this->field8 = 0;
    this->fieldC = a;
    sub_4A6C60(this->field10, (char*)&c);
    ((Helper454150*)this)->method(this, b);
    if (c)
    {
        RefCounted* rc = (RefCounted*)c;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1)
        {
            void** vt = *(void***)rc;
            void (__thiscall *fn)(RefCounted*) = (void (__thiscall *)(RefCounted*))vt[1];
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1)
            {
                void** vt2 = *(void***)rc;
                void (__thiscall *fn2)(RefCounted*) = (void (__thiscall *)(RefCounted*))vt2[2];
                fn2(rc);
            }
        }
    }
}
