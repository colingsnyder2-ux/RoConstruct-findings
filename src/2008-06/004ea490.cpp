// from server: 78% by colin
// from server: 75% by king_originala
// roc 2008-06 004ea490  unit: RBX::ViewNew::Part  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ea490
//
// 004ea490  6aff                 push -1
// 004ea492  686ea87c00           push 0x7ca86e
// 004ea497  64a100000000         mov eax, dword ptr fs:[0]
// 004ea49d  50                   push eax
// 004ea49e  64892500000000       mov dword ptr fs:[0], esp
// 004ea4a5  51                   push ecx
// 004ea4a6  53                   push ebx
// 004ea4a7  56                   push esi
// 004ea4a8  8bf1                 mov esi, ecx
// 004ea4aa  c70600000000         mov dword ptr [esi], 0
// 004ea4b0  89742408             mov dword ptr [esp + 8], esi
// 004ea4b4  c7460400000000       mov dword ptr [esi + 4], 0
// 004ea4bb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004ea4bf  8b1a                 mov ebx, dword ptr [edx]
// 004ea4c1  6a00                 push 0
// 004ea4c3  83ec10               sub esp, 0x10
// 004ea4c6  8bc4                 mov eax, esp
// 004ea4c8  8918                 mov dword ptr [eax], ebx
// 004ea4ca  8b5a04               mov ebx, dword ptr [edx + 4]
// 004ea4cd  895804               mov dword ptr [eax + 4], ebx
// 004ea4d0  8b5a08               mov ebx, dword ptr [edx + 8]
// 004ea4d3  8b520c               mov edx, dword ptr [edx + 0xc]
// 004ea4d6  895808               mov dword ptr [eax + 8], ebx
// 004ea4d9  8d4e08               lea ecx, [esi + 8]
// 004ea4dc  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004ea4e4  89500c               mov dword ptr [eax + 0xc], edx
// 004ea4e7  e8b4faffff           call 0x4e9fa0
// 004ea4ec  b301                 mov bl, 1
// 004ea4ee  6a28                 push 0x28
// 004ea4f0  885c2418             mov byte ptr [esp + 0x18], bl
// 004ea4f4  e827641b00           call 0x6a0920
// 004ea4f9  83c404               add esp, 4
// 004ea4fc  8944241c             mov dword ptr [esp + 0x1c], eax
// 004ea500  c644241402           mov byte ptr [esp + 0x14], 2
// 004ea505  85c0                 test eax, eax
// 004ea507  7409                 je 0x4ea512
// 004ea509  8bc8                 mov ecx, eax
// 004ea50b  e83008f3ff           call 0x41ad40
// 004ea510  eb02                 jmp 0x4ea514
// 004ea512  33c0                 xor eax, eax
// 004ea514  50                   push eax
// 004ea515  8bce                 mov ecx, esi
// 004ea517  885c2418             mov byte ptr [esp + 0x18], bl
// 004ea51b  e8d00bf3ff           call 0x41b0f0
// 004ea520  8bce                 mov ecx, esi
// 004ea522  e819b30a00           call 0x595840
// 004ea527  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ea52b  8bc6                 mov eax, esi
// 004ea52d  5e                   pop esi
// 004ea52e  64890d00000000       mov dword ptr fs:[0], ecx
// 004ea535  5b                   pop ebx
// 004ea536  83c410               add esp, 0x10
// 004ea539  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Payload {
    int a, b, c, d;
};

struct Embedded {
    int* state;
    int reserved;
    Payload payload;

    Embedded(Payload, int);
    ~Embedded();
};

struct Object {
    char storage[40];
    Object();
};

struct __declspec(dllimport) Control {
    void* pointer;

    Control();
    ~Control();
};

struct Owner {
    Object* object;
    Control control;

    Owner();
    ~Owner();
    void set(Object*);
};

inline Owner::Owner() : object(0), control()
{
}

struct Part {
    Owner owner;
    Embedded embedded;

    Part(const Payload&);
    void finish();
};

Part::Part(const Payload& value)
    : owner(), embedded(value, 0)
{
    owner.set(new Object);
    finish();
}
