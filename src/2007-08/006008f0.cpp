// from server: 100% by colin
// roc 2007-08 006008f0  unit: RBX::VerbWidget  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006008f0
//
// 006008f0  c701b4297c00         mov dword ptr [ecx], 0x7c29b4
// 006008f6  c74104a8297c00       mov dword ptr [ecx + 4], 0x7c29a8
// 006008fd  c74110a0297c00       mov dword ptr [ecx + 0x10], 0x7c29a0
// 00600904  c7411490297c00       mov dword ptr [ecx + 0x14], 0x7c2990
// 0060090b  c7412c80297c00       mov dword ptr [ecx + 0x2c], 0x7c2980
// 00600912  c7414470297c00       mov dword ptr [ecx + 0x44], 0x7c2970
// 00600919  c7415c60297c00       mov dword ptr [ecx + 0x5c], 0x7c2960
// 00600920  c7417450297c00       mov dword ptr [ecx + 0x74], 0x7c2950
// 00600927  c7818c00000040297c00 mov dword ptr [ecx + 0x8c], 0x7c2940
// 00600931  c781e800000038297c00 mov dword ptr [ecx + 0xe8], 0x7c2938
// 0060093b  e920c6e0ff           jmp 0x40cf60

struct RBX_VerbWidget {
    void construct();
};

void RBX_VerbWidget::construct() {
    *(int*)((char*)this + 0x00) = 0x7c29b4;
    *(int*)((char*)this + 0x04) = 0x7c29a8;
    *(int*)((char*)this + 0x10) = 0x7c29a0;
    *(int*)((char*)this + 0x14) = 0x7c2990;
    *(int*)((char*)this + 0x2c) = 0x7c2980;
    *(int*)((char*)this + 0x44) = 0x7c2970;
    *(int*)((char*)this + 0x5c) = 0x7c2960;
    *(int*)((char*)this + 0x74) = 0x7c2950;
    *(int*)((char*)this + 0x8c) = 0x7c2940;
    *(int*)((char*)this + 0xe8) = 0x7c2938;
    extern void __stdcall sub_40cf60();
    sub_40cf60();
}
