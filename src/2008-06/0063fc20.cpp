// from server: 100% by tester
// roc 2008-06 0063fc20  unit: RBX::GrabTool  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063fc20
//
// 0063fc20  6aff                 push -1
// 0063fc22  683bf47b00           push 0x7bf43b
// 0063fc27  64a100000000         mov eax, dword ptr fs:[0]
// 0063fc2d  50                   push eax
// 0063fc2e  64892500000000       mov dword ptr fs:[0], esp
// 0063fc35  51                   push ecx
// 0063fc36  56                   push esi
// 0063fc37  6a38                 push 0x38
// 0063fc39  8bf1                 mov esi, ecx
// 0063fc3b  e8e00c0600           call 0x6a0920
// 0063fc40  83c404               add esp, 4
// 0063fc43  89442404             mov dword ptr [esp + 4], eax
// 0063fc47  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063fc4f  85c0                 test eax, eax
// 0063fc51  741b                 je 0x63fc6e
// 0063fc53  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0063fc56  51                   push ecx
// 0063fc57  8bc8                 mov ecx, eax
// 0063fc59  e842ffffff           call 0x63fba0
// 0063fc5e  5e                   pop esi
// 0063fc5f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0063fc63  64890d00000000       mov dword ptr fs:[0], ecx
// 0063fc6a  83c410               add esp, 0x10
// 0063fc6d  c3                   ret 
// 0063fc6e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063fc72  33c0                 xor eax, eax
// 0063fc74  5e                   pop esi
// 0063fc75  64890d00000000       mov dword ptr fs:[0], ecx
// 0063fc7c  83c410               add esp, 0x10
// 0063fc7f  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Context;

struct Tool {
    char storage[56];
    Tool(Context* context);
};

struct Verb {
    char padding[24];
    Context* context;
    Tool* create();
};

Tool* Verb::create()
{
    return new Tool(context);
}
