// from server: 100% by king_originala
// roc 2008-06 005c76b0  unit: RBX::VGameTool::?$TToolVerb  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c76b0
//
// 005c76b0  6aff                 push -1
// 005c76b2  683bf47b00           push 0x7bf43b
// 005c76b7  64a100000000         mov eax, dword ptr fs:[0]
// 005c76bd  50                   push eax
// 005c76be  64892500000000       mov dword ptr fs:[0], esp
// 005c76c5  51                   push ecx
// 005c76c6  56                   push esi
// 005c76c7  6a38                 push 0x38
// 005c76c9  8bf1                 mov esi, ecx
// 005c76cb  e850920d00           call 0x6a0920
// 005c76d0  83c404               add esp, 4
// 005c76d3  89442404             mov dword ptr [esp + 4], eax
// 005c76d7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c76df  85c0                 test eax, eax
// 005c76e1  7421                 je 0x5c7704
// 005c76e3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005c76e6  8b8904020000         mov ecx, dword ptr [ecx + 0x204]
// 005c76ec  51                   push ecx
// 005c76ed  8bc8                 mov ecx, eax
// 005c76ef  e88c8b0700           call 0x640280
// 005c76f4  5e                   pop esi
// 005c76f5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c76f9  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7700  83c410               add esp, 0x10
// 005c7703  c3                   ret 
// 005c7704  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c7708  33c0                 xor eax, eax
// 005c770a  5e                   pop esi
// 005c770b  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7712  83c410               add esp, 0x10
// 005c7715  c3                   ret 

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
    char storage[0x38];
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
