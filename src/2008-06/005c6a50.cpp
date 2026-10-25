// from server: 100% by tester
// roc 2008-06 005c6a50  unit: RBX::VStudsTool::?$TToolVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6a50
//
// 005c6a50  6aff                 push -1
// 005c6a52  683bf47b00           push 0x7bf43b
// 005c6a57  64a100000000         mov eax, dword ptr fs:[0]
// 005c6a5d  50                   push eax
// 005c6a5e  64892500000000       mov dword ptr fs:[0], esp
// 005c6a65  51                   push ecx
// 005c6a66  56                   push esi
// 005c6a67  57                   push edi
// 005c6a68  6a48                 push 0x48
// 005c6a6a  8bf9                 mov edi, ecx
// 005c6a6c  e8af9e0d00           call 0x6a0920
// 005c6a71  8bf0                 mov esi, eax
// 005c6a73  83c404               add esp, 4
// 005c6a76  89742408             mov dword ptr [esp + 8], esi
// 005c6a7a  33c0                 xor eax, eax
// 005c6a7c  89442414             mov dword ptr [esp + 0x14], eax
// 005c6a80  3bf0                 cmp esi, eax
// 005c6a82  7420                 je 0x5c6aa4
// 005c6a84  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c6a87  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c6a8d  51                   push ecx
// 005c6a8e  8bce                 mov ecx, esi
// 005c6a90  e84b330500           call 0x619de0
// 005c6a95  c70654938300         mov dword ptr [esi], 0x839354
// 005c6a9b  c746043c938300       mov dword ptr [esi + 4], 0x83933c
// 005c6aa2  8bc6                 mov eax, esi
// 005c6aa4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c6aa8  5f                   pop edi
// 005c6aa9  5e                   pop esi
// 005c6aaa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c6ab1  83c410               add esp, 0x10
// 005c6ab4  c3                   ret 

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
