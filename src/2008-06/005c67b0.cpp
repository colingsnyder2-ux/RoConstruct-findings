// from server: 100% by tester
// roc 2008-06 005c67b0  unit: RBX::VGlueTool::?$TToolVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c67b0
//
// 005c67b0  6aff                 push -1
// 005c67b2  683bf47b00           push 0x7bf43b
// 005c67b7  64a100000000         mov eax, dword ptr fs:[0]
// 005c67bd  50                   push eax
// 005c67be  64892500000000       mov dword ptr fs:[0], esp
// 005c67c5  51                   push ecx
// 005c67c6  56                   push esi
// 005c67c7  57                   push edi
// 005c67c8  6a48                 push 0x48
// 005c67ca  8bf9                 mov edi, ecx
// 005c67cc  e84fa10d00           call 0x6a0920
// 005c67d1  8bf0                 mov esi, eax
// 005c67d3  83c404               add esp, 4
// 005c67d6  89742408             mov dword ptr [esp + 8], esi
// 005c67da  33c0                 xor eax, eax
// 005c67dc  89442414             mov dword ptr [esp + 0x14], eax
// 005c67e0  3bf0                 cmp esi, eax
// 005c67e2  7420                 je 0x5c6804
// 005c67e4  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c67e7  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c67ed  51                   push ecx
// 005c67ee  8bce                 mov ecx, esi
// 005c67f0  e8eb350500           call 0x619de0
// 005c67f5  c70644928300         mov dword ptr [esi], 0x839244
// 005c67fb  c746042c928300       mov dword ptr [esi + 4], 0x83922c
// 005c6802  8bc6                 mov eax, esi
// 005c6804  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c6808  5f                   pop edi
// 005c6809  5e                   pop esi
// 005c680a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c6811  83c410               add esp, 0x10
// 005c6814  c3                   ret 

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
