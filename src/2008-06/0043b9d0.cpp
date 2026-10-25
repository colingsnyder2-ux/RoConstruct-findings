// from server: 100% by king_originala
// roc 2008-06 0043b9d0  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043b9d0
//
// 0043b9d0  6aff                 push -1
// 0043b9d2  6800057c00           push 0x7c0500
// 0043b9d7  64a100000000         mov eax, dword ptr fs:[0]
// 0043b9dd  50                   push eax
// 0043b9de  64892500000000       mov dword ptr fs:[0], esp
// 0043b9e5  83ec0c               sub esp, 0xc
// 0043b9e8  56                   push esi
// 0043b9e9  8bf1                 mov esi, ecx
// 0043b9eb  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0043b9f1  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043b9f7  57                   push edi
// 0043b9f8  33ff                 xor edi, edi
// 0043b9fa  897c2408             mov dword ptr [esp + 8], edi
// 0043b9fe  897c240c             mov dword ptr [esp + 0xc], edi
// 0043ba02  50                   push eax
// 0043ba03  8d4c240c             lea ecx, [esp + 0xc]
// 0043ba07  897c2420             mov dword ptr [esp + 0x20], edi
// 0043ba0b  897c2414             mov dword ptr [esp + 0x14], edi
// 0043ba0f  e8ecb41300           call 0x576f00
// 0043ba14  8b442424             mov eax, dword ptr [esp + 0x24]
// 0043ba18  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0043ba20  3bc7                 cmp eax, edi
// 0043ba22  7403                 je 0x43ba27
// 0043ba24  8d7814               lea edi, [eax + 0x14]
// 0043ba27  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 0043ba2d  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043ba31  8b11                 mov edx, dword ptr [ecx]
// 0043ba33  8b5220               mov edx, dword ptr [edx + 0x20]
// 0043ba36  50                   push eax
// 0043ba37  57                   push edi
// 0043ba38  ffd2                 call edx
// 0043ba3a  8d4c2408             lea ecx, [esp + 8]
// 0043ba3e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0043ba46  e875b91300           call 0x5773c0
// 0043ba4b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0043ba4f  5f                   pop edi
// 0043ba50  5e                   pop esi
// 0043ba51  64890d00000000       mov dword ptr fs:[0], ecx
// 0043ba58  83c418               add esp, 0x18
// 0043ba5b  c20800               ret 8

struct GuardData
{
    int a;
    int b;
    int c;

    GuardData();
    ~GuardData();
    void acquire(void*);
};

__forceinline GuardData::GuardData() : a(0), b(0)
{
}

struct Guard
{
    GuardData data;

    Guard(void*);
    ~Guard();
};

__forceinline Guard::Guard(void* value)
{
    data.c = 0;
    data.acquire(value);
}

__forceinline Guard::~Guard()
{
}

struct Owner
{
    char padding[0x198];
    void* value;
};

struct Prefix
{
    char padding[0x14];
};

struct Base
{
    int value;
};

struct Object : Prefix, Base
{
};

struct Interface
{
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void slot3() = 0;
    virtual void slot4() = 0;
    virtual void slot5() = 0;
    virtual void slot6() = 0;
    virtual void slot7() = 0;
    virtual void invoke(Base*, int) = 0;
};

struct S
{
    char padding[0x128];
    Owner* owner;
    Interface* target;

    void f(Object*, int);
};

void S::f(Object* object, int value)
{
    Guard guard(owner->value);
    target->invoke(object, value);
}
