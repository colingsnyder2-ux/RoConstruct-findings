// from server: 100% by king_originala
// roc 2008-06 005c7de0  unit: RBX::VLaserTool::?$TToolVerb  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7de0
//
// 005c7de0  6aff                 push -1
// 005c7de2  683bf47b00           push 0x7bf43b
// 005c7de7  64a100000000         mov eax, dword ptr fs:[0]
// 005c7ded  50                   push eax
// 005c7dee  64892500000000       mov dword ptr fs:[0], esp
// 005c7df5  51                   push ecx
// 005c7df6  56                   push esi
// 005c7df7  57                   push edi
// 005c7df8  6a38                 push 0x38
// 005c7dfa  8bf9                 mov edi, ecx
// 005c7dfc  e81f8b0d00           call 0x6a0920
// 005c7e01  8bf0                 mov esi, eax
// 005c7e03  83c404               add esp, 4
// 005c7e06  89742408             mov dword ptr [esp + 8], esi
// 005c7e0a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c7e12  85f6                 test esi, esi
// 005c7e14  744c                 je 0x5c7e62
// 005c7e16  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c7e19  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c7e1f  51                   push ecx
// 005c7e20  8bce                 mov ecx, esi
// 005c7e22  e8c9db0400           call 0x6159f0
// 005c7e27  d9ee                 fldz 
// 005c7e29  c706749b8300         mov dword ptr [esi], 0x839b74
// 005c7e2f  c74604589b8300       mov dword ptr [esi + 4], 0x839b58
// 005c7e36  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 005c7e3d  d95620               fst dword ptr [esi + 0x20]
// 005c7e40  d95624               fst dword ptr [esi + 0x24]
// 005c7e43  5f                   pop edi
// 005c7e44  d95628               fst dword ptr [esi + 0x28]
// 005c7e47  8bc6                 mov eax, esi
// 005c7e49  d9562c               fst dword ptr [esi + 0x2c]
// 005c7e4c  d95630               fst dword ptr [esi + 0x30]
// 005c7e4f  d95e34               fstp dword ptr [esi + 0x34]
// 005c7e52  5e                   pop esi
// 005c7e53  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c7e57  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7e5e  83c410               add esp, 0x10
// 005c7e61  c3                   ret 
// 005c7e62  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c7e66  5f                   pop edi
// 005c7e67  33c0                 xor eax, eax
// 005c7e69  5e                   pop esi
// 005c7e6a  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7e71  83c410               add esp, 0x10
// 005c7e74  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern unsigned int table0[];
extern unsigned int table1[];

struct Base {
    int f(int a1);
    char data[0x1c];
};

struct Tool : Base {
    int value;
    float x0, x1, x2, x3, x4, x5;
    Tool(int a1);
};

__forceinline Tool::Tool(int a1)
{
    f(a1);
    *(unsigned int* volatile*)((char*)this + 0) = table0;
    *(unsigned int* volatile*)((char*)this + 4) = table1;
    *(volatile int*)((char*)this + 0x1c) = 0;
    *(volatile float*)((char*)this + 0x20) = 0.0f;
    *(volatile float*)((char*)this + 0x24) = 0.0f;
    *(volatile float*)((char*)this + 0x28) = 0.0f;
    *(volatile float*)((char*)this + 0x2c) = 0.0f;
    *(volatile float*)((char*)this + 0x30) = 0.0f;
    *(volatile float*)((char*)this + 0x34) = 0.0f;
}

struct Context {
    char pad[0x204];
    int argument;
};

struct S {
    char pad[0xc];
    Context* context;
    Tool* f();
};

Tool* S::f()
{
    return new Tool(context->argument);
}
