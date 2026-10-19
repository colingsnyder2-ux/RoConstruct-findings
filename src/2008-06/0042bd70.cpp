// from server: 71% by colin
// from server: 70% by colin
// roc 2008-06 0042bd70  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042bd70
//
// 0042bd70  6aff                 push -1
// 0042bd72  68a2f57b00           push 0x7bf5a2
// 0042bd77  64a100000000         mov eax, dword ptr fs:[0]
// 0042bd7d  50                   push eax
// 0042bd7e  64892500000000       mov dword ptr fs:[0], esp
// 0042bd85  83ec08               sub esp, 8
// 0042bd88  55                   push ebp
// 0042bd89  56                   push esi
// 0042bd8a  57                   push edi
// 0042bd8b  8bf1                 mov esi, ecx
// 0042bd8d  6a02                 push 2
// 0042bd8f  8d4c2414             lea ecx, [esp + 0x14]
// 0042bd93  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042bd9b  e870feffff           call 0x42bc10
// 0042bda0  8b06                 mov eax, dword ptr [esi]
// 0042bda2  bf01000000           mov edi, 1
// 0042bda7  897c241c             mov dword ptr [esp + 0x1c], edi
// 0042bdab  85c0                 test eax, eax
// 0042bdad  7405                 je 0x42bdb4
// 0042bdaf  83c014               add eax, 0x14
// 0042bdb2  eb02                 jmp 0x42bdb6
// 0042bdb4  33c0                 xor eax, eax
// 0042bdb6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042bdb9  8b11                 mov edx, dword ptr [ecx]
// 0042bdbb  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0042bdbf  50                   push eax
// 0042bdc0  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0042bdc3  55                   push ebp
// 0042bdc4  ffd0                 call eax
// 0042bdc6  897c240c             mov dword ptr [esp + 0xc], edi
// 0042bdca  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0042bdcf  e8dcfdffff           call 0x42bbb0
// 0042bdd4  8bf0                 mov esi, eax
// 0042bdd6  8bce                 mov ecx, esi
// 0042bdd8  e893b71700           call 0x5a7570
// 0042bddd  8bf8                 mov edi, eax
// 0042bddf  8b442410             mov eax, dword ptr [esp + 0x10]
// 0042bde3  3bf8                 cmp edi, eax
// 0042bde5  7414                 je 0x42bdfb
// 0042bde7  50                   push eax
// 0042bde8  8bce                 mov ecx, esi
// 0042bdea  e8c1b81700           call 0x5a76b0
// 0042bdef  85ff                 test edi, edi
// 0042bdf1  7408                 je 0x42bdfb
// 0042bdf3  57                   push edi
// 0042bdf4  8bce                 mov ecx, esi
// 0042bdf6  e8f5b11700           call 0x5a6ff0
// 0042bdfb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0042bdff  5f                   pop edi
// 0042be00  5e                   pop esi
// 0042be01  8bc5                 mov eax, ebp
// 0042be03  5d                   pop ebp
// 0042be04  64890d00000000       mov dword ptr fs:[0], ecx
// 0042be0b  83c414               add esp, 0x14
// 0042be0e  c20400               ret 4
#include <intrin.h>

struct Descriptor;

struct Receiver {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void invoke(void* context, const Descriptor* descriptor);
};

struct ThreadStorage {
    void* get();
    void set(void* value);
    void dispose(void* value);
};

ThreadStorage* __cdecl currentStorage();

struct Scope {
    void* saved;
    Scope(int value);
    ~Scope();
};

inline Scope::~Scope()
{
    ThreadStorage* storage = currentStorage();
    void* previous = storage->get();
    if (previous != saved) {
        storage->set(saved);
        if (previous)
            storage->dispose(previous);
    }
}

struct Holder {
    void* object;
    unsigned int reserved;
    Receiver* receiver;

    void operator()(const Descriptor* descriptor);
};

void Holder::operator()(const Descriptor* descriptor)
{
    Scope scope(2);
    _ReadWriteBarrier();
    void* context = object
        ? static_cast<char*>(object) + 20
        : 0;
    receiver->invoke(context, descriptor);
}
