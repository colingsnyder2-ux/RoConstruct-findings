// from server: 100% by king_originala
// roc 2008-06 005c7150  unit: RBX::VModelSetPrimaryPartTool::?$TToolVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7150
//
// 005c7150  6aff                 push -1
// 005c7152  683bf47b00           push 0x7bf43b
// 005c7157  64a100000000         mov eax, dword ptr fs:[0]
// 005c715d  50                   push eax
// 005c715e  64892500000000       mov dword ptr fs:[0], esp
// 005c7165  51                   push ecx
// 005c7166  56                   push esi
// 005c7167  57                   push edi
// 005c7168  6a24                 push 0x24
// 005c716a  8bf9                 mov edi, ecx
// 005c716c  e8af970d00           call 0x6a0920
// 005c7171  8bf0                 mov esi, eax
// 005c7173  83c404               add esp, 4
// 005c7176  89742408             mov dword ptr [esp + 8], esi
// 005c717a  33c0                 xor eax, eax
// 005c717c  89442414             mov dword ptr [esp + 0x14], eax
// 005c7180  3bf0                 cmp esi, eax
// 005c7182  7420                 je 0x5c71a4
// 005c7184  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c7187  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c718d  51                   push ecx
// 005c718e  8bce                 mov ecx, esi
// 005c7190  e8fbf1feff           call 0x5b6390
// 005c7195  c70604978300         mov dword ptr [esi], 0x839704
// 005c719b  c74604e8968300       mov dword ptr [esi + 4], 0x8396e8
// 005c71a2  8bc6                 mov eax, esi
// 005c71a4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c71a8  5f                   pop edi
// 005c71a9  5e                   pop esi
// 005c71aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c71b1  83c410               add esp, 0x10
// 005c71b4  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern const void* table1[];
extern const void* table2[];

struct Product {
    const void** first;
    const void** second;
    char pad[0x1c];
    Product(void*);
};

struct DerivedProduct : Product {
    DerivedProduct(void*);
};

struct Context {
    char pad[0x204];
    void* value;
};

struct Tool {
    char pad[0xc];
    Context* context;
    Product* f();
};

__forceinline DerivedProduct::DerivedProduct(void* value)
    : Product(value)
{
    first = table1;
    second = table2;
}

Product* Tool::f()
{
    return new DerivedProduct(context->value);
}
