// from server: 100% by king_originala
// roc 2008-06 005c7c40  unit: RBX::VRocketTool::?$TToolVerb  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7c40
//
// 005c7c40  6aff                 push -1
// 005c7c42  683bf47b00           push 0x7bf43b
// 005c7c47  64a100000000         mov eax, dword ptr fs:[0]
// 005c7c4d  50                   push eax
// 005c7c4e  64892500000000       mov dword ptr fs:[0], esp
// 005c7c55  51                   push ecx
// 005c7c56  56                   push esi
// 005c7c57  57                   push edi
// 005c7c58  6a30                 push 0x30
// 005c7c5a  8bf9                 mov edi, ecx
// 005c7c5c  e8bf8c0d00           call 0x6a0920
// 005c7c61  8bf0                 mov esi, eax
// 005c7c63  83c404               add esp, 4
// 005c7c66  89742408             mov dword ptr [esp + 8], esi
// 005c7c6a  33c0                 xor eax, eax
// 005c7c6c  89442414             mov dword ptr [esp + 0x14], eax
// 005c7c70  3bf0                 cmp esi, eax
// 005c7c72  7423                 je 0x5c7c97
// 005c7c74  6a5a                 push 0x5a
// 005c7c76  50                   push eax
// 005c7c77  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c7c7a  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c7c80  51                   push ecx
// 005c7c81  8bce                 mov ecx, esi
// 005c7c83  e8c86b0700           call 0x63e850
// 005c7c88  c706ec9a8300         mov dword ptr [esi], 0x839aec
// 005c7c8e  c74604d09a8300       mov dword ptr [esi + 4], 0x839ad0
// 005c7c95  8bc6                 mov eax, esi
// 005c7c97  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c7c9b  5f                   pop edi
// 005c7c9c  5e                   pop esi
// 005c7c9d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7ca4  83c410               add esp, 0x10
// 005c7ca7  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern void* table1[];
extern void* table2[];

struct Context {
    char pad[0x204];
    void* value;
};

struct Product {
    void* vtable1;
    void* vtable2;
    char pad[0x28];
    Product(void*, int, int);
};

struct Derived : Product {
    Derived(void*);
};

inline Derived::Derived(void* value) : Product(value, 0, 90)
{
    vtable1 = table1;
    vtable2 = table2;
}

struct Tool {
    char pad[0x0c];
    Context* context;
    Product* create();
};

Product* Tool::create()
{
    return new Derived(context->value);
}
