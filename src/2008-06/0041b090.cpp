// from server: 100% by colin
// roc 2008-06 0041b090  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041b090
//
// 0041b090  56                   push esi
// 0041b091  8b742408             mov esi, dword ptr [esp + 8]
// 0041b095  57                   push edi
// 0041b096  56                   push esi
// 0041b097  8bf9                 mov edi, ecx
// 0041b099  e852f21e00           call 0x60a2f0
// 0041b09e  83c404               add esp, 4
// 0041b0a1  84c0                 test al, al
// 0041b0a3  753e                 jne 0x41b0e3
// 0041b0a5  8d4708               lea eax, [edi + 8]
// 0041b0a8  85c0                 test eax, eax
// 0041b0aa  742c                 je 0x41b0d8
// 0041b0ac  8b0e                 mov ecx, dword ptr [esi]
// 0041b0ae  8908                 mov dword ptr [eax], ecx
// 0041b0b0  8b5604               mov edx, dword ptr [esi + 4]
// 0041b0b3  895004               mov dword ptr [eax + 4], edx
// 0041b0b6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0041b0b9  894808               mov dword ptr [eax + 8], ecx
// 0041b0bc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0041b0bf  89480c               mov dword ptr [eax + 0xc], ecx
// 0041b0c2  85c9                 test ecx, ecx
// 0041b0c4  740c                 je 0x41b0d2
// 0041b0c6  83c104               add ecx, 4
// 0041b0c9  ba01000000           mov edx, 1
// 0041b0ce  f00fc111             lock xadd dword ptr [ecx], edx
// 0041b0d2  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0041b0d5  894810               mov dword ptr [eax + 0x10], ecx
// 0041b0d8  c70734ed8000         mov dword ptr [edi], 0x80ed34
// 0041b0de  5f                   pop edi
// 0041b0df  5e                   pop esi
// 0041b0e0  c20400               ret 4
// 0041b0e3  c70700000000         mov dword ptr [edi], 0
// 0041b0e9  5f                   pop edi
// 0041b0ea  5e                   pop esi
// 0041b0eb  c20400               ret 4

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    long reserved;
    volatile long references;
};

struct Data
{
    unsigned long a;
    unsigned long b;
    unsigned long c;
    Control* control;
    unsigned long e;
};

extern bool __cdecl func_0060a2f0(const Data*);
extern unsigned char marker_0080ed34;

struct S
{
    void* tag;
    unsigned long reserved;
    Data data;

    void f(const Data* source);
};

void S::f(const Data* source)
{
    if (!func_0060a2f0(source))
    {
        Data* destination = &data;
        if (destination)
        {
            destination->a = source->a;
            destination->b = source->b;
            destination->c = source->c;
            destination->control = source->control;
            if (destination->control)
                _InterlockedIncrement(&destination->control->references);
            destination->e = source->e;
        }
        tag = &marker_0080ed34;
    }
    else
    {
        tag = 0;
    }
}
