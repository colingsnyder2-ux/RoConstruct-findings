// from server: 80% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VInstance
{
    void* getSomething();
};

struct Listener
{
    void remove(void*);
};

struct JointsService
{
    void remove(void*);
};

struct Humanoid
{
    void* field_0x220;
    char pad[0x1a4 - 4];
    void* field_0x1a4;
    void setSomething(void* a, void* b);
};

void Humanoid::setSomething(void* a, void* b)
{
    if (a)
    {
        if (field_0x220)
        {
            void** vt = *(void***)field_0x220;
            typedef void (__thiscall *Fn)(void*, int);
            ((Fn)vt[6])(field_0x220, 1);
        }
        field_0x220 = 0;
        void* self = this ? (void*)((char*)this + 0x1a4) : 0;
        VInstance* v = (VInstance*)a;
        void* r = v->getSomething();
        if (r)
        {
            ((JointsService*)((char*)r + 0x150))->remove(self);
        }
    }
    if (b)
    {
        void* self = this ? (void*)((char*)this + 0x1a4) : 0;
        VInstance* v = (VInstance*)b;
        void* r = v->getSomething();
        if (r)
        {
            ((Listener*)((char*)r + 0x150))->remove(self);
        }
    }
}
