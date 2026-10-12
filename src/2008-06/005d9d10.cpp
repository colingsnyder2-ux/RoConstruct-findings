// from server: 100% by king_originala
// roc 2008-06 005d9d10  unit: RBX::Humanoid  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9d10
//
// 005d9d10  6aff                 push -1
// 005d9d12  6868617c00           push 0x7c6168
// 005d9d17  64a100000000         mov eax, dword ptr fs:[0]
// 005d9d1d  50                   push eax
// 005d9d1e  64892500000000       mov dword ptr fs:[0], esp
// 005d9d25  51                   push ecx
// 005d9d26  8b442414             mov eax, dword ptr [esp + 0x14]
// 005d9d2a  6a00                 push 0
// 005d9d2c  6850dd9200           push 0x92dd50
// 005d9d31  687c909200           push 0x92907c
// 005d9d36  6a00                 push 0
// 005d9d38  50                   push eax
// 005d9d39  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005d9d41  e8807a0c00           call 0x6a17c6
// 005d9d46  83c414               add esp, 0x14
// 005d9d49  85c0                 test eax, eax
// 005d9d4b  7416                 je 0x5d9d63
// 005d9d4d  8d0c24               lea ecx, [esp]
// 005d9d50  0528020000           add eax, 0x228
// 005d9d55  51                   push ecx
// 005d9d56  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d9d5a  89442404             mov dword ptr [esp + 4], eax
// 005d9d5e  e83d76e4ff           call 0x4213a0
// 005d9d63  56                   push esi
// 005d9d64  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005d9d68  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d9d70  85f6                 test esi, esi
// 005d9d72  742a                 je 0x5d9d9e
// 005d9d74  8d5604               lea edx, [esi + 4]
// 005d9d77  83c8ff               or eax, 0xffffffff
// 005d9d7a  f00fc102             lock xadd dword ptr [edx], eax
// 005d9d7e  751e                 jne 0x5d9d9e
// 005d9d80  8b16                 mov edx, dword ptr [esi]
// 005d9d82  8b4204               mov eax, dword ptr [edx + 4]
// 005d9d85  8bce                 mov ecx, esi
// 005d9d87  ffd0                 call eax
// 005d9d89  8d4e08               lea ecx, [esi + 8]
// 005d9d8c  83caff               or edx, 0xffffffff
// 005d9d8f  f00fc111             lock xadd dword ptr [ecx], edx
// 005d9d93  7509                 jne 0x5d9d9e
// 005d9d95  8b06                 mov eax, dword ptr [esi]
// 005d9d97  8b5008               mov edx, dword ptr [eax + 8]
// 005d9d9a  8bce                 mov ecx, esi
// 005d9d9c  ffd2                 call edx
// 005d9d9e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d9da2  5e                   pop esi
// 005d9da3  64890d00000000       mov dword ptr fs:[0], ecx
// 005d9daa  83c410               add esp, 0x10
// 005d9dad  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Signal {};

namespace RBX {
    class Instance {
    public:
        virtual void placeholder();
    };

    class PartInstance : public Instance {
    public:
        char padding[0x224];
        Signal signal;
    };
}

struct Control {
    virtual void placeholder();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct SharedInstance {
    RBX::Instance* object;
    Control* control;

    ~SharedInstance();
};

inline SharedInstance::~SharedInstance()
{
    Control* c = control;
    if (c) {
        if (_InterlockedDecrement(&c->strong) == 0) {
            c->dispose();
            if (_InterlockedDecrement(&c->weak) == 0)
                c->destroy();
        }
    }
}

struct Listener {
    void connect(Signal* const&);
};

void update(SharedInstance instance, Listener* listener)
{
    RBX::PartInstance* part =
        dynamic_cast<RBX::PartInstance*>(instance.object);
    if (part) {
        Signal* signal = &part->signal;
        listener->connect(signal);
    }
}
