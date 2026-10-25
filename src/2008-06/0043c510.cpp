// from server: 100% by king_originala
// roc 2008-06 0043c510  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043c510
//
// 0043c510  6aff                 push -1
// 0043c512  6800057c00           push 0x7c0500
// 0043c517  64a100000000         mov eax, dword ptr fs:[0]
// 0043c51d  50                   push eax
// 0043c51e  64892500000000       mov dword ptr fs:[0], esp
// 0043c525  83ec0c               sub esp, 0xc
// 0043c528  56                   push esi
// 0043c529  8bf1                 mov esi, ecx
// 0043c52b  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0043c531  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043c537  57                   push edi
// 0043c538  33ff                 xor edi, edi
// 0043c53a  897c2408             mov dword ptr [esp + 8], edi
// 0043c53e  897c240c             mov dword ptr [esp + 0xc], edi
// 0043c542  50                   push eax
// 0043c543  8d4c240c             lea ecx, [esp + 0xc]
// 0043c547  897c2420             mov dword ptr [esp + 0x20], edi
// 0043c54b  897c2414             mov dword ptr [esp + 0x14], edi
// 0043c54f  e8aca91300           call 0x576f00
// 0043c554  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043c558  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0043c560  3bc7                 cmp eax, edi
// 0043c562  7405                 je 0x43c569
// 0043c564  83c014               add eax, 0x14
// 0043c567  eb02                 jmp 0x43c56b
// 0043c569  33c0                 xor eax, eax
// 0043c56b  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0043c571  8b11                 mov edx, dword ptr [ecx]
// 0043c573  50                   push eax
// 0043c574  8b4238               mov eax, dword ptr [edx + 0x38]
// 0043c577  ffd0                 call eax
// 0043c579  8d4c2408             lea ecx, [esp + 8]
// 0043c57d  8bf0                 mov esi, eax
// 0043c57f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0043c587  e834ae1300           call 0x5773c0
// 0043c58c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043c590  5f                   pop edi
// 0043c591  8bc6                 mov eax, esi
// 0043c593  5e                   pop esi
// 0043c594  64890d00000000       mov dword ptr fs:[0], ecx
// 0043c59b  83c418               add esp, 0x18
// 0043c59e  c20400               ret 4

struct TemporaryBase {
    unsigned int words[3];
    TemporaryBase();
    ~TemporaryBase();
};

inline TemporaryBase::TemporaryBase()
{
    words[0] = 0;
    words[1] = 0;
}

struct Temporary : TemporaryBase {
    void initialize(void*);
    Temporary(void*);
};

inline Temporary::Temporary(void* p)
{
    words[2] = 0;
    initialize(p);
}

struct Source {
    char padding[0x198];
    void* value;
};

struct Argument {
    char padding[0x14];
};

struct Receiver {
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
    virtual void slot13();
    virtual int apply(void*);
};

struct Item {
    char padding[0x130];
    Source* source;
    Receiver* receiver;
    int evaluate(Argument*);
};

int Item::evaluate(Argument* argument)
{
    Temporary temporary(source->value);
    return receiver->apply(argument ? argument->padding + 0x14 : 0);
}
