// from server: 100% by colin
// roc 2008-06 00586b10  unit: RBX::Script  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00586b10
//
// 00586b10  51                   push ecx
// 00586b11  56                   push esi
// 00586b12  8bf1                 mov esi, ecx
// 00586b14  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 00586b1b  c744240400000000     mov dword ptr [esp + 4], 0
// 00586b23  752a                 jne 0x586b4f
// 00586b25  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 00586b2b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00586b2f  8908                 mov dword ptr [eax], ecx
// 00586b31  8bb634010000         mov esi, dword ptr [esi + 0x134]
// 00586b37  897004               mov dword ptr [eax + 4], esi
// 00586b3a  85f6                 test esi, esi
// 00586b3c  7449                 je 0x586b87
// 00586b3e  83c604               add esi, 4
// 00586b41  ba01000000           mov edx, 1
// 00586b46  f00fc116             lock xadd dword ptr [esi], edx
// 00586b4a  5e                   pop esi
// 00586b4b  59                   pop ecx
// 00586b4c  c20400               ret 4
// 00586b4f  56                   push esi
// 00586b50  e8bbe6edff           call 0x465210
// 00586b55  83c404               add esp, 4
// 00586b58  85c0                 test eax, eax
// 00586b5a  741a                 je 0x586b76
// 00586b5c  81c638010000         add esi, 0x138
// 00586b62  56                   push esi
// 00586b63  8b742410             mov esi, dword ptr [esp + 0x10]
// 00586b67  56                   push esi
// 00586b68  8bc8                 mov ecx, eax
// 00586b6a  e8c1bbfdff           call 0x562730
// 00586b6f  8bc6                 mov eax, esi
// 00586b71  5e                   pop esi
// 00586b72  59                   pop ecx
// 00586b73  c20400               ret 4
// 00586b76  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00586b7a  c70000000000         mov dword ptr [eax], 0
// 00586b80  c7400400000000       mov dword ptr [eax + 4], 0
// 00586b87  5e                   pop esi
// 00586b88  59                   pop ecx
// 00586b89  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


struct RefCount {
    long reserved;
    volatile long count;
};

struct Pair {
    void* object;
    RefCount* control;

    Pair();
    Pair(const Pair&);
};

inline Pair::Pair() : object(0), control(0) {}

inline Pair::Pair(const Pair& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->count);
}

struct Key {
    char data[20];
};

namespace RBX {
    class Instance {
    public:
        virtual ~Instance();
        char pad[0x100];
        Instance* next;
    };

    class ServiceProvider : public Instance {
    public:
        Pair get(const Key&);
    };
}

RBX::ServiceProvider* __cdecl func_00465210(RBX::Instance*);

struct Script : RBX::Instance {
    char padding[0x28];
    Pair cached;
    Key key;
    long state;

    Pair get();
};

Pair Script::get()
{
    volatile long temporary;

    if (state == 0) {
        temporary = 0;
        return cached;
    }

    temporary = 0;
    RBX::ServiceProvider* provider = func_00465210(this);
    if (provider)
        return provider->get(key);

    return Pair();
}
