// from server: 36% by colin
// roc 2007-08 00595050  unit: RBX::FillTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595050
//
// 00595050  6aff                 push -1
// 00595052  681bb67500           push 0x75b61b
// 00595057  64a100000000         mov eax, dword ptr fs:[0]
// 0059505d  50                   push eax
// 0059505e  64892500000000       mov dword ptr fs:[0], esp
// 00595065  51                   push ecx
// 00595066  56                   push esi
// 00595067  57                   push edi
// 00595068  6a28                 push 0x28
// 0059506a  8bf9                 mov edi, ecx
// 0059506c  e885ae0900           call 0x62fef6
// 00595071  8bf0                 mov esi, eax
// 00595073  83c404               add esp, 4
// 00595076  89742408             mov dword ptr [esp + 8], esi
// 0059507a  33c0                 xor eax, eax
// 0059507c  3bf0                 cmp esi, eax
// 0059507e  89442414             mov dword ptr [esp + 0x14], eax
// 00595082  741a                 je 0x59509e
// 00595084  8b4718               mov eax, dword ptr [edi + 0x18]
// 00595087  50                   push eax
// 00595088  8bce                 mov ecx, esi
// 0059508a  e8111cffff           call 0x586ca0
// 0059508f  c706d40b7b00         mov dword ptr [esi], 0x7b0bd4
// 00595095  c74604b80b7b00       mov dword ptr [esi + 4], 0x7b0bb8
// 0059509c  8bc6                 mov eax, esi
// 0059509e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005950a2  5f                   pop edi
// 005950a3  5e                   pop esi
// 005950a4  64890d00000000       mov dword ptr fs:[0], ecx
// 005950ab  83c410               add esp, 0x10
// 005950ae  c3                   ret 

struct MouseCommand {
    void* vtable;
    void* vtable2;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
};

struct FillTool : MouseCommand {
    FillTool(MouseCommand* workspace);
};

FillTool::FillTool(MouseCommand* workspace) {
    void* mem = operator new(0x28);
    if (mem) {
        MouseCommand* mc = (MouseCommand*)mem;
        mc->field18 = workspace->field18;
        mc->vtable = (void*)0x7b0bd4;
        mc->vtable2 = (void*)0x7b0bb8;
    }
}
