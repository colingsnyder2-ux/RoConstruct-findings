// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    long refCount;
};

struct Inner
{
    void* vptr;
    RefCounted* ptr;
};

struct Holder
{
    void* field0;
    Inner inner;
};

struct CChildFrame
{
    void* field0;
    Holder holder;
    char pad[0x9c];
    Inner* slot;
    CChildFrame* init(void* a, CChildFrame* b);
};

extern "C" void __stdcall sub_40edd0(void* a, void* b);

CChildFrame* CChildFrame::init(void* a, CChildFrame* b)
{
    CChildFrame* self = this;
    self->field0 = a;
    sub_40edd0(&self->holder, a);
    if (a != 0)
    {
        Inner* p = (Inner*)((char*)a + 0xa4);
        if (p != 0)
        {
            p->vptr = a;
            RefCounted* old = self->holder.inner.ptr;
            if (old != 0)
            {
                _InterlockedExchangeAdd(&old->refCount, 1);
            }
            RefCounted* cur = p->ptr;
            if (cur != 0)
            {
                if (_InterlockedExchangeAdd(&cur->refCount, -1) == 1)
                {
                    void** vt = *(void***)cur;
                    void (*fn)(void) = (void (*)(void))vt[2];
                    fn();
                }
            }
            p->ptr = old;
        }
    }
    return self;
}
