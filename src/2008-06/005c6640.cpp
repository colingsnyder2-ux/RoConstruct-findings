// from server: 100% by king_originala
// roc 2008-06 005c6640  unit: RBX::VFlatTool::?$TToolVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6640
//
// 005c6640  6aff                 push -1
// 005c6642  683bf47b00           push 0x7bf43b
// 005c6647  64a100000000         mov eax, dword ptr fs:[0]
// 005c664d  50                   push eax
// 005c664e  64892500000000       mov dword ptr fs:[0], esp
// 005c6655  51                   push ecx
// 005c6656  56                   push esi
// 005c6657  57                   push edi
// 005c6658  6a48                 push 0x48
// 005c665a  8bf9                 mov edi, ecx
// 005c665c  e8bfa20d00           call 0x6a0920
// 005c6661  8bf0                 mov esi, eax
// 005c6663  83c404               add esp, 4
// 005c6666  89742408             mov dword ptr [esp + 8], esi
// 005c666a  33c0                 xor eax, eax
// 005c666c  89442414             mov dword ptr [esp + 0x14], eax
// 005c6670  3bf0                 cmp esi, eax
// 005c6672  7420                 je 0x5c6694
// 005c6674  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c6677  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c667d  51                   push ecx
// 005c667e  8bce                 mov ecx, esi
// 005c6680  e85b370500           call 0x619de0
// 005c6685  c706bc918300         mov dword ptr [esi], 0x8391bc
// 005c668b  c74604a0918300       mov dword ptr [esi + 4], 0x8391a0
// 005c6692  8bc6                 mov eax, esi
// 005c6694  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c6698  5f                   pop edi
// 005c6699  5e                   pop esi
// 005c669a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c66a1  83c410               add esp, 0x10
// 005c66a4  c3                   ret 

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
