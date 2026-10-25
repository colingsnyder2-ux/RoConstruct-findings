// from server: 100% by king_originala
// roc 2008-06 0043b510  unit: MVCXTPPropertyGridItem::?$XItem  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043b510
//
// 0043b510  6aff                 push -1
// 0043b512  6800057c00           push 0x7c0500
// 0043b517  64a100000000         mov eax, dword ptr fs:[0]
// 0043b51d  50                   push eax
// 0043b51e  64892500000000       mov dword ptr fs:[0], esp
// 0043b525  83ec0c               sub esp, 0xc
// 0043b528  56                   push esi
// 0043b529  8bf1                 mov esi, ecx
// 0043b52b  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0043b531  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043b537  57                   push edi
// 0043b538  33ff                 xor edi, edi
// 0043b53a  897c2408             mov dword ptr [esp + 8], edi
// 0043b53e  897c240c             mov dword ptr [esp + 0xc], edi
// 0043b542  50                   push eax
// 0043b543  8d4c240c             lea ecx, [esp + 0xc]
// 0043b547  897c2420             mov dword ptr [esp + 0x20], edi
// 0043b54b  897c2414             mov dword ptr [esp + 0x14], edi
// 0043b54f  e8acb91300           call 0x576f00
// 0043b554  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043b558  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0043b560  3bc7                 cmp eax, edi
// 0043b562  7405                 je 0x43b569
// 0043b564  83c014               add eax, 0x14
// 0043b567  eb02                 jmp 0x43b56b
// 0043b569  33c0                 xor eax, eax
// 0043b56b  8bb638010000         mov esi, dword ptr [esi + 0x138]
// 0043b571  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0043b574  8b11                 mov edx, dword ptr [ecx]
// 0043b576  8b742424             mov esi, dword ptr [esp + 0x24]
// 0043b57a  50                   push eax
// 0043b57b  8b4208               mov eax, dword ptr [edx + 8]
// 0043b57e  56                   push esi
// 0043b57f  ffd0                 call eax
// 0043b581  8d4c2408             lea ecx, [esp + 8]
// 0043b585  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0043b58d  e82ebe1300           call 0x5773c0
// 0043b592  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043b596  5f                   pop edi
// 0043b597  8bc6                 mov eax, esi
// 0043b599  5e                   pop esi
// 0043b59a  64890d00000000       mov dword ptr fs:[0], ecx
// 0043b5a1  83c418               add esp, 0x18
// 0043b5a4  c20800               ret 8

struct GuardBase {
    int a;
    int b;

    GuardBase() : a(0), b(0) {}
    ~GuardBase();
    void acquire(void*);
};

struct Guard : GuardBase {
    int c;

    Guard(void* p) : c(0) { acquire(p); }
};

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void apply(void*, void*) = 0;
};

struct Provider {
    char padding[0x198];
    void* value;
};

struct Holder {
    char padding[0x18];
    Interface* object;
};

struct Argument {
    char padding[0x14];
    char value;
};

struct Item {
    char padding[0x134];
    Provider* provider;
    Holder* holder;

    void* f(void*, Argument*);
};

void* Item::f(void* result, Argument* argument)
{
    Guard guard(provider->value);
    void* value = argument ? &argument->value : 0;
    Holder* active = holder;
    Interface* object = active->object;
    object->apply(result, value);
    return result;
}
