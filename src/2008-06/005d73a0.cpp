// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Node
{
    Node* next;
    Node* prev;
};

struct ListHead
{
    Node* head;
};

struct TimerService
{
    char pad0[0x130];
    ListHead list;
    RefCounted* obj;
    ListHead list2;
    void func(void* a, void* b);
};

extern "C" void __cdecl sub_5E5A80(void*, void*);
extern "C" void* __cdecl sub_618A40(void*, void*);
extern "C" void __cdecl sub_4025B0(void*, void*);
extern "C" void __cdecl sub_4218A0(void*, void*);

void TimerService::func(void* a, void* b)
{
    Node* n;
    if (this)
        n = (Node*)((char*)this + 0x130);
    else
        n = 0;

    Node* cur = *(Node**)((char*)this + 0x134);
    if (cur)
    {
        sub_5E5A80((char*)cur + 0x130, n);
    }

    RefCounted* r = (RefCounted*)b;
    void* v;
    if (r)
        v = (void*)r;
    else
        v = 0;

    void* tmp;
    sub_618A40(&tmp, v);
    *(void**)((char*)this + 0x134) = *(void**)tmp;
    sub_4025B0((char*)this + 0x138, (char*)tmp + 4);

    RefCounted* old = (RefCounted*)tmp;
    if (old)
    {
        if (_InterlockedExchangeAdd(&old->strong, -1) == 1)
        {
            old->destroy();
        }
        if (_InterlockedExchangeAdd(&old->weak, -1) == 1)
        {
            old->dispose();
        }
    }

    Node* n2;
    if (this)
        n2 = (Node*)((char*)this + 0x130);
    else
        n2 = 0;

    Node* cur2 = *(Node**)((char*)this + 0x134);
    if (cur2)
    {
        sub_4218A0((char*)cur2 + 0x130, n2);
    }
}
