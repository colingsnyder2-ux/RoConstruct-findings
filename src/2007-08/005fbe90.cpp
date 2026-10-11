// from server: 100% by colin
// roc 2007-08 005fbe90  unit: RBX::SlingshotTool  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fbe90
//
// 005fbe90  8b4130               mov eax, dword ptr [ecx + 0x30]
// 005fbe93  85c0                 test eax, eax
// 005fbe95  7e06                 jle 0x5fbe9d
// 005fbe97  83c0ff               add eax, -1
// 005fbe9a  894130               mov dword ptr [ecx + 0x30], eax
// 005fbe9d  80791400             cmp byte ptr [ecx + 0x14], 0
// 005fbea1  7407                 je 0x5fbeaa
// 005fbea3  8b01                 mov eax, dword ptr [ecx]
// 005fbea5  8b4018               mov eax, dword ptr [eax + 0x18]
// 005fbea8  ffe0                 jmp eax
// 005fbeaa  c20400               ret 4

struct RBX_SlingshotTool {
    int field0;
    char pad[0x10];
    char field14;
    char pad2[0x1b];
    int field30;
    void method(int);
};

void RBX_SlingshotTool::method(int arg)
{
    if (field30 > 0) {
        field30 = field30 - 1;
    }
    if (field14 != 0) {
        void (__thiscall *fn)(RBX_SlingshotTool*, int);
        fn = *(void (__thiscall **)(RBX_SlingshotTool*, int))(*(int*)this + 0x18);
        fn(this, arg);
    }
}
