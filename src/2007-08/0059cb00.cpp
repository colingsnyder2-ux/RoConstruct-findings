// from server: 100% by colin
// roc 2007-08 0059cb00  unit: RBX::VStarterPackService::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059cb00
//
// 0059cb00  c701541b7b00         mov dword ptr [ecx], 0x7b1b54
// 0059cb06  c74104481b7b00       mov dword ptr [ecx + 4], 0x7b1b48
// 0059cb0d  c74110401b7b00       mov dword ptr [ecx + 0x10], 0x7b1b40
// 0059cb14  c74114301b7b00       mov dword ptr [ecx + 0x14], 0x7b1b30
// 0059cb1b  c7412c201b7b00       mov dword ptr [ecx + 0x2c], 0x7b1b20
// 0059cb22  c74144101b7b00       mov dword ptr [ecx + 0x44], 0x7b1b10
// 0059cb29  c7415c001b7b00       mov dword ptr [ecx + 0x5c], 0x7b1b00
// 0059cb30  c74174f01a7b00       mov dword ptr [ecx + 0x74], 0x7b1af0
// 0059cb37  c7818c000000e01a7b00 mov dword ptr [ecx + 0x8c], 0x7b1ae0
// 0059cb41  c781e8000000d81a7b00 mov dword ptr [ecx + 0xe8], 0x7b1ad8
// 0059cb4b  e91004e7ff           jmp 0x40cf60

struct RBX_VStarterPackService_FactoryProduct
{
    void construct();
};

extern void sub_0040CF60();

void RBX_VStarterPackService_FactoryProduct::construct()
{
    *(int*)((char*)this + 0x00) = 0x7b1b54;
    *(int*)((char*)this + 0x04) = 0x7b1b48;
    *(int*)((char*)this + 0x10) = 0x7b1b40;
    *(int*)((char*)this + 0x14) = 0x7b1b30;
    *(int*)((char*)this + 0x2c) = 0x7b1b20;
    *(int*)((char*)this + 0x44) = 0x7b1b10;
    *(int*)((char*)this + 0x5c) = 0x7b1b00;
    *(int*)((char*)this + 0x74) = 0x7b1af0;
    *(int*)((char*)this + 0x8c) = 0x7b1ae0;
    *(int*)((char*)this + 0xe8) = 0x7b1ad8;
    sub_0040CF60();
}
