// from server: 100% by king_originala
// roc 2008-06 0049fbb0  unit: RBX::Network::VClient::?$SignalDesc  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049fbb0
//
// 0049fbb0  6aff                 push -1
// 0049fbb2  6801787c00           push 0x7c7801
// 0049fbb7  64a100000000         mov eax, dword ptr fs:[0]
// 0049fbbd  50                   push eax
// 0049fbbe  64892500000000       mov dword ptr fs:[0], esp
// 0049fbc5  51                   push ecx
// 0049fbc6  56                   push esi
// 0049fbc7  8bf1                 mov esi, ecx
// 0049fbc9  89742404             mov dword ptr [esp + 4], esi
// 0049fbcd  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0049fbd0  c744241003000000     mov dword ptr [esp + 0x10], 3
// 0049fbd8  85c9                 test ecx, ecx
// 0049fbda  7408                 je 0x49fbe4
// 0049fbdc  8b01                 mov eax, dword ptr [ecx]
// 0049fbde  8b10                 mov edx, dword ptr [eax]
// 0049fbe0  6a01                 push 1
// 0049fbe2  ffd2                 call edx
// 0049fbe4  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0049fbe7  c644241002           mov byte ptr [esp + 0x10], 2
// 0049fbec  85c9                 test ecx, ecx
// 0049fbee  7408                 je 0x49fbf8
// 0049fbf0  8b01                 mov eax, dword ptr [ecx]
// 0049fbf2  8b10                 mov edx, dword ptr [eax]
// 0049fbf4  6a01                 push 1
// 0049fbf6  ffd2                 call edx
// 0049fbf8  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0049fbfb  c644241001           mov byte ptr [esp + 0x10], 1
// 0049fc00  85c9                 test ecx, ecx
// 0049fc02  7408                 je 0x49fc0c
// 0049fc04  8b01                 mov eax, dword ptr [ecx]
// 0049fc06  8b10                 mov edx, dword ptr [eax]
// 0049fc08  6a01                 push 1
// 0049fc0a  ffd2                 call edx
// 0049fc0c  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0049fc0f  c644241000           mov byte ptr [esp + 0x10], 0
// 0049fc14  85c9                 test ecx, ecx
// 0049fc16  7408                 je 0x49fc20
// 0049fc18  8b01                 mov eax, dword ptr [ecx]
// 0049fc1a  8b10                 mov edx, dword ptr [eax]
// 0049fc1c  6a01                 push 1
// 0049fc1e  ffd2                 call edx
// 0049fc20  8d4e18               lea ecx, [esi + 0x18]
// 0049fc23  c744241004000000     mov dword ptr [esp + 0x10], 4
// 0049fc2b  e8b09df7ff           call 0x4199e0
// 0049fc30  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049fc34  c70630b78000         mov dword ptr [esi], 0x80b730
// 0049fc3a  5e                   pop esi
// 0049fc3b  64890d00000000       mov dword ptr fs:[0], ecx
// 0049fc42  83c410               add esp, 0x10
// 0049fc45  c3                   ret 

struct Object {
    virtual ~Object();
};

struct Owner {
    unsigned long reserved;
    Object* pointer;
    ~Owner();
};

inline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

struct Base {
    virtual ~Base();
    unsigned char reserved[20];
};

inline Base::~Base()
{
}

struct Member {
    unsigned char reserved[40];
    ~Member();
};

struct __declspec(novtable) Middle : Base {
    Member member;
    ~Middle();
};

inline Middle::~Middle()
{
}

struct __declspec(novtable) S : Middle {
    Owner first;
    Owner second;
    Owner third;
    Owner fourth;
    ~S();
};

S::~S()
{
}
