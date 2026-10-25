// from server: 100% by tester
// roc 2008-06 005c7090  unit: RBX::VModelSetFrontTool::?$TToolVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7090
//
// 005c7090  6aff                 push -1
// 005c7092  683bf47b00           push 0x7bf43b
// 005c7097  64a100000000         mov eax, dword ptr fs:[0]
// 005c709d  50                   push eax
// 005c709e  64892500000000       mov dword ptr fs:[0], esp
// 005c70a5  51                   push ecx
// 005c70a6  56                   push esi
// 005c70a7  57                   push edi
// 005c70a8  6a48                 push 0x48
// 005c70aa  8bf9                 mov edi, ecx
// 005c70ac  e86f980d00           call 0x6a0920
// 005c70b1  8bf0                 mov esi, eax
// 005c70b3  83c404               add esp, 4
// 005c70b6  89742408             mov dword ptr [esp + 8], esi
// 005c70ba  33c0                 xor eax, eax
// 005c70bc  89442414             mov dword ptr [esp + 0x14], eax
// 005c70c0  3bf0                 cmp esi, eax
// 005c70c2  7420                 je 0x5c70e4
// 005c70c4  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c70c7  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c70cd  51                   push ecx
// 005c70ce  8bce                 mov ecx, esi
// 005c70d0  e80b2d0500           call 0x619de0
// 005c70d5  c70674968300         mov dword ptr [esi], 0x839674
// 005c70db  c7460458968300       mov dword ptr [esi + 4], 0x839658
// 005c70e2  8bc6                 mov eax, esi
// 005c70e4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c70e8  5f                   pop edi
// 005c70e9  5e                   pop esi
// 005c70ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005c70f1  83c410               add esp, 0x10
// 005c70f4  c3                   ret 

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
