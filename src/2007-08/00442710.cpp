// from server: 100% by colin
// roc 2007-08 00442710  unit: CPropGrid  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442710
//
// 00442710  8bc1                 mov eax, ecx
// 00442712  33c9                 xor ecx, ecx
// 00442714  c70088f57800         mov dword ptr [eax], 0x78f588
// 0044271a  894804               mov dword ptr [eax + 4], ecx
// 0044271d  894808               mov dword ptr [eax + 8], ecx
// 00442720  89480c               mov dword ptr [eax + 0xc], ecx
// 00442723  894810               mov dword ptr [eax + 0x10], ecx
// 00442726  894814               mov dword ptr [eax + 0x14], ecx
// 00442729  894818               mov dword ptr [eax + 0x18], ecx
// 0044272c  88481c               mov byte ptr [eax + 0x1c], cl
// 0044272f  88481d               mov byte ptr [eax + 0x1d], cl
// 00442732  c74020ffffffff       mov dword ptr [eax + 0x20], 0xffffffff
// 00442739  894824               mov dword ptr [eax + 0x24], ecx
// 0044273c  894828               mov dword ptr [eax + 0x28], ecx
// 0044273f  89482c               mov dword ptr [eax + 0x2c], ecx
// 00442742  c3                   ret 

struct CPropGrid {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    char field1C;
    char field1D;
    int field20;
    int field24;
    int field28;
    int field2C;
    CPropGrid();
};

CPropGrid::CPropGrid()
{
    vtable = (void*)0x78f588;
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    field14 = 0;
    field18 = 0;
    field1C = 0;
    field1D = 0;
    field20 = -1;
    field24 = 0;
    field28 = 0;
    field2C = 0;
}
