// from server: 100% by king_originala
// roc 2008-06 00667370  unit: RBX::HUMAN::RunningNoPhysics  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667370
//
// 00667370  6aff                 push -1
// 00667372  6838c27d00           push 0x7dc238
// 00667377  64a100000000         mov eax, dword ptr fs:[0]
// 0066737d  50                   push eax
// 0066737e  64892500000000       mov dword ptr fs:[0], esp
// 00667385  51                   push ecx
// 00667386  56                   push esi
// 00667387  57                   push edi
// 00667388  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0066738c  8bf1                 mov esi, ecx
// 0066738e  57                   push edi
// 0066738f  8974240c             mov dword ptr [esp + 0xc], esi
// 00667393  e8d87c0000           call 0x66f070
// 00667398  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006673a0  c70610ce8400         mov dword ptr [esi], 0x84ce10
// 006673a6  c7460408ce8400       mov dword ptr [esi + 4], 0x84ce08
// 006673ad  c786a0000000f8cd8400 mov dword ptr [esi + 0xa0], 0x84cdf8
// 006673b7  85ff                 test edi, edi
// 006673b9  7405                 je 0x6673c0
// 006673bb  8d4714               lea eax, [edi + 0x14]
// 006673be  eb02                 jmp 0x6673c2
// 006673c0  33c0                 xor eax, eax
// 006673c2  50                   push eax
// 006673c3  b904a59700           mov ecx, 0x97a504
// 006673c8  e85342f0ff           call 0x56b620
// 006673cd  85c0                 test eax, eax
// 006673cf  7413                 je 0x6673e4
// 006673d1  d9ee                 fldz 
// 006673d3  51                   push ecx
// 006673d4  8d4c2420             lea ecx, [esp + 0x20]
// 006673d8  d91c24               fstp dword ptr [esp]
// 006673db  51                   push ecx
// 006673dc  8d4810               lea ecx, [eax + 0x10]
// 006673df  e80cc4e2ff           call 0x4937f0
// 006673e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006673e8  5f                   pop edi
// 006673e9  8bc6                 mov eax, esi
// 006673eb  5e                   pop esi
// 006673ec  64890d00000000       mov dword ptr fs:[0], ecx
// 006673f3  83c410               add esp, 0x10
// 006673f6  c20400               ret 4

struct Primary {
    virtual void update();
};

struct Secondary {
    virtual void update();
    char reserved[152];
};

struct Tertiary {
    virtual void update();
};

struct Base : Primary, Secondary, Tertiary {
    Base(void*);
    ~Base();
};

struct Value {
    int value;
    Value();
    Value(const Value&);
};

struct State {
    Value set(float);
};

struct Result {
    char reserved[16];
    State state;
};

struct Registry {
    Result* find(void*);
};

extern Registry registry;

struct RunningNoPhysics : Base {
    RunningNoPhysics(void*);
    virtual void update();
};

RunningNoPhysics::RunningNoPhysics(void* owner) : Base(owner)
{
    Result* result = registry.find(
        owner ? static_cast<char*>(owner) + 20 : 0);

    if (result)
        result->state.set(0.0f);
}
