// from server: 100% by king_originala
// roc 2008-06 00640700  unit: RBX::AxisMoveTool  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00640700
//
// 00640700  6aff                 push -1
// 00640702  683bf47b00           push 0x7bf43b
// 00640707  64a100000000         mov eax, dword ptr fs:[0]
// 0064070d  50                   push eax
// 0064070e  64892500000000       mov dword ptr fs:[0], esp
// 00640715  51                   push ecx
// 00640716  56                   push esi
// 00640717  6a74                 push 0x74
// 00640719  8bf1                 mov esi, ecx
// 0064071b  e800020600           call 0x6a0920
// 00640720  83c404               add esp, 4
// 00640723  89442404             mov dword ptr [esp + 4], eax
// 00640727  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064072f  85c0                 test eax, eax
// 00640731  741b                 je 0x64074e
// 00640733  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00640736  51                   push ecx
// 00640737  8bc8                 mov ecx, eax
// 00640739  e822feffff           call 0x640560
// 0064073e  5e                   pop esi
// 0064073f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00640743  64890d00000000       mov dword ptr fs:[0], ecx
// 0064074a  83c410               add esp, 0x10
// 0064074d  c3                   ret 
// 0064074e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00640752  33c0                 xor eax, eax
// 00640754  5e                   pop esi
// 00640755  64890d00000000       mov dword ptr fs:[0], ecx
// 0064075c  83c410               add esp, 0x10
// 0064075f  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Tool {
    char storage[0x74];
    Tool(void*);
};

struct AxisMoveTool {
    char padding[0x18];
    void* context;
    Tool* clone();
};

Tool* AxisMoveTool::clone() {
    return new Tool(context);
}
