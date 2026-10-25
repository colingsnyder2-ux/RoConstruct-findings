// from server: 100% by colin
// roc 2008-06 005c6510  unit: RBX::VAxisMoveTool::?$TToolVerb  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6510
//
// 005c6510  6aff                 push -1
// 005c6512  683bf47b00           push 0x7bf43b
// 005c6517  64a100000000         mov eax, dword ptr fs:[0]
// 005c651d  50                   push eax
// 005c651e  64892500000000       mov dword ptr fs:[0], esp
// 005c6525  51                   push ecx
// 005c6526  56                   push esi
// 005c6527  6a74                 push 0x74
// 005c6529  8bf1                 mov esi, ecx
// 005c652b  e8f0a30d00           call 0x6a0920
// 005c6530  83c404               add esp, 4
// 005c6533  89442404             mov dword ptr [esp + 4], eax
// 005c6537  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c653f  85c0                 test eax, eax
// 005c6541  7421                 je 0x5c6564
// 005c6543  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005c6546  8b8904020000         mov ecx, dword ptr [ecx + 0x204]
// 005c654c  51                   push ecx
// 005c654d  8bc8                 mov ecx, eax
// 005c654f  e80ca00700           call 0x640560
// 005c6554  5e                   pop esi
// 005c6555  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c6559  64890d00000000       mov dword ptr fs:[0], ecx
// 005c6560  83c410               add esp, 0x10
// 005c6563  c3                   ret 
// 005c6564  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c6568  33c0                 xor eax, eax
// 005c656a  5e                   pop esi
// 005c656b  64890d00000000       mov dword ptr fs:[0], ecx
// 005c6572  83c410               add esp, 0x10
// 005c6575  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Context {
    char pad[0x204];
    void* value;
    __forceinline void* get();
};

__forceinline void* Context::get() {
    return value;
}

struct Tool {
    char storage[0x74];
    Tool(void*);
};

struct Verb {
    char pad[0x0c];
    Context* context;
    Tool* create();
};

Tool* Verb::create() {
    return new Tool(context->get());
}
