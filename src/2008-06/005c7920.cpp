// from server: 100% by colin
// roc 2008-06 005c7920  unit: RBX::VHammerTool::?$TToolVerb  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7920
//
// 005c7920  6aff                 push -1
// 005c7922  683bf47b00           push 0x7bf43b
// 005c7927  64a100000000         mov eax, dword ptr fs:[0]
// 005c792d  50                   push eax
// 005c792e  64892500000000       mov dword ptr fs:[0], esp
// 005c7935  51                   push ecx
// 005c7936  56                   push esi
// 005c7937  57                   push edi
// 005c7938  6a24                 push 0x24
// 005c793a  8bf9                 mov edi, ecx
// 005c793c  e8df8f0d00           call 0x6a0920
// 005c7941  8bf0                 mov esi, eax
// 005c7943  83c404               add esp, 4
// 005c7946  89742408             mov dword ptr [esp + 8], esi
// 005c794a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c7952  85f6                 test esi, esi
// 005c7954  743f                 je 0x5c7995
// 005c7956  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c7959  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c795f  51                   push ecx
// 005c7960  8bce                 mov ecx, esi
// 005c7962  e889e00400           call 0x6159f0
// 005c7967  c706ec998300         mov dword ptr [esi], 0x8399ec
// 005c796d  c74604d4998300       mov dword ptr [esi + 4], 0x8399d4
// 005c7974  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 005c797b  5f                   pop edi
// 005c797c  c7462000000000       mov dword ptr [esi + 0x20], 0
// 005c7983  8bc6                 mov eax, esi
// 005c7985  5e                   pop esi
// 005c7986  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c798a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7991  83c410               add esp, 0x10
// 005c7994  c3                   ret 
// 005c7995  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c7999  5f                   pop edi
// 005c799a  33c0                 xor eax, eax
// 005c799c  5e                   pop esi
// 005c799d  64890d00000000       mov dword ptr fs:[0], ecx
// 005c79a4  83c410               add esp, 0x10
// 005c79a7  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Base {
    char data[0x1c];
    int f(int);
};

struct Tool : Base {
    int value1;
    int value2;
    Tool(int);
};

__forceinline Tool::Tool(int arg)
{
    f(arg);
    volatile int* vp = (int*)((char*)this + 0);
    vp[0] = 0x8399ec;
    vp[1] = 0x8399d4;
    vp[7] = 0;
    vp[8] = 0;
}

struct Context {
    char padding[0x204];
    int value;
};

struct Verb {
    char padding[0xc];
    Context* context;
    Tool* f();
};

Tool* Verb::f()
{
    return new Tool(context->value);
}
