// from server: 100% by colin
// roc 2007-08 0059ca80  unit: RBX::VStarterPackService::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059ca80
//
// 0059ca80  c7016c1a7b00         mov dword ptr [ecx], 0x7b1a6c
// 0059ca86  c74104641a7b00       mov dword ptr [ecx + 4], 0x7b1a64
// 0059ca8d  c741105c1a7b00       mov dword ptr [ecx + 0x10], 0x7b1a5c
// 0059ca94  c741144c1a7b00       mov dword ptr [ecx + 0x14], 0x7b1a4c
// 0059ca9b  c7412c3c1a7b00       mov dword ptr [ecx + 0x2c], 0x7b1a3c
// 0059caa2  c741442c1a7b00       mov dword ptr [ecx + 0x44], 0x7b1a2c
// 0059caa9  c7415c1c1a7b00       mov dword ptr [ecx + 0x5c], 0x7b1a1c
// 0059cab0  c741740c1a7b00       mov dword ptr [ecx + 0x74], 0x7b1a0c
// 0059cab7  c7818c000000fc197b00 mov dword ptr [ecx + 0x8c], 0x7b19fc
// 0059cac1  c781e8000000f4197b00 mov dword ptr [ecx + 0xe8], 0x7b19f4
// 0059cacb  e99004e7ff           jmp 0x40cf60

struct FactoryProduct {
    void construct();
};

void FactoryProduct::construct()
{
    *(int*)((char*)this + 0x00) = 0x7b1a6c;
    *(int*)((char*)this + 0x04) = 0x7b1a64;
    *(int*)((char*)this + 0x10) = 0x7b1a5c;
    *(int*)((char*)this + 0x14) = 0x7b1a4c;
    *(int*)((char*)this + 0x2c) = 0x7b1a3c;
    *(int*)((char*)this + 0x44) = 0x7b1a2c;
    *(int*)((char*)this + 0x5c) = 0x7b1a1c;
    *(int*)((char*)this + 0x74) = 0x7b1a0c;
    *(int*)((char*)this + 0x8c) = 0x7b19fc;
    *(int*)((char*)this + 0xe8) = 0x7b19f4;
    extern void __stdcall sub_40cf60();
    sub_40cf60();
}
