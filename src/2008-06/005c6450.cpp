// from server: 100% by king_originala
// roc 2008-06 005c6450  unit: RBX::VResizeTool::?$TToolVerb  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6450
//
// 005c6450  6aff                 push -1
// 005c6452  683bf47b00           push 0x7bf43b
// 005c6457  64a100000000         mov eax, dword ptr fs:[0]
// 005c645d  50                   push eax
// 005c645e  64892500000000       mov dword ptr fs:[0], esp
// 005c6465  51                   push ecx
// 005c6466  56                   push esi
// 005c6467  6a48                 push 0x48
// 005c6469  8bf1                 mov esi, ecx
// 005c646b  e8b0a40d00           call 0x6a0920
// 005c6470  83c404               add esp, 4
// 005c6473  89442404             mov dword ptr [esp + 4], eax
// 005c6477  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c647f  85c0                 test eax, eax
// 005c6481  7421                 je 0x5c64a4
// 005c6483  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005c6486  8b8904020000         mov ecx, dword ptr [ecx + 0x204]
// 005c648c  51                   push ecx
// 005c648d  8bc8                 mov ecx, eax
// 005c648f  e85cfeffff           call 0x5c62f0
// 005c6494  5e                   pop esi
// 005c6495  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c6499  64890d00000000       mov dword ptr fs:[0], ecx
// 005c64a0  83c410               add esp, 0x10
// 005c64a3  c3                   ret 
// 005c64a4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c64a8  33c0                 xor eax, eax
// 005c64aa  5e                   pop esi
// 005c64ab  64890d00000000       mov dword ptr fs:[0], ecx
// 005c64b2  83c410               add esp, 0x10
// 005c64b5  c3                   ret 

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
    char storage[0x48];
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
