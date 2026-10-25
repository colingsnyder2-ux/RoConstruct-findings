// from server: 100% by king_originala
// roc 2008-06 00667cd0  unit: RBX::HUMAN::Jumping  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667cd0
//
// 00667cd0  6aff                 push -1
// 00667cd2  68b8c27d00           push 0x7dc2b8
// 00667cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00667cdd  50                   push eax
// 00667cde  64892500000000       mov dword ptr fs:[0], esp
// 00667ce5  83ec08               sub esp, 8
// 00667ce8  56                   push esi
// 00667ce9  8bf1                 mov esi, ecx
// 00667ceb  89742408             mov dword ptr [esp + 8], esi
// 00667cef  c706ecce8400         mov dword ptr [esi], 0x84ceec
// 00667cf5  c74604e4ce8400       mov dword ptr [esi + 4], 0x84cee4
// 00667cfc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00667d04  e847c01200           call 0x793d50
// 00667d09  85c0                 test eax, eax
// 00667d0b  7405                 je 0x667d12
// 00667d0d  83c014               add eax, 0x14
// 00667d10  eb02                 jmp 0x667d14
// 00667d12  33c0                 xor eax, eax
// 00667d14  50                   push eax
// 00667d15  b9fca59700           mov ecx, 0x97a5fc
// 00667d1a  e80139f0ff           call 0x56b620
// 00667d1f  85c0                 test eax, eax
// 00667d21  740f                 je 0x667d32
// 00667d23  6a00                 push 0
// 00667d25  8d4c240b             lea ecx, [esp + 0xb]
// 00667d29  51                   push ecx
// 00667d2a  8d4810               lea ecx, [eax + 0x10]
// 00667d2d  e8cea1f7ff           call 0x5e1f00
// 00667d32  8bce                 mov ecx, esi
// 00667d34  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00667d3c  e87fb8fdff           call 0x6435c0
// 00667d41  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667d45  5e                   pop esi
// 00667d46  64890d00000000       mov dword ptr fs:[0], ecx
// 00667d4d  83c414               add esp, 0x14
// 00667d50  c3                   ret 

struct Primary
{
    virtual ~Primary();
};

struct Secondary
{
    virtual ~Secondary();
};

struct StateBase : Primary, Secondary
{
    int m_x;

    int f();
    virtual ~StateBase();
};

struct Signal
{
    void fire(char*, int);
};

struct Registry
{
    Signal* find(void*);
};

extern Registry registry;

struct Jumping : StateBase
{
    virtual ~Jumping();
};

Jumping::~Jumping()
{
    int owner = f();
    void* key = owner ? reinterpret_cast<char*>(owner) + 20 : 0;
    Signal* signal = registry.find(key);
    if (signal)
    {
        char token;
        reinterpret_cast<Signal*>(
            reinterpret_cast<char*>(signal) + 16)->fire(&token, 0);
    }
}
