// from server: 100% by colin
// roc 2007-08 005d9e60  unit: RBX::UnifiedImageWidget  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d9e60
//
// 005d9e60  c701dcbf7b00         mov dword ptr [ecx], 0x7bbfdc
// 005d9e66  c74104d4bf7b00       mov dword ptr [ecx + 4], 0x7bbfd4
// 005d9e6d  c74110ccbf7b00       mov dword ptr [ecx + 0x10], 0x7bbfcc
// 005d9e74  c74114bcbf7b00       mov dword ptr [ecx + 0x14], 0x7bbfbc
// 005d9e7b  c7412cacbf7b00       mov dword ptr [ecx + 0x2c], 0x7bbfac
// 005d9e82  c741449cbf7b00       mov dword ptr [ecx + 0x44], 0x7bbf9c
// 005d9e89  c7415c8cbf7b00       mov dword ptr [ecx + 0x5c], 0x7bbf8c
// 005d9e90  c741747cbf7b00       mov dword ptr [ecx + 0x74], 0x7bbf7c
// 005d9e97  c7818c0000006cbf7b00 mov dword ptr [ecx + 0x8c], 0x7bbf6c
// 005d9ea1  c781e800000054bf7b00 mov dword ptr [ecx + 0xe8], 0x7bbf54
// 005d9eab  e9c062fdff           jmp 0x5b0170

struct UnifiedImageWidget {
    void construct();
};

void UnifiedImageWidget::construct() {
    *(int*)((char*)this + 0x00) = 0x7bbfdc;
    *(int*)((char*)this + 0x04) = 0x7bbfd4;
    *(int*)((char*)this + 0x10) = 0x7bbfcc;
    *(int*)((char*)this + 0x14) = 0x7bbfbc;
    *(int*)((char*)this + 0x2c) = 0x7bbfac;
    *(int*)((char*)this + 0x44) = 0x7bbf9c;
    *(int*)((char*)this + 0x5c) = 0x7bbf8c;
    *(int*)((char*)this + 0x74) = 0x7bbf7c;
    *(int*)((char*)this + 0x8c) = 0x7bbf6c;
    *(int*)((char*)this + 0xe8) = 0x7bbf54;
    extern void __stdcall sub_5b0170();
    sub_5b0170();
}
