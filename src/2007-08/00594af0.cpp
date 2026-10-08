// from server: 70% by colin
// roc 2007-08 00594af0  unit: RBX::RightMotorTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594af0
//
// 00594af0  51                   push ecx
// 00594af1  56                   push esi
// 00594af2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00594af6  68ac087b00           push 0x7b08ac
// 00594afb  8bce                 mov ecx, esi
// 00594afd  c744240800000000     mov dword ptr [esp + 8], 0
// 00594b05  ff1598e67700         call dword ptr [0x77e698]
// 00594b0b  8bc6                 mov eax, esi
// 00594b0d  5e                   pop esi
// 00594b0e  59                   pop ecx
// 00594b0f  c20400               ret 4

struct std_string {
    std_string(const char*);
};

struct RightMotorTool {
    std_string getCursorName() const;
};

std_string RightMotorTool::getCursorName() const
{
    return std_string("MotorCursor");
}
