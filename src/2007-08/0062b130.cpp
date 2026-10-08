// from server: 89% by colin
// roc 2007-08 0062b130  unit: RBX::GroupDragTool  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062b130
//
// 0062b130  56                   push esi
// 0062b131  8bf1                 mov esi, ecx
// 0062b133  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 0062b137  740c                 je 0x62b145
// 0062b139  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0062b13c  e85f5efbff           call 0x5e0fa0
// 0062b141  c6462c00             mov byte ptr [esi + 0x2c], 0
// 0062b145  8b06                 mov eax, dword ptr [esi]
// 0062b147  8b5024               mov edx, dword ptr [eax + 0x24]
// 0062b14a  8bce                 mov ecx, esi
// 0062b14c  ffd2                 call edx
// 0062b14e  33c0                 xor eax, eax
// 0062b150  5e                   pop esi
// 0062b151  c20400               ret 4

struct GroupDragTool
{
    char pad0[0x20];
    void* megaDragger;
    char pad24[0x8];
    bool dragging;
    char pad2d[0x3];

    void sub_5e0fa0();
    int func(int);
};

int GroupDragTool::func(int)
{
    if (dragging)
    {
        sub_5e0fa0();
        dragging = false;
    }
    (*(void (__thiscall**)(GroupDragTool*))(*(int*)this + 0x24))(this);
    return 0;
}
