// from server: 100% by tester
// roc 2008-06 005c6cf0  unit: RBX::VHingeTool::?$TToolVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6cf0
//
// 005c6cf0  6aff                 push -1
// 005c6cf2  683bf47b00           push 0x7bf43b
// 005c6cf7  64a100000000         mov eax, dword ptr fs:[0]
// 005c6cfd  50                   push eax
// 005c6cfe  64892500000000       mov dword ptr fs:[0], esp
// 005c6d05  51                   push ecx
// 005c6d06  56                   push esi
// 005c6d07  57                   push edi
// 005c6d08  6a48                 push 0x48
// 005c6d0a  8bf9                 mov edi, ecx
// 005c6d0c  e80f9c0d00           call 0x6a0920
// 005c6d11  8bf0                 mov esi, eax
// 005c6d13  83c404               add esp, 4
// 005c6d16  89742408             mov dword ptr [esp + 8], esi
// 005c6d1a  33c0                 xor eax, eax
// 005c6d1c  89442414             mov dword ptr [esp + 0x14], eax
// 005c6d20  3bf0                 cmp esi, eax
// 005c6d22  7420                 je 0x5c6d44
// 005c6d24  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c6d27  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c6d2d  51                   push ecx
// 005c6d2e  8bce                 mov ecx, esi
// 005c6d30  e8ab300500           call 0x619de0
// 005c6d35  c70664948300         mov dword ptr [esi], 0x839464
// 005c6d3b  c746044c948300       mov dword ptr [esi + 4], 0x83944c
// 005c6d42  8bc6                 mov eax, esi
// 005c6d44  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c6d48  5f                   pop edi
// 005c6d49  5e                   pop esi
// 005c6d4a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c6d51  83c410               add esp, 0x10
// 005c6d54  c3                   ret 

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
