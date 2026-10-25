// from server: 100% by tester
// roc 2008-06 005c6900  unit: RBX::VWeldTool::?$TToolVerb  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6900
//
// 005c6900  6aff                 push -1
// 005c6902  683bf47b00           push 0x7bf43b
// 005c6907  64a100000000         mov eax, dword ptr fs:[0]
// 005c690d  50                   push eax
// 005c690e  64892500000000       mov dword ptr fs:[0], esp
// 005c6915  51                   push ecx
// 005c6916  56                   push esi
// 005c6917  57                   push edi
// 005c6918  6a48                 push 0x48
// 005c691a  8bf9                 mov edi, ecx
// 005c691c  e8ff9f0d00           call 0x6a0920
// 005c6921  8bf0                 mov esi, eax
// 005c6923  83c404               add esp, 4
// 005c6926  89742408             mov dword ptr [esp + 8], esi
// 005c692a  33c0                 xor eax, eax
// 005c692c  89442414             mov dword ptr [esp + 0x14], eax
// 005c6930  3bf0                 cmp esi, eax
// 005c6932  7420                 je 0x5c6954
// 005c6934  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c6937  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c693d  51                   push ecx
// 005c693e  8bce                 mov ecx, esi
// 005c6940  e89b340500           call 0x619de0
// 005c6945  c706cc928300         mov dword ptr [esi], 0x8392cc
// 005c694b  c74604b4928300       mov dword ptr [esi + 4], 0x8392b4
// 005c6952  8bc6                 mov eax, esi
// 005c6954  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c6958  5f                   pop edi
// 005c6959  5e                   pop esi
// 005c695a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c6961  83c410               add esp, 0x10
// 005c6964  c3                   ret 

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
