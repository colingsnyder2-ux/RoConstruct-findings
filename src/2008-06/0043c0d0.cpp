// from server: 100% by king_originala
// roc 2008-06 0043c0d0  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043c0d0
//
// 0043c0d0  6aff                 push -1
// 0043c0d2  6800057c00           push 0x7c0500
// 0043c0d7  64a100000000         mov eax, dword ptr fs:[0]
// 0043c0dd  50                   push eax
// 0043c0de  64892500000000       mov dword ptr fs:[0], esp
// 0043c0e5  83ec0c               sub esp, 0xc
// 0043c0e8  56                   push esi
// 0043c0e9  8bf1                 mov esi, ecx
// 0043c0eb  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0043c0f1  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043c0f7  57                   push edi
// 0043c0f8  33ff                 xor edi, edi
// 0043c0fa  897c2408             mov dword ptr [esp + 8], edi
// 0043c0fe  897c240c             mov dword ptr [esp + 0xc], edi
// 0043c102  50                   push eax
// 0043c103  8d4c240c             lea ecx, [esp + 0xc]
// 0043c107  897c2420             mov dword ptr [esp + 0x20], edi
// 0043c10b  897c2414             mov dword ptr [esp + 0x14], edi
// 0043c10f  e8ecad1300           call 0x576f00
// 0043c114  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043c118  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0043c120  3bc7                 cmp eax, edi
// 0043c122  7405                 je 0x43c129
// 0043c124  83c014               add eax, 0x14
// 0043c127  eb02                 jmp 0x43c12b
// 0043c129  33c0                 xor eax, eax
// 0043c12b  8bb62c010000         mov esi, dword ptr [esi + 0x12c]
// 0043c131  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0043c134  8b11                 mov edx, dword ptr [ecx]
// 0043c136  8b742424             mov esi, dword ptr [esp + 0x24]
// 0043c13a  50                   push eax
// 0043c13b  8b4208               mov eax, dword ptr [edx + 8]
// 0043c13e  56                   push esi
// 0043c13f  ffd0                 call eax
// 0043c141  8d4c2408             lea ecx, [esp + 8]
// 0043c145  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0043c14d  e86eb21300           call 0x5773c0
// 0043c152  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043c156  5f                   pop edi
// 0043c157  8bc6                 mov eax, esi
// 0043c159  5e                   pop esi
// 0043c15a  64890d00000000       mov dword ptr fs:[0], ecx
// 0043c161  83c418               add esp, 0x18
// 0043c164  c20800               ret 8

struct Resource {
    void* object;
    void* control;

    Resource() : object(0), control(0) {}
    ~Resource();
};

struct Guard {
    Resource resource;
    int state;

    Guard(void* p) : state(0) { acquire(p); }
    void acquire(void*);
    ~Guard();
};

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void apply(void*, void*) = 0;
};

struct Provider {
    char padding[0x198];
    void* content;
};

struct Destination {
    char padding[0x18];
    Interface* target;
};

struct Argument {
    char padding[0x14];
    char payload;
};

struct S {
    char padding[0x128];
    Provider* provider;
    Destination* destination;

    void* f(void*, Argument*);
};

void* S::f(void* result, Argument* argument)
{
    Guard guard(provider->content);
    void* payload = argument ? &argument->payload : 0;
    register Destination* dest = destination;
    dest->target->apply(result, payload);
    return result;
}
