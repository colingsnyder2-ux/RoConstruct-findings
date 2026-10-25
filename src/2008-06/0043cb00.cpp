// from server: 100% by king_originala
// roc 2008-06 0043cb00  unit: RBX::Soundscape::VSoundId::?$XItem  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043cb00
//
// 0043cb00  6aff                 push -1
// 0043cb02  6869067c00           push 0x7c0669
// 0043cb07  64a100000000         mov eax, dword ptr fs:[0]
// 0043cb0d  50                   push eax
// 0043cb0e  64892500000000       mov dword ptr fs:[0], esp
// 0043cb15  83ec10               sub esp, 0x10
// 0043cb18  53                   push ebx
// 0043cb19  33db                 xor ebx, ebx
// 0043cb1b  56                   push esi
// 0043cb1c  895c2408             mov dword ptr [esp + 8], ebx
// 0043cb20  8bf1                 mov esi, ecx
// 0043cb22  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0043cb28  8b8098010000         mov eax, dword ptr [eax + 0x198]
// 0043cb2e  57                   push edi
// 0043cb2f  895c2410             mov dword ptr [esp + 0x10], ebx
// 0043cb33  895c2414             mov dword ptr [esp + 0x14], ebx
// 0043cb37  50                   push eax
// 0043cb38  8d4c2414             lea ecx, [esp + 0x14]
// 0043cb3c  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0043cb44  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0043cb48  e8b3a31300           call 0x576f00
// 0043cb4d  8b442430             mov eax, dword ptr [esp + 0x30]
// 0043cb51  c744242402000000     mov dword ptr [esp + 0x24], 2
// 0043cb59  3bc3                 cmp eax, ebx
// 0043cb5b  7405                 je 0x43cb62
// 0043cb5d  83c014               add eax, 0x14
// 0043cb60  eb02                 jmp 0x43cb64
// 0043cb62  33c0                 xor eax, eax
// 0043cb64  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0043cb68  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 0043cb6e  50                   push eax
// 0043cb6f  57                   push edi
// 0043cb70  e83bdc1d00           call 0x61a7b0
// 0043cb75  8d4c2410             lea ecx, [esp + 0x10]
// 0043cb79  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0043cb81  885c2424             mov byte ptr [esp + 0x24], bl
// 0043cb85  e836a81300           call 0x5773c0
// 0043cb8a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0043cb8e  8bc7                 mov eax, edi
// 0043cb90  5f                   pop edi
// 0043cb91  5e                   pop esi
// 0043cb92  5b                   pop ebx
// 0043cb93  64890d00000000       mov dword ptr fs:[0], ecx
// 0043cb9a  83c41c               add esp, 0x1c
// 0043cb9d  c20800               ret 8

struct Result {
    int value;
    Result(const Result&);
    ~Result();
};

struct ArgumentBase {
    char data[1];
};

struct Argument {
    char padding[20];
    ArgumentBase base;
};

struct GuardState {
    int value;
    int flag;

    GuardState();
    ~GuardState();
};

inline GuardState::GuardState() : value(0), flag(0)
{
}

struct Guard {
    GuardState state;
    int count;

    Guard(int);
    void initialize(int);
    ~Guard();
};

inline Guard::Guard(int source) : count(0)
{
    initialize(source);
}

struct Provider {
    char padding[0x198];
    int source;
};

struct Receiver {
    Result get(ArgumentBase*);
};

struct S {
    char padding[0x128];
    Provider* provider;
    Receiver* receiver;

    Result f(Argument*);
};

Result S::f(Argument* argument)
{
    Guard guard(provider->source);
    return receiver->get(argument ? &argument->base : 0);
}
