// from server: 100% by king_originala
// roc 2008-06 00494ff0  unit: RBX::VRunService::?$SignalDesc  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494ff0
//
// 00494ff0  6aff                 push -1
// 00494ff2  6890687c00           push 0x7c6890
// 00494ff7  64a100000000         mov eax, dword ptr fs:[0]
// 00494ffd  50                   push eax
// 00494ffe  64892500000000       mov dword ptr fs:[0], esp
// 00495005  83ec08               sub esp, 8
// 00495008  56                   push esi
// 00495009  8bf1                 mov esi, ecx
// 0049500b  57                   push edi
// 0049500c  89742408             mov dword ptr [esp + 8], esi
// 00495010  6a00                 push 0
// 00495012  83ec24               sub esp, 0x24
// 00495015  8bfc                 mov edi, esp
// 00495017  8d442458             lea eax, [esp + 0x58]
// 0049501b  89642434             mov dword ptr [esp + 0x34], esp
// 0049501f  50                   push eax
// 00495020  8bcf                 mov ecx, edi
// 00495022  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0049502a  e81184ffff           call 0x48d440
// 0049502f  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00495033  894f20               mov dword ptr [edi + 0x20], ecx
// 00495036  8bce                 mov ecx, esi
// 00495038  e843ffffff           call 0x494f80
// 0049503d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00495041  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00495045  8b542428             mov edx, dword ptr [esp + 0x28]
// 00495049  894620               mov dword ptr [esi + 0x20], eax
// 0049504c  894e24               mov dword ptr [esi + 0x24], ecx
// 0049504f  894628               mov dword ptr [esi + 0x28], eax
// 00495052  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00495055  c6463000             mov byte ptr [esi + 0x30], 0
// 00495059  894634               mov dword ptr [esi + 0x34], eax
// 0049505c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00495060  894e38               mov dword ptr [esi + 0x38], ecx
// 00495063  8bce                 mov ecx, esi
// 00495065  c644241801           mov byte ptr [esp + 0x18], 1
// 0049506a  89563c               mov dword ptr [esi + 0x3c], edx
// 0049506d  894640               mov dword ptr [esi + 0x40], eax
// 00495070  c6464400             mov byte ptr [esi + 0x44], 0
// 00495074  e87770ffff           call 0x48c0f0
// 00495079  8d4c2430             lea ecx, [esp + 0x30]
// 0049507d  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00495085  e81687ffff           call 0x48d7a0
// 0049508a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049508e  5f                   pop edi
// 0049508f  8bc6                 mov eax, esi
// 00495091  64890d00000000       mov dword ptr fs:[0], ecx
// 00495098  5e                   pop esi
// 00495099  83c414               add esp, 0x14
// 0049509c  c23400               ret 0x34

struct Value {
    unsigned char data[32];
    Value(const Value&);
    ~Value();
};

struct Argument {
    Value value;
    int extra;
};

struct Base {
    unsigned char data[32];
    Base(Argument, int);
    ~Base();
};

struct Pair {
    int first;
    int second;
    Pair(int, int);
};

inline Pair::Pair(int a, int b) : first(a), second(b) {}

struct FlaggedPair {
    int first;
    int second;
    bool flag;
    FlaggedPair(int, int);
};

inline FlaggedPair::FlaggedPair(int a, int b)
    : first(a), second(b), flag(false) {}

struct FlaggedValues {
    int first;
    int second;
    int third;
    int fourth;
    bool flag;
    FlaggedValues(int, int, int, int);
};

inline FlaggedValues::FlaggedValues(int a, int b, int c, int d)
    : first(a), second(b), third(c), fourth(d), flag(false) {}

struct S : Base {
    Pair first;
    FlaggedPair second;
    FlaggedValues third;

    S(int, int, int, int, Argument);
    void finish();
};

S::S(int a, int b, int c, int d, Argument argument)
    : Base(argument, 0),
      first(a, b),
      second(a, b),
      third(a, b, c, d)
{
    finish();
}
