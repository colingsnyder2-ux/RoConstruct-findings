// from server: 82% by colin
// from server: 81% by colin
// roc 2008-06 00500b90  unit: RBX::ViewNew::HeadBuilder  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500b90
//
// 00500b90  6aff                 push -1
// 00500b92  6864b27c00           push 0x7cb264
// 00500b97  64a100000000         mov eax, dword ptr fs:[0]
// 00500b9d  50                   push eax
// 00500b9e  64892500000000       mov dword ptr fs:[0], esp
// 00500ba5  83ec0c               sub esp, 0xc
// 00500ba8  53                   push ebx
// 00500ba9  55                   push ebp
// 00500baa  56                   push esi
// 00500bab  33f6                 xor esi, esi
// 00500bad  57                   push edi
// 00500bae  89742410             mov dword ptr [esp + 0x10], esi
// 00500bb2  bb01000000           mov ebx, 1
// 00500bb7  6888000000           push 0x88
// 00500bbc  895c2428             mov dword ptr [esp + 0x28], ebx
// 00500bc0  e85bfd1900           call 0x6a0920
// 00500bc5  8bf8                 mov edi, eax
// 00500bc7  83c404               add esp, 4
// 00500bca  897c2414             mov dword ptr [esp + 0x14], edi
// 00500bce  c644242402           mov byte ptr [esp + 0x24], 2
// 00500bd3  3bfe                 cmp edi, esi
// 00500bd5  740f                 je 0x500be6
// 00500bd7  8bcf                 mov ecx, edi
// 00500bd9  e892790400           call 0x548570
// 00500bde  c707cc718200         mov dword ptr [edi], 0x8271cc
// 00500be4  eb02                 jmp 0x500be8
// 00500be6  33ff                 xor edi, edi
// 00500be8  89742414             mov dword ptr [esp + 0x14], esi
// 00500bec  3bfe                 cmp edi, esi
// 00500bee  7410                 je 0x500c00
// 00500bf0  8d4704               lea eax, [edi + 4]
// 00500bf3  8bf7                 mov esi, edi
// 00500bf5  50                   push eax
// 00500bf6  89742418             mov dword ptr [esp + 0x18], esi
// 00500bfa  ff15b0218000         call dword ptr [0x8021b0]
// 00500c00  83ec20               sub esp, 0x20
// 00500c03  8bec                 mov ebp, esp
// 00500c05  8d442458             lea eax, [esp + 0x58]
// 00500c09  89642438             mov dword ptr [esp + 0x38], esp
// 00500c0d  50                   push eax
// 00500c0e  8bcd                 mov ecx, ebp
// 00500c10  c644244803           mov byte ptr [esp + 0x48], 3
// 00500c15  ff155c248000         call dword ptr [0x80245c]
// 00500c1b  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00500c1f  8b542454             mov edx, dword ptr [esp + 0x54]
// 00500c23  8b442450             mov eax, dword ptr [esp + 0x50]
// 00500c27  52                   push edx
// 00500c28  894d1c               mov dword ptr [ebp + 0x1c], ecx
// 00500c2b  50                   push eax
// 00500c2c  8bcf                 mov ecx, edi
// 00500c2e  e84dfbffff           call 0x500780
// 00500c33  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00500c37  c70700000000         mov dword ptr [edi], 0
// 00500c3d  84c0                 test al, al
// 00500c3f  7502                 jne 0x500c43
// 00500c41  eb08                 jmp 0x500c4b
// 00500c43  56                   push esi
// 00500c44  8bcf                 mov ecx, edi
// 00500c46  e855830900           call 0x598fa0
// 00500c4b  885c2424             mov byte ptr [esp + 0x24], bl
// 00500c4f  895c2410             mov dword ptr [esp + 0x10], ebx
// 00500c53  85f6                 test esi, esi
// 00500c55  741e                 je 0x500c75
// 00500c57  8d4604               lea eax, [esi + 4]
// 00500c5a  50                   push eax
// 00500c5b  ff15ac218000         call dword ptr [0x8021ac]
// 00500c61  85c0                 test eax, eax
// 00500c63  7510                 jne 0x500c75
// 00500c65  8bce                 mov ecx, esi
// 00500c67  e824a1f5ff           call 0x45ad90
// 00500c6c  8b16                 mov edx, dword ptr [esi]
// 00500c6e  8b02                 mov eax, dword ptr [edx]
// 00500c70  53                   push ebx
// 00500c71  8bce                 mov ecx, esi
// 00500c73  ffd0                 call eax
// 00500c75  8d4c2438             lea ecx, [esp + 0x38]
// 00500c79  c644242400           mov byte ptr [esp + 0x24], 0
// 00500c7e  ff1568248000         call dword ptr [0x802468]
// 00500c84  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00500c88  8bc7                 mov eax, edi
// 00500c8a  5f                   pop edi
// 00500c8b  5e                   pop esi
// 00500c8c  5d                   pop ebp
// 00500c8d  64890d00000000       mov dword ptr fs:[0], ecx
// 00500c94  5b                   pop ebx
// 00500c95  83c418               add esp, 0x18
// 00500c98  c3                   ret 

typedef unsigned int size_t;

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
extern "C" long __stdcall InterlockedDecrement(volatile long*);

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct String;
extern void (__thiscall* string_copy)(String*, const String&);
extern void (__thiscall* string_destroy)(String*);

struct String
{
    char storage[28];
    String(const String&);
    ~String();
};

inline String::String(const String& source)
{
    string_copy(this, source);
}

inline String::~String()
{
    string_destroy(this);
}

struct Parameters
{
    String text;
    int option;
    Parameters(const String&, int);
};

inline Parameters::Parameters(const String& source, int value)
    : text(source), option(value)
{
}

struct Base
{
    volatile long references;
    char storage[128];

    Base();
    virtual ~Base();
    void dispose();
};

struct Head : Base
{
    virtual ~Head();
    bool initialize(int, int, Parameters);
};

struct Reference
{
    Head* pointer;

    Reference();
    explicit Reference(Head*);
    Reference(const Reference&);
    ~Reference();
    void assign(Head*);
};

inline Reference::Reference() : pointer(0)
{
}

inline Reference::Reference(Head* p) : pointer(0)
{
    if (p)
    {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

inline Reference::Reference(const Reference& source) : pointer(0)
{
    assign(source.pointer);
}

inline Reference::~Reference()
{
    if (pointer && InterlockedDecrement(&pointer->references) == 0)
    {
        pointer->dispose();
        delete pointer;
    }
}

Reference func_00500b90(int a, int b, String text, int option)
{
    Head* head = new Head;
    Reference owner(head);
    if (head->initialize(a, b, Parameters(text, option)))
    {
        return Reference(owner);
    }
    return Reference();
}
