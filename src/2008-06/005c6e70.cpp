// from server: 100% by tester
// roc 2008-06 005c6e70  unit: RBX::VLeftMotorTool::?$TToolVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6e70
//
// 005c6e70  6aff                 push -1
// 005c6e72  683bf47b00           push 0x7bf43b
// 005c6e77  64a100000000         mov eax, dword ptr fs:[0]
// 005c6e7d  50                   push eax
// 005c6e7e  64892500000000       mov dword ptr fs:[0], esp
// 005c6e85  51                   push ecx
// 005c6e86  56                   push esi
// 005c6e87  57                   push edi
// 005c6e88  6a48                 push 0x48
// 005c6e8a  8bf9                 mov edi, ecx
// 005c6e8c  e88f9a0d00           call 0x6a0920
// 005c6e91  8bf0                 mov esi, eax
// 005c6e93  83c404               add esp, 4
// 005c6e96  89742408             mov dword ptr [esp + 8], esi
// 005c6e9a  33c0                 xor eax, eax
// 005c6e9c  89442414             mov dword ptr [esp + 0x14], eax
// 005c6ea0  3bf0                 cmp esi, eax
// 005c6ea2  7420                 je 0x5c6ec4
// 005c6ea4  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c6ea7  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c6ead  51                   push ecx
// 005c6eae  8bce                 mov ecx, esi
// 005c6eb0  e82b2f0500           call 0x619de0
// 005c6eb5  c70674958300         mov dword ptr [esi], 0x839574
// 005c6ebb  c746045c958300       mov dword ptr [esi + 4], 0x83955c
// 005c6ec2  8bc6                 mov eax, esi
// 005c6ec4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c6ec8  5f                   pop edi
// 005c6ec9  5e                   pop esi
// 005c6eca  64890d00000000       mov dword ptr fs:[0], ecx
// 005c6ed1  83c410               add esp, 0x10
// 005c6ed4  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern void* table1[];
extern void* table2[];

struct Cursor {
    void* primary;
    void* secondary;
    char storage[0x40];
    Cursor(void*);
};

struct FlatCursor : Cursor {
    FlatCursor(void*);
};

inline FlatCursor::FlatCursor(void* value) : Cursor(value)
{
    primary = table1;
    secondary = table2;
}

struct Context {
    char pad[0x204];
    void* value;
};

struct Tool {
    char pad[0x0c];
    Context* context;
    Cursor* f();
};

Cursor* Tool::f()
{
    return new FlatCursor(context->value);
}
