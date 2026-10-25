// from server: 100% by king_originala
// roc 2008-06 0043c5b0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043c5b0
//
// 0043c5b0  6aff                 push -1
// 0043c5b2  6800057c00           push 0x7c0500
// 0043c5b7  64a100000000         mov eax, dword ptr fs:[0]
// 0043c5bd  50                   push eax
// 0043c5be  64892500000000       mov dword ptr fs:[0], esp
// 0043c5c5  83ec0c               sub esp, 0xc
// 0043c5c8  56                   push esi
// 0043c5c9  8bf1                 mov esi, ecx
// 0043c5cb  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0043c5d1  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043c5d7  57                   push edi
// 0043c5d8  33ff                 xor edi, edi
// 0043c5da  897c2408             mov dword ptr [esp + 8], edi
// 0043c5de  897c240c             mov dword ptr [esp + 0xc], edi
// 0043c5e2  50                   push eax
// 0043c5e3  8d4c240c             lea ecx, [esp + 0xc]
// 0043c5e7  897c2420             mov dword ptr [esp + 0x20], edi
// 0043c5eb  897c2414             mov dword ptr [esp + 0x14], edi
// 0043c5ef  e80ca91300           call 0x576f00
// 0043c5f4  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043c5f8  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0043c600  3bc7                 cmp eax, edi
// 0043c602  7403                 je 0x43c607
// 0043c604  8d7814               lea edi, [eax + 0x14]
// 0043c607  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043c60b  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0043c611  8b00                 mov eax, dword ptr [eax]
// 0043c613  8b11                 mov edx, dword ptr [ecx]
// 0043c615  8b523c               mov edx, dword ptr [edx + 0x3c]
// 0043c618  50                   push eax
// 0043c619  57                   push edi
// 0043c61a  ffd2                 call edx
// 0043c61c  8d4c2408             lea ecx, [esp + 8]
// 0043c620  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0043c628  e893ad1300           call 0x5773c0
// 0043c62d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043c631  5f                   pop edi
// 0043c632  5e                   pop esi
// 0043c633  64890d00000000       mov dword ptr fs:[0], ecx
// 0043c63a  83c418               add esp, 0x18
// 0043c63d  c20800               ret 8

struct Context {
    unsigned long fields[3];
    Context();
    ~Context();
    void attach(void *);
};

inline Context::Context() {
    fields[0] = 0;
    fields[1] = 0;
}

struct ScopedContext : Context {
    ScopedContext(void *);
};

inline ScopedContext::ScopedContext(void *value) {
    fields[2] = 0;
    attach(value);
}

struct Owner {
    char padding[0x198];
    void *handle;
};

struct Receiver;

struct ReceiverTable {
    void *padding[15];
    void (__thiscall *invoke)(Receiver *, void *, unsigned long);
};

struct Receiver {
    ReceiverTable *table;
};

struct Item {
    char padding[0x130];
    Owner *owner;
    Receiver *receiver;
    void execute(void *, const unsigned long *);
};

void Item::execute(void *object, const unsigned long *value) {
    void *adjusted = 0;
    ScopedContext context(owner->handle);
    if (object)
        adjusted = static_cast<char *>(object) + 0x14;
    receiver->table->invoke(receiver, adjusted, *value);
}
