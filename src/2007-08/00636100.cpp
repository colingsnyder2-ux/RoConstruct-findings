// from server: 100% by colin
// roc 2007-08 00636100  unit: CXTPControlComboBoxPopupBar  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636100
//
// 00636100  56                   push esi
// 00636101  8bf1                 mov esi, ecx
// 00636103  e888400400           call 0x67a190
// 00636108  c70674577c00         mov dword ptr [esi], 0x7c5774
// 0063610e  c7465464577c00       mov dword ptr [esi + 0x54], 0x7c5764
// 00636115  c7465c04577c00       mov dword ptr [esi + 0x5c], 0x7c5704
// 0063611c  c786bc00000001000000 mov dword ptr [esi + 0xbc], 1
// 00636126  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 00636130  8bc6                 mov eax, esi
// 00636132  5e                   pop esi
// 00636133  c3                   ret 

struct CXTPControlComboBoxPopupBar {
    CXTPControlComboBoxPopupBar* construct();
};

extern "C" void __stdcall sub_67A190();

CXTPControlComboBoxPopupBar* CXTPControlComboBoxPopupBar::construct()
{
    sub_67A190();
    *(int*)((char*)this + 0x00) = 0x7c5774;
    *(int*)((char*)this + 0x54) = 0x7c5764;
    *(int*)((char*)this + 0x5c) = 0x7c5704;
    *(int*)((char*)this + 0xbc) = 1;
    *(int*)((char*)this + 0xc0) = 0;
    return this;
}
