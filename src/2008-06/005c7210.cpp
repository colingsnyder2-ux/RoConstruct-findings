// from server: 100% by king_originala
// roc 2008-06 005c7210  unit: RBX::VAnchorTool::?$TToolVerb  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7210
//
// 005c7210  6aff                 push -1
// 005c7212  683bf47b00           push 0x7bf43b
// 005c7217  64a100000000         mov eax, dword ptr fs:[0]
// 005c721d  50                   push eax
// 005c721e  64892500000000       mov dword ptr fs:[0], esp
// 005c7225  51                   push ecx
// 005c7226  56                   push esi
// 005c7227  57                   push edi
// 005c7228  6a28                 push 0x28
// 005c722a  8bf9                 mov edi, ecx
// 005c722c  e8ef960d00           call 0x6a0920
// 005c7231  8bf0                 mov esi, eax
// 005c7233  83c404               add esp, 4
// 005c7236  89742408             mov dword ptr [esp + 8], esi
// 005c723a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005c7242  85f6                 test esi, esi
// 005c7244  7435                 je 0x5c727b
// 005c7246  8b470c               mov eax, dword ptr [edi + 0xc]
// 005c7249  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c724f  51                   push ecx
// 005c7250  8bce                 mov ecx, esi
// 005c7252  e8296c0700           call 0x63de80
// 005c7257  5f                   pop edi
// 005c7258  c7067c978300         mov dword ptr [esi], 0x83977c
// 005c725e  c7460464978300       mov dword ptr [esi + 4], 0x839764
// 005c7265  c6462400             mov byte ptr [esi + 0x24], 0
// 005c7269  8bc6                 mov eax, esi
// 005c726b  5e                   pop esi
// 005c726c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c7270  64890d00000000       mov dword ptr fs:[0], ecx
// 005c7277  83c410               add esp, 0x10
// 005c727a  c3                   ret 
// 005c727b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c727f  5f                   pop edi
// 005c7280  33c0                 xor eax, eax
// 005c7282  5e                   pop esi
// 005c7283  64890d00000000       mov dword ptr fs:[0], ecx
// 005c728a  83c410               add esp, 0x10
// 005c728d  c3                   ret 

typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct First {
    virtual void first();
};

struct Second {
    virtual void second();
};

struct Base : First, Second {
    char padding[28];
    Base(void*);
};

struct Tool : Base {
    bool state;
    Tool(void*);
    virtual void first();
    virtual void second();
};

inline Tool::Tool(void* p) : Base(p), state(false) {}

struct Context {
    char padding[0x204];
    void* value;
};

struct Verb {
    char padding[0x0c];
    Context* context;
    Tool* create();
};

Tool* Verb::create()
{
    return new Tool(context->value);
}
