// from server: 100% by king_originala
// roc 2008-06 006670b0  unit: RBX::HUMAN::Seated  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006670b0
//
// 006670b0  6aff                 push -1
// 006670b2  68b8c27d00           push 0x7dc2b8
// 006670b7  64a100000000         mov eax, dword ptr fs:[0]
// 006670bd  50                   push eax
// 006670be  64892500000000       mov dword ptr fs:[0], esp
// 006670c5  83ec08               sub esp, 8
// 006670c8  56                   push esi
// 006670c9  8bf1                 mov esi, ecx
// 006670cb  89742408             mov dword ptr [esp + 8], esi
// 006670cf  c70654cd8400         mov dword ptr [esi], 0x84cd54
// 006670d5  c746044ccd8400       mov dword ptr [esi + 4], 0x84cd4c
// 006670dc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006670e4  e867cc1200           call 0x793d50
// 006670e9  85c0                 test eax, eax
// 006670eb  7405                 je 0x6670f2
// 006670ed  83c014               add eax, 0x14
// 006670f0  eb02                 jmp 0x6670f4
// 006670f2  33c0                 xor eax, eax
// 006670f4  50                   push eax
// 006670f5  b958a59700           mov ecx, 0x97a558
// 006670fa  e82145f0ff           call 0x56b620
// 006670ff  85c0                 test eax, eax
// 00667101  740f                 je 0x667112
// 00667103  6a00                 push 0
// 00667105  8d4c240b             lea ecx, [esp + 0xb]
// 00667109  51                   push ecx
// 0066710a  8d4810               lea ecx, [eax + 0x10]
// 0066710d  e8eeadf7ff           call 0x5e1f00
// 00667112  8bce                 mov ecx, esi
// 00667114  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0066711c  e89fc4fdff           call 0x6435c0
// 00667121  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667125  5e                   pop esi
// 00667126  64890d00000000       mov dword ptr fs:[0], ecx
// 0066712d  83c414               add esp, 0x14
// 00667130  c3                   ret 

struct Base
{
    virtual ~Base();
};

struct Interface
{
    virtual void unused() = 0;
};

struct Getter
{
    char padding[8];
    int value;
    int f();
};

struct Event
{
    void invoke(char*, int);
};

struct Lookup
{
    char* find(void*);
};

extern Lookup lookup;

struct S : Base, Interface
{
    virtual ~S();
};

S::~S()
{
    int object = reinterpret_cast<Getter*>(this)->f();
    void* key = object ? reinterpret_cast<void*>(object + 0x14) : 0;
    char* result = lookup.find(key);

    if (result)
    {
        char temporary;
        reinterpret_cast<Event*>(result + 0x10)->invoke(&temporary, 0);
    }
}
