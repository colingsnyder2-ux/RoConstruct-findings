// from server: 100% by king_originala
// roc 2008-06 00667930  unit: RBX::HUMAN::Freefall  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667930
//
// 00667930  6aff                 push -1
// 00667932  68b8c27d00           push 0x7dc2b8
// 00667937  64a100000000         mov eax, dword ptr fs:[0]
// 0066793d  50                   push eax
// 0066793e  64892500000000       mov dword ptr fs:[0], esp
// 00667945  83ec08               sub esp, 8
// 00667948  56                   push esi
// 00667949  8bf1                 mov esi, ecx
// 0066794b  89742408             mov dword ptr [esp + 8], esi
// 0066794f  c706a0ce8400         mov dword ptr [esi], 0x84cea0
// 00667955  c7460498ce8400       mov dword ptr [esi + 4], 0x84ce98
// 0066795c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00667964  e8e7c31200           call 0x793d50
// 00667969  85c0                 test eax, eax
// 0066796b  7405                 je 0x667972
// 0066796d  83c014               add eax, 0x14
// 00667970  eb02                 jmp 0x667974
// 00667972  33c0                 xor eax, eax
// 00667974  50                   push eax
// 00667975  b97ca49700           mov ecx, 0x97a47c
// 0066797a  e8a13cf0ff           call 0x56b620
// 0066797f  85c0                 test eax, eax
// 00667981  740f                 je 0x667992
// 00667983  6a00                 push 0
// 00667985  8d4c240b             lea ecx, [esp + 0xb]
// 00667989  51                   push ecx
// 0066798a  8d4810               lea ecx, [eax + 0x10]
// 0066798d  e86ea5f7ff           call 0x5e1f00
// 00667992  8bce                 mov ecx, esi
// 00667994  e8b7c31200           call 0x793d50
// 00667999  8bc8                 mov ecx, eax
// 0066799b  e87010f7ff           call 0x5d8a10
// 006679a0  85c0                 test eax, eax
// 006679a2  741f                 je 0x6679c3
// 006679a4  8bce                 mov ecx, esi
// 006679a6  e8a5c31200           call 0x793d50
// 006679ab  d986b0000000         fld dword ptr [esi + 0xb0]
// 006679b1  51                   push ecx
// 006679b2  8bc8                 mov ecx, eax
// 006679b4  d91c24               fstp dword ptr [esp]
// 006679b7  e85410f7ff           call 0x5d8a10
// 006679bc  8bc8                 mov ecx, eax
// 006679be  e8cd66f3ff           call 0x59e090
// 006679c3  8bce                 mov ecx, esi
// 006679c5  e886c31200           call 0x793d50
// 006679ca  8bc8                 mov ecx, eax
// 006679cc  e83f11f7ff           call 0x5d8b10
// 006679d1  85c0                 test eax, eax
// 006679d3  741f                 je 0x6679f4
// 006679d5  8bce                 mov ecx, esi
// 006679d7  e874c31200           call 0x793d50
// 006679dc  d986ac000000         fld dword ptr [esi + 0xac]
// 006679e2  51                   push ecx
// 006679e3  8bc8                 mov ecx, eax
// 006679e5  d91c24               fstp dword ptr [esp]
// 006679e8  e82311f7ff           call 0x5d8b10
// 006679ed  8bc8                 mov ecx, eax
// 006679ef  e89c66f3ff           call 0x59e090
// 006679f4  8bce                 mov ecx, esi
// 006679f6  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006679fe  e8bdbbfdff           call 0x6435c0
// 00667a03  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667a07  5e                   pop esi
// 00667a08  64890d00000000       mov dword ptr fs:[0], ecx
// 00667a0f  83c414               add esp, 0x14
// 00667a12  c3                   ret 

struct Value {
    void set(float);
};

struct Owner {
    char padding[20];
    char identity;
    Value* first();
    Value* second();
};

struct Signal {
    void notify(const char&, int);
};

struct Entry {
    char padding[16];
    Signal signal;
};

struct Registry {
    Entry* find(void*);
};

extern Registry registry;

struct Base {
    virtual ~Base();
    Owner* owner();
};

struct Interface {
    virtual void interfaceMethod();
};

struct Freefall : Base, Interface {
    char padding[164];
    float savedSecond;
    float savedFirst;

    ~Freefall();
};

Freefall::~Freefall()
{
    Owner* p = owner();
    Entry* entry = registry.find(p ? &p->identity : 0);
    if (entry) {
        char tag;
        entry->signal.notify(tag, 0);
    }

    if (owner()->first()) {
        Owner* p = owner();
        p->first()->set(savedFirst);
    }

    if (owner()->second()) {
        Owner* p = owner();
        p->second()->set(savedSecond);
    }
}
