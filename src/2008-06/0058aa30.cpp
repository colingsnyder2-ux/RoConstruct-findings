// from server: 74% by colin
// from server: 73% by king_originala
// roc 2008-06 0058aa30  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058aa30
//
// 0058aa30  6aff                 push -1
// 0058aa32  686ea87c00           push 0x7ca86e
// 0058aa37  64a100000000         mov eax, dword ptr fs:[0]
// 0058aa3d  50                   push eax
// 0058aa3e  64892500000000       mov dword ptr fs:[0], esp
// 0058aa45  51                   push ecx
// 0058aa46  53                   push ebx
// 0058aa47  56                   push esi
// 0058aa48  8bf1                 mov esi, ecx
// 0058aa4a  c70600000000         mov dword ptr [esi], 0
// 0058aa50  89742408             mov dword ptr [esp + 8], esi
// 0058aa54  c7460400000000       mov dword ptr [esi + 4], 0
// 0058aa5b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0058aa5f  8b1a                 mov ebx, dword ptr [edx]
// 0058aa61  6a00                 push 0
// 0058aa63  83ec10               sub esp, 0x10
// 0058aa66  8bc4                 mov eax, esp
// 0058aa68  8918                 mov dword ptr [eax], ebx
// 0058aa6a  8b5a04               mov ebx, dword ptr [edx + 4]
// 0058aa6d  895804               mov dword ptr [eax + 4], ebx
// 0058aa70  8b5a08               mov ebx, dword ptr [edx + 8]
// 0058aa73  8b520c               mov edx, dword ptr [edx + 0xc]
// 0058aa76  895808               mov dword ptr [eax + 8], ebx
// 0058aa79  8d4e08               lea ecx, [esi + 8]
// 0058aa7c  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0058aa84  89500c               mov dword ptr [eax + 0xc], edx
// 0058aa87  e874e4ffff           call 0x588f00
// 0058aa8c  b301                 mov bl, 1
// 0058aa8e  6a28                 push 0x28
// 0058aa90  885c2418             mov byte ptr [esp + 0x18], bl
// 0058aa94  e8875e1100           call 0x6a0920
// 0058aa99  83c404               add esp, 4
// 0058aa9c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0058aaa0  c644241402           mov byte ptr [esp + 0x14], 2
// 0058aaa5  85c0                 test eax, eax
// 0058aaa7  7409                 je 0x58aab2
// 0058aaa9  8bc8                 mov ecx, eax
// 0058aaab  e89002e9ff           call 0x41ad40
// 0058aab0  eb02                 jmp 0x58aab4
// 0058aab2  33c0                 xor eax, eax
// 0058aab4  50                   push eax
// 0058aab5  8bce                 mov ecx, esi
// 0058aab7  885c2418             mov byte ptr [esp + 0x18], bl
// 0058aabb  e83006e9ff           call 0x41b0f0
// 0058aac0  8bce                 mov ecx, esi
// 0058aac2  e879ad0000           call 0x595840
// 0058aac7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058aacb  8bc6                 mov eax, esi
// 0058aacd  5e                   pop esi
// 0058aace  64890d00000000       mov dword ptr fs:[0], ecx
// 0058aad5  5b                   pop ebx
// 0058aad6  83c410               add esp, 0x10
// 0058aad9  c20400               ret 4

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Value {
    unsigned int words[4];
};

struct Object {
    unsigned char storage[40];
    Object();
};

struct __declspec(dllimport) Owner {
    void* object;
    void* control;

    Owner();
    ~Owner();
    void reset(Object*);
};

inline Owner::Owner() : object(0), control(0)
{
}

struct Product {
    Product(Value, unsigned int);
    ~Product();
};

struct Service : Owner {
    Product product;

    Service(const Value&);
    void initialize();
};

Service::Service(const Value& value)
    : product(value, 0)
{
    reset(new Object);
    initialize();
}
