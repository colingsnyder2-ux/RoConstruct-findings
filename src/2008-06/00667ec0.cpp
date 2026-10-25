// from server: 100% by king_originala
// roc 2008-06 00667ec0  unit: RBX::HUMAN::GettingUp  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667ec0
//
// 00667ec0  6aff                 push -1
// 00667ec2  68b8c27d00           push 0x7dc2b8
// 00667ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00667ecd  50                   push eax
// 00667ece  64892500000000       mov dword ptr fs:[0], esp
// 00667ed5  83ec08               sub esp, 8
// 00667ed8  56                   push esi
// 00667ed9  8bf1                 mov esi, ecx
// 00667edb  89742408             mov dword ptr [esp + 8], esi
// 00667edf  c70630cf8400         mov dword ptr [esi], 0x84cf30
// 00667ee5  c7460428cf8400       mov dword ptr [esi + 4], 0x84cf28
// 00667eec  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00667ef4  e857be1200           call 0x793d50
// 00667ef9  85c0                 test eax, eax
// 00667efb  7405                 je 0x667f02
// 00667efd  83c014               add eax, 0x14
// 00667f00  eb02                 jmp 0x667f04
// 00667f02  33c0                 xor eax, eax
// 00667f04  50                   push eax
// 00667f05  b930a69700           mov ecx, 0x97a630
// 00667f0a  e81137f0ff           call 0x56b620
// 00667f0f  85c0                 test eax, eax
// 00667f11  740f                 je 0x667f22
// 00667f13  6a00                 push 0
// 00667f15  8d4c240b             lea ecx, [esp + 0xb]
// 00667f19  51                   push ecx
// 00667f1a  8d4810               lea ecx, [eax + 0x10]
// 00667f1d  e8de9ff7ff           call 0x5e1f00
// 00667f22  8bce                 mov ecx, esi
// 00667f24  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00667f2c  e88fb6fdff           call 0x6435c0
// 00667f31  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00667f35  5e                   pop esi
// 00667f36  64890d00000000       mov dword ptr fs:[0], ecx
// 00667f3d  83c414               add esp, 0x14
// 00667f40  c3                   ret 

struct Primary
{
    virtual ~Primary();
};

struct Secondary
{
    virtual ~Secondary();
};

struct Base : Primary, Secondary
{
    int value;
    virtual ~Base();
    void* f();
};

struct Event
{
    void fire(char*, int);
};

struct Registry
{
    void* find(void*);
};

struct S : Base
{
    virtual ~S();
};

S::~S()
{
    void* p = f();
    void* key = p ? static_cast<char*>(p) + 20 : 0;
    void* found = reinterpret_cast<Registry*>(0x0097a630)->find(key);
    if (found)
    {
        char tag;
        reinterpret_cast<Event*>(static_cast<char*>(found) + 16)->fire(&tag, 0);
    }
}
