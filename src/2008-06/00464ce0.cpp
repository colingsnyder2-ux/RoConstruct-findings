// from server: 100% by king_originala
// roc 2008-06 00464ce0  unit: RBX::VInstance::?$MarshaledListener::EventData  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464ce0
//
// 00464ce0  6aff                 push -1
// 00464ce2  6898327c00           push 0x7c3298
// 00464ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00464ced  50                   push eax
// 00464cee  64892500000000       mov dword ptr fs:[0], esp
// 00464cf5  51                   push ecx
// 00464cf6  56                   push esi
// 00464cf7  57                   push edi
// 00464cf8  8bf9                 mov edi, ecx
// 00464cfa  897c2408             mov dword ptr [esp + 8], edi
// 00464cfe  c7079cb38100         mov dword ptr [edi], 0x81b39c
// 00464d04  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00464d07  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00464d0f  85c9                 test ecx, ecx
// 00464d11  7406                 je 0x464d19
// 00464d13  57                   push edi
// 00464d14  e89727ffff           call 0x4574b0
// 00464d19  8b7708               mov esi, dword ptr [edi + 8]
// 00464d1c  85f6                 test esi, esi
// 00464d1e  742a                 je 0x464d4a
// 00464d20  8d4604               lea eax, [esi + 4]
// 00464d23  83c9ff               or ecx, 0xffffffff
// 00464d26  f00fc108             lock xadd dword ptr [eax], ecx
// 00464d2a  751e                 jne 0x464d4a
// 00464d2c  8b16                 mov edx, dword ptr [esi]
// 00464d2e  8b4204               mov eax, dword ptr [edx + 4]
// 00464d31  8bce                 mov ecx, esi
// 00464d33  ffd0                 call eax
// 00464d35  8d4e08               lea ecx, [esi + 8]
// 00464d38  83caff               or edx, 0xffffffff
// 00464d3b  f00fc111             lock xadd dword ptr [ecx], edx
// 00464d3f  7509                 jne 0x464d4a
// 00464d41  8b06                 mov eax, dword ptr [esi]
// 00464d43  8b5008               mov edx, dword ptr [eax + 8]
// 00464d46  8bce                 mov ecx, esi
// 00464d48  ffd2                 call edx
// 00464d4a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00464d4e  c70760f88000         mov dword ptr [edi], 0x80f860
// 00464d54  5f                   pop edi
// 00464d55  5e                   pop esi
// 00464d56  64890d00000000       mov dword ptr fs:[0], ecx
// 00464d5d  83c410               add esp, 0x10
// 00464d60  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct EventData;

struct Listener
{
    void detach(EventData*);
};

struct RefCount
{
    virtual ~RefCount();
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;
};

struct SharedData
{
    void* object;
    RefCount* control;
};

struct EventBase
{
    virtual ~EventBase();
};

struct EventData : EventBase
{
    SharedData data;
    Listener* listener;

    virtual ~EventData();
};

__forceinline EventBase::~EventBase()
{
}

EventData::~EventData()
{
    if (listener)
        listener->detach(this);

    RefCount* p = data.control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}
