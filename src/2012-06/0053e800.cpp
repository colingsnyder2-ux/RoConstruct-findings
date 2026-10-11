// from server: 14% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl func_00439330();
extern "C" void __cdecl func_0053de50();

struct RefCounted
{
    void* vptr;
    volatile long ref1;
    volatile long ref2;
};

struct Holder
{
    RefCounted* ptr;
};

struct VPlayerEventDesc
{
    void __cdecl construct(Holder* a, Holder* b);
};

void VPlayerEventDesc::construct(Holder* a, Holder* b)
{
    Holder local;
    local.ptr = 0;

    func_00439330();

    RefCounted* p = local.ptr;
    if (p)
    {
        Holder tmp;
        tmp.ptr = a->ptr;
        Holder tmp2;
        tmp2.ptr = b->ptr;
        if (tmp2.ptr)
        {
            _InterlockedExchangeAdd(&tmp2.ptr->ref1, 1);
        }
        func_0053de50();
    }

    RefCounted* esi = local.ptr;
    if (esi)
    {
        if (_InterlockedExchangeAdd(&esi->ref1, -1) == 1)
        {
            esi->vptr;
            void (*f1)(RefCounted*) = *(void(**)(RefCounted*))((char*)esi->vptr + 4);
            f1(esi);
            if (_InterlockedExchangeAdd(&esi->ref2, -1) == 1)
            {
                void (*f2)(RefCounted*) = *(void(**)(RefCounted*))((char*)esi->vptr + 8);
                f2(esi);
            }
        }
    }

    RefCounted* eax = local.ptr;
    if (eax)
    {
        RefCounted* ecx = eax;
        if (_InterlockedExchangeAdd(&eax->ref2, -1) == 1)
        {
            void (*f3)(RefCounted*) = *(void(**)(RefCounted*))((char*)ecx->vptr + 8);
            f3(ecx);
        }
    }

    RefCounted* esi2 = b->ptr;
    if (esi2)
    {
        if (_InterlockedExchangeAdd(&esi2->ref1, -1) == 1)
        {
            void (*f4)(RefCounted*) = *(void(**)(RefCounted*))((char*)esi2->vptr + 4);
            f4(esi2);
            if (_InterlockedExchangeAdd(&esi2->ref2, -1) == 1)
            {
                void (*f5)(RefCounted*) = *(void(**)(RefCounted*))((char*)esi2->vptr + 8);
                f5(esi2);
            }
        }
    }
}
