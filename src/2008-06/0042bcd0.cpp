// from server: 100% by king_originala
// roc 2008-06 0042bcd0  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042bcd0
//
// 0042bcd0  6aff                 push -1
// 0042bcd2  6868f57b00           push 0x7bf568
// 0042bcd7  64a100000000         mov eax, dword ptr fs:[0]
// 0042bcdd  50                   push eax
// 0042bcde  64892500000000       mov dword ptr fs:[0], esp
// 0042bce5  51                   push ecx
// 0042bce6  56                   push esi
// 0042bce7  57                   push edi
// 0042bce8  8bf1                 mov esi, ecx
// 0042bcea  6a02                 push 2
// 0042bcec  8d4c240c             lea ecx, [esp + 0xc]
// 0042bcf0  e81bffffff           call 0x42bc10
// 0042bcf5  8b06                 mov eax, dword ptr [esi]
// 0042bcf7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0042bcff  85c0                 test eax, eax
// 0042bd01  7405                 je 0x42bd08
// 0042bd03  83c014               add eax, 0x14
// 0042bd06  eb02                 jmp 0x42bd0a
// 0042bd08  33c0                 xor eax, eax
// 0042bd0a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042bd0d  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0042bd11  8b11                 mov edx, dword ptr [ecx]
// 0042bd13  56                   push esi
// 0042bd14  50                   push eax
// 0042bd15  8b4220               mov eax, dword ptr [edx + 0x20]
// 0042bd18  ffd0                 call eax
// 0042bd1a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0042bd22  e889feffff           call 0x42bbb0
// 0042bd27  8bf0                 mov esi, eax
// 0042bd29  8bce                 mov ecx, esi
// 0042bd2b  e840b81700           call 0x5a7570
// 0042bd30  8bf8                 mov edi, eax
// 0042bd32  8b442408             mov eax, dword ptr [esp + 8]
// 0042bd36  3bf8                 cmp edi, eax
// 0042bd38  7414                 je 0x42bd4e
// 0042bd3a  50                   push eax
// 0042bd3b  8bce                 mov ecx, esi
// 0042bd3d  e86eb91700           call 0x5a76b0
// 0042bd42  85ff                 test edi, edi
// 0042bd44  7408                 je 0x42bd4e
// 0042bd46  57                   push edi
// 0042bd47  8bce                 mov ecx, esi
// 0042bd49  e8a2b21700           call 0x5a6ff0
// 0042bd4e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042bd52  5f                   pop edi
// 0042bd53  5e                   pop esi
// 0042bd54  64890d00000000       mov dword ptr fs:[0], ecx
// 0042bd5b  83c410               add esp, 0x10
// 0042bd5e  c20400               ret 4

struct Descriptor;
struct Context;

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

struct Receiver {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void invoke(Context* context, const Descriptor* descriptor);
};

struct Holder {
    void* object;
    unsigned int reserved;
    Receiver* receiver;

    void operator()(const Descriptor* descriptor);
};

void Holder::operator()(const Descriptor* descriptor)
{
    Scope scope(2);
    Context* context = object
        ? reinterpret_cast<Context*>(static_cast<char*>(object) + 20)
        : 0;
    receiver->invoke(context, descriptor);
}
