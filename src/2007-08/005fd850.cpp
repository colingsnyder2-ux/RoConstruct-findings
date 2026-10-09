// from server: 37% by colin
// roc 2007-08 005fd850  unit: RBX::GrabTool  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd850
//
// 005fd850  6aff                 push -1
// 005fd852  681bb67500           push 0x75b61b
// 005fd857  64a100000000         mov eax, dword ptr fs:[0]
// 005fd85d  50                   push eax
// 005fd85e  64892500000000       mov dword ptr fs:[0], esp
// 005fd865  51                   push ecx
// 005fd866  56                   push esi
// 005fd867  6a3c                 push 0x3c
// 005fd869  8bf1                 mov esi, ecx
// 005fd86b  e886260300           call 0x62fef6
// 005fd870  83c404               add esp, 4
// 005fd873  89442404             mov dword ptr [esp + 4], eax
// 005fd877  85c0                 test eax, eax
// 005fd879  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fd881  741b                 je 0x5fd89e
// 005fd883  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005fd886  51                   push ecx
// 005fd887  8bc8                 mov ecx, eax
// 005fd889  e842ffffff           call 0x5fd7d0
// 005fd88e  5e                   pop esi
// 005fd88f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fd893  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd89a  83c410               add esp, 0x10
// 005fd89d  c3                   ret 
// 005fd89e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd8a2  33c0                 xor eax, eax
// 005fd8a4  5e                   pop esi
// 005fd8a5  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd8ac  83c410               add esp, 0x10
// 005fd8af  c3                   ret 

struct MouseCommand {
    char pad[0x18];
    int field18;
};

struct GrabTool {
    char pad[0x18];
    int field18;
    void* createCursor(int);
    GrabTool* init(int);
};

extern "C" void* __cdecl operator_new(unsigned int);

GrabTool* GrabTool::init(int a)
{
    GrabTool* p = (GrabTool*)operator_new(0x3c);
    if (p) {
        p->field18 = this->field18;
        return p;
    }
    return 0;
}
