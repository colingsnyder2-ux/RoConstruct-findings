// from server: 100% by king_originala
// roc 2008-06 005726f0  unit: RBX::ServiceProvider  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005726f0
//
// 005726f0  64a100000000         mov eax, dword ptr fs:[0]
// 005726f6  6aff                 push -1
// 005726f8  6868917d00           push 0x7d9168
// 005726fd  50                   push eax
// 005726fe  64892500000000       mov dword ptr fs:[0], esp
// 00572705  83ec08               sub esp, 8
// 00572708  56                   push esi
// 00572709  57                   push edi
// 0057270a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057270e  85ff                 test edi, edi
// 00572710  7427                 je 0x572739
// 00572712  6a00                 push 0
// 00572714  685ce19200           push 0x92e15c
// 00572719  687c909200           push 0x92907c
// 0057271e  6a00                 push 0
// 00572720  57                   push edi
// 00572721  e8a0f01200           call 0x6a17c6
// 00572726  8bf0                 mov esi, eax
// 00572728  83c414               add esp, 0x14
// 0057272b  85f6                 test esi, esi
// 0057272d  751d                 jne 0x57274c
// 0057272f  8bbf04010000         mov edi, dword ptr [edi + 0x104]
// 00572735  85ff                 test edi, edi
// 00572737  75d9                 jne 0x572712
// 00572739  5f                   pop edi
// 0057273a  33c0                 xor eax, eax
// 0057273c  5e                   pop esi
// 0057273d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00572741  64890d00000000       mov dword ptr fs:[0], ecx
// 00572748  83c414               add esp, 0x14
// 0057274b  c3                   ret 
// 0057274c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00572750  8b06                 mov eax, dword ptr [esi]
// 00572752  8b4034               mov eax, dword ptr [eax + 0x34]
// 00572755  51                   push ecx
// 00572756  8d54240c             lea edx, [esp + 0xc]
// 0057275a  52                   push edx
// 0057275b  8bce                 mov ecx, esi
// 0057275d  ffd0                 call eax
// 0057275f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00572763  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057276b  85c9                 test ecx, ecx
// 0057276d  740a                 je 0x572779
// 0057276f  56                   push esi
// 00572770  e87b81feff           call 0x55a8f0
// 00572775  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00572779  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057277d  8bf9                 mov edi, ecx
// 0057277f  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00572787  85f6                 test esi, esi
// 00572789  742a                 je 0x5727b5
// 0057278b  8d4e04               lea ecx, [esi + 4]
// 0057278e  83caff               or edx, 0xffffffff
// 00572791  f00fc111             lock xadd dword ptr [ecx], edx
// 00572795  751e                 jne 0x5727b5
// 00572797  8b06                 mov eax, dword ptr [esi]
// 00572799  8b5004               mov edx, dword ptr [eax + 4]
// 0057279c  8bce                 mov ecx, esi
// 0057279e  ffd2                 call edx
// 005727a0  8d4608               lea eax, [esi + 8]
// 005727a3  83c9ff               or ecx, 0xffffffff
// 005727a6  f00fc108             lock xadd dword ptr [eax], ecx
// 005727aa  7509                 jne 0x5727b5
// 005727ac  8b16                 mov edx, dword ptr [esi]
// 005727ae  8b4208               mov eax, dword ptr [edx + 8]
// 005727b1  8bce                 mov ecx, esi
// 005727b3  ffd0                 call eax
// 005727b5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005727b9  8bc7                 mov eax, edi
// 005727bb  5f                   pop edi
// 005727bc  5e                   pop esi
// 005727bd  64890d00000000       mov dword ptr fs:[0], ecx
// 005727c4  83c414               add esp, 0x14
// 005727c7  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

namespace RBX {
    class ServiceProvider;
}

struct Object {
    void attach(RBX::ServiceProvider*);
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    Object* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

namespace RBX {
    class Instance {
    public:
        virtual void slot0();
        virtual void slot1();
        virtual void slot2();
        virtual void slot3();
        virtual void slot4();
        virtual void slot5();
        virtual void slot6();
        virtual void slot7();
        virtual void slot8();
        virtual void slot9();
        virtual void slot10();
        virtual void slot11();
        virtual void slot12();

        char padding[256];
        Instance* parent;
    };

    class ServiceProvider : public Instance {
    public:
        virtual Shared find(void*);
    };
}

Object* findService(RBX::Instance* instance, void* key)
{
    while (instance) {
        RBX::ServiceProvider* provider =
            dynamic_cast<RBX::ServiceProvider*>(instance);
        if (provider) {
            Shared result = provider->find(key);
            if (result.object)
                result.object->attach(provider);
            return result.object;
        }
        instance = instance->parent;
    }
    return 0;
}
