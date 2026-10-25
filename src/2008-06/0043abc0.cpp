// from server: 100% by king_originala
// roc 2008-06 0043abc0  unit: MVCXTPPropertyGridItem::?$XItem  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043abc0
//
// 0043abc0  6aff                 push -1
// 0043abc2  6800057c00           push 0x7c0500
// 0043abc7  64a100000000         mov eax, dword ptr fs:[0]
// 0043abcd  50                   push eax
// 0043abce  64892500000000       mov dword ptr fs:[0], esp
// 0043abd5  83ec0c               sub esp, 0xc
// 0043abd8  56                   push esi
// 0043abd9  8bf1                 mov esi, ecx
// 0043abdb  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0043abe1  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043abe7  57                   push edi
// 0043abe8  33ff                 xor edi, edi
// 0043abea  897c2408             mov dword ptr [esp + 8], edi
// 0043abee  897c240c             mov dword ptr [esp + 0xc], edi
// 0043abf2  50                   push eax
// 0043abf3  8d4c240c             lea ecx, [esp + 0xc]
// 0043abf7  897c2420             mov dword ptr [esp + 0x20], edi
// 0043abfb  897c2414             mov dword ptr [esp + 0x14], edi
// 0043abff  e8fcc21300           call 0x576f00
// 0043ac04  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043ac08  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0043ac10  3bc7                 cmp eax, edi
// 0043ac12  7405                 je 0x43ac19
// 0043ac14  83c014               add eax, 0x14
// 0043ac17  eb02                 jmp 0x43ac1b
// 0043ac19  33c0                 xor eax, eax
// 0043ac1b  8bb62c010000         mov esi, dword ptr [esi + 0x12c]
// 0043ac21  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0043ac24  8b11                 mov edx, dword ptr [ecx]
// 0043ac26  50                   push eax
// 0043ac27  8b4208               mov eax, dword ptr [edx + 8]
// 0043ac2a  ffd0                 call eax
// 0043ac2c  8d4c2408             lea ecx, [esp + 8]
// 0043ac30  8bf0                 mov esi, eax
// 0043ac32  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0043ac3a  e881c71300           call 0x5773c0
// 0043ac3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043ac43  5f                   pop edi
// 0043ac44  8bc6                 mov eax, esi
// 0043ac46  5e                   pop esi
// 0043ac47  64890d00000000       mov dword ptr fs:[0], ecx
// 0043ac4e  83c418               add esp, 0x18
// 0043ac51  c20400               ret 4

struct GuardData {
    int first;
    int second;
    int third;

    GuardData();
    void acquire(void*);
    ~GuardData();
};

inline GuardData::GuardData()
{
    first = 0;
    second = 0;
}

struct Guard {
    GuardData data;
    Guard(void*);
};

inline Guard::Guard(void* value)
{
    data.third = 0;
    data.acquire(value);
}

struct Argument {
    char padding[0x14];
    int value;
};

struct Interface {
    virtual void first();
    virtual void second();
    virtual int invoke(int*);
};

struct Context {
    char padding[0x198];
    void* value;
};

struct Owner {
    char padding[0x18];
    Interface* object;
};

struct Item {
    char padding[0x128];
    Context* context;
    Owner* owner;

    int f(Argument*);
};

int Item::f(Argument* argument)
{
    Guard guard(context->value);
    int* value = argument ? &argument->value : 0;
    Owner* currentOwner = owner;
    return currentOwner->object->invoke(value);
}
