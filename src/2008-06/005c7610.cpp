// from server: 100% by king_originala
// roc 2008-06 005c7610  unit: RBX::VNullTool::?$TToolVerb  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7610
//
// 005c7610  6aff                 push -1
// 005c7612  683bf47b00           push 0x7bf43b
// 005c7617  64a100000000         mov eax, dword ptr fs:[0]
// 005c761d  50                   push eax
// 005c761e  64892500000000       mov dword ptr fs:[0], esp
// 005c7625  51                   push ecx
// 005c7626  56                   push esi
// 005c7627  6a1c                 push 0x1c
// 005c7629  8bf1                 mov esi, ecx
// 005c762b  e8f0920d00           call 0x6a0920
// 005c7630  83c404               add esp, 4
// 005c7633  89442404             mov dword ptr [esp + 4], eax
// 005c7637  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c763f  85c0                 test eax, eax
// 005c7641  7421                 je 0x5c7664
// 005c7643  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005c7646  8b8904020000         mov ecx, dword ptr [ecx + 0x204]
// 005c764c  51                   push ecx
// 005c764d  8bc8                 mov ecx, eax
// 005c764f  e8bc0a0500           call 0x618110
// 005c7654  5e                   pop esi
// 005c7655  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c7659  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7660  83c410               add esp, 0x10
// 005c7663  c3                   ret 
// 005c7664  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c7668  33c0                 xor eax, eax
// 005c766a  5e                   pop esi
// 005c766b  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7672  83c410               add esp, 0x10
// 005c7675  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct NewNullTool {
    char storage[0x1c];
    NewNullTool(void*);
};

struct Context {
    char pad[0x204];
    void* value;
    void* getValue();
};

__forceinline void* Context::getValue() {
    return value;
}

struct ToolVerb {
    char pad[0xc];
    Context* context;
    NewNullTool* f();
};

NewNullTool* ToolVerb::f() {
    return new NewNullTool(context->getValue());
}
