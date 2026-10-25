// from server: 100% by king_originala
// roc 2008-06 00499c00  unit: RBX::Network::VPlayers::?$SignalDesc  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00499c00
//
// 00499c00  6aff                 push -1
// 00499c02  68886f7c00           push 0x7c6f88
// 00499c07  64a100000000         mov eax, dword ptr fs:[0]
// 00499c0d  50                   push eax
// 00499c0e  64892500000000       mov dword ptr fs:[0], esp
// 00499c15  83ec2c               sub esp, 0x2c
// 00499c18  53                   push ebx
// 00499c19  56                   push esi
// 00499c1a  57                   push edi
// 00499c1b  8bf9                 mov edi, ecx
// 00499c1d  6a08                 push 8
// 00499c1f  897c2418             mov dword ptr [esp + 0x18], edi
// 00499c23  e8f86c2000           call 0x6a0920
// 00499c28  33db                 xor ebx, ebx
// 00499c2a  83c404               add esp, 4
// 00499c2d  3bc3                 cmp eax, ebx
// 00499c2f  7408                 je 0x499c39
// 00499c31  c70010ed8000         mov dword ptr [eax], 0x80ed10
// 00499c37  eb02                 jmp 0x499c3b
// 00499c39  33c0                 xor eax, eax
// 00499c3b  89442410             mov dword ptr [esp + 0x10], eax
// 00499c3f  8a44240c             mov al, byte ptr [esp + 0xc]
// 00499c43  8d4c240c             lea ecx, [esp + 0xc]
// 00499c47  51                   push ecx
// 00499c48  895c2444             mov dword ptr [esp + 0x44], ebx
// 00499c4c  88442410             mov byte ptr [esp + 0x10], al
// 00499c50  e89b061700           call 0x60a2f0
// 00499c55  83c404               add esp, 4
// 00499c58  84c0                 test al, al
// 00499c5a  7512                 jne 0x499c6e
// 00499c5c  8a54240c             mov dl, byte ptr [esp + 0xc]
// 00499c60  88542420             mov byte ptr [esp + 0x20], dl
// 00499c64  c74424181ced8000     mov dword ptr [esp + 0x18], 0x80ed1c
// 00499c6c  eb04                 jmp 0x499c72
// 00499c6e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00499c72  8d442410             lea eax, [esp + 0x10]
// 00499c76  50                   push eax
// 00499c77  8d4c241c             lea ecx, [esp + 0x1c]
// 00499c7b  51                   push ecx
// 00499c7c  8bcf                 mov ecx, edi
// 00499c7e  c644244801           mov byte ptr [esp + 0x48], 1
// 00499c83  e868170d00           call 0x56b3f0
// 00499c88  8b442418             mov eax, dword ptr [esp + 0x18]
// 00499c8c  c644244003           mov byte ptr [esp + 0x40], 3
// 00499c91  3bc3                 cmp eax, ebx
// 00499c93  7419                 je 0x499cae
// 00499c95  8b00                 mov eax, dword ptr [eax]
// 00499c97  3bc3                 cmp eax, ebx
// 00499c99  740f                 je 0x499caa
// 00499c9b  8d542420             lea edx, [esp + 0x20]
// 00499c9f  6a01                 push 1
// 00499ca1  52                   push edx
// 00499ca2  8bca                 mov ecx, edx
// 00499ca4  51                   push ecx
// 00499ca5  ffd0                 call eax
// 00499ca7  83c40c               add esp, 0xc
// 00499caa  895c2418             mov dword ptr [esp + 0x18], ebx
// 00499cae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00499cb2  c644244004           mov byte ptr [esp + 0x40], 4
// 00499cb7  3bcb                 cmp ecx, ebx
// 00499cb9  7408                 je 0x499cc3
// 00499cbb  8b11                 mov edx, dword ptr [ecx]
// 00499cbd  8b02                 mov eax, dword ptr [edx]
// 00499cbf  6a01                 push 1
// 00499cc1  ffd0                 call eax
// 00499cc3  8d7708               lea esi, [edi + 8]
// 00499cc6  8bce                 mov ecx, esi
// 00499cc8  e813ae0f00           call 0x594ae0
// 00499ccd  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00499cd1  885e1c               mov byte ptr [esi + 0x1c], bl
// 00499cd4  8bc7                 mov eax, edi
// 00499cd6  5f                   pop edi
// 00499cd7  5e                   pop esi
// 00499cd8  5b                   pop ebx
// 00499cd9  64890d00000000       mov dword ptr fs:[0], ecx
// 00499ce0  83c438               add esp, 0x38
// 00499ce3  c20800               ret 8

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Empty {
    char value;
    Empty();
};

__forceinline Empty::Empty() {}

bool __cdecl func_0060a2f0(const Empty&);

struct Object {
    virtual ~Object();
    unsigned int unused;
};

struct Owner {
    Object* pointer;
    Owner(Object*);
    ~Owner();
};

__forceinline Owner::Owner(Object* p) : pointer(p) {}

__forceinline Owner::~Owner()
{
    if (pointer)
        delete pointer;
}

typedef void (__cdecl *Manager)(void*, void*, int);
extern Manager function_manager;

struct Function {
    Manager* manager;
    unsigned int unused;
    union Storage {
        char empty;
        char bytes[24];
        Storage();
    } storage;

    Function(Empty);
    ~Function();
};

__forceinline Function::Storage::Storage() {}

__forceinline Function::Function(Empty value)
{
    if (!func_0060a2f0(value)) {
        storage.empty = value.value;
        manager = &function_manager;
    } else {
        manager = 0;
    }
}

__forceinline Function::~Function()
{
    if (manager) {
        Manager callback = *manager;
        if (callback)
            callback(&storage, &storage, 1);
        manager = 0;
    }
}

struct Base {
    unsigned int data[2];
    Base(const Function&, const Owner&);
    ~Base();
};

struct MemberBase {
    unsigned int data[7];
    MemberBase();
};

struct Member : MemberBase {
    unsigned char flag;
    unsigned char padding[3];
    Member();
};

__forceinline Member::Member() : MemberBase()
{
    flag = 0;
}

struct S : Base {
    Member member;
    S(int, int);
};

S::S(int, int)
    : Base(Function(Empty()), Owner(new Object)), member()
{
}
