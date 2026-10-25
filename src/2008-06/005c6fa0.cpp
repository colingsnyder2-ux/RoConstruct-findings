// from server: 100% by tester
// roc 2008-06 005c6fa0  unit: RBX::VOscillateMotorTool::?$TToolVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6fa0
//
// 005c6fa0  6aff                 push -1
// 005c6fa2  683bf47b00           push 0x7bf43b
// 005c6fa7  64a100000000         mov eax, dword ptr fs:[0]
// 005c6fad  50                   push eax
// 005c6fae  64892500000000       mov dword ptr fs:[0], esp
// 005c6fb5  51                   push ecx
// 005c6fb6  56                   push esi
// 005c6fb7  57                   push edi
// 005c6fb8  6a48                 push 0x48
// 005c6fba  8bf9                 mov edi, ecx
// 005c6fbc  e85f990d00           call 0x6a0920
// 005c6fc1  8bf0                 mov esi, eax
// 005c6fc3  83c404               add esp, 4
// 005c6fc6  89742408             mov dword ptr [esp + 8], esi
// 005c6fca  33c0                 xor eax, eax
// 005c6fcc  89442414             mov dword ptr [esp + 0x14], eax
// 005c6fd0  3bf0                 cmp esi, eax
// 005c6fd2  7420                 je 0x5c6ff4
// 005c6fd4  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c6fd7  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c6fdd  51                   push ecx
// 005c6fde  8bce                 mov ecx, esi
// 005c6fe0  e8fb2d0500           call 0x619de0
// 005c6fe5  c706f4958300         mov dword ptr [esi], 0x8395f4
// 005c6feb  c74604d8958300       mov dword ptr [esi + 4], 0x8395d8
// 005c6ff2  8bc6                 mov eax, esi
// 005c6ff4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c6ff8  5f                   pop edi
// 005c6ff9  5e                   pop esi
// 005c6ffa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7001  83c410               add esp, 0x10
// 005c7004  c3                   ret 

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
