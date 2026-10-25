// from server: 100% by tester
// roc 2008-06 00442c90  unit: CPropGrid  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00442c90
//
// 00442c90  8bc1                 mov eax, ecx
// 00442c92  33c9                 xor ecx, ecx
// 00442c94  c700c0578100         mov dword ptr [eax], 0x8157c0
// 00442c9a  894804               mov dword ptr [eax + 4], ecx
// 00442c9d  894808               mov dword ptr [eax + 8], ecx
// 00442ca0  89480c               mov dword ptr [eax + 0xc], ecx
// 00442ca3  894810               mov dword ptr [eax + 0x10], ecx
// 00442ca6  894814               mov dword ptr [eax + 0x14], ecx
// 00442ca9  894818               mov dword ptr [eax + 0x18], ecx
// 00442cac  88481c               mov byte ptr [eax + 0x1c], cl
// 00442caf  88481d               mov byte ptr [eax + 0x1d], cl
// 00442cb2  c74020ffffffff       mov dword ptr [eax + 0x20], 0xffffffff
// 00442cb9  894824               mov dword ptr [eax + 0x24], ecx
// 00442cbc  894828               mov dword ptr [eax + 0x28], ecx
// 00442cbf  89482c               mov dword ptr [eax + 0x2c], ecx
// 00442cc2  c3                   ret 

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
