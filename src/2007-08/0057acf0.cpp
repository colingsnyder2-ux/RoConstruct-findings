// from server: 100% by colin
// roc 2007-08 0057acf0  unit: RBX::ArrowTool  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057acf0
//
// 0057acf0  80791400             cmp byte ptr [ecx + 0x14], 0
// 0057acf4  7407                 je 0x57acfd
// 0057acf6  8b01                 mov eax, dword ptr [ecx]
// 0057acf8  8b5024               mov edx, dword ptr [eax + 0x24]
// 0057acfb  ffe2                 jmp edx
// 0057acfd  c3                   ret 

struct RBX_ArrowTool {
    char pad[0x14];
    bool flag;
    void method();
};

void RBX_ArrowTool::method()
{
    if (flag) {
        (*(void (__thiscall **)(void *))(*(int *)this + 0x24))(this);
    }
}
