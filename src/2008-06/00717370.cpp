// roc 2008-06 00717370  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717370
//
// 00717370  83ec10               sub esp, 0x10
// 00717373  56                   push esi
// 00717374  8bf1                 mov esi, ecx
// 00717376  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00717379  8d442404             lea eax, [esp + 4]
// 0071737d  50                   push eax
// 0071737e  51                   push ecx
// 0071737f  ff15842d8000         call dword ptr [0x802d84]
// 00717385  8b542420             mov edx, dword ptr [esp + 0x20]
// 00717389  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0071738d  52                   push edx
// 0071738e  50                   push eax
// 0071738f  8d4c240c             lea ecx, [esp + 0xc]
// 00717393  51                   push ecx
// 00717394  ff152c2d8000         call dword ptr [0x802d2c]
// 0071739a  85c0                 test eax, eax
// 0071739c  7520                 jne 0x7173be
// 0071739e  8bce                 mov ecx, esi
// 007173a0  e89b730700           call 0x78e740
// 007173a5  84c0                 test al, al
// 007173a7  7515                 jne 0x7173be
// 007173a9  8b16                 mov edx, dword ptr [esi]
// 007173ab  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 007173b1  6aff                 push -1
// 007173b3  8bce                 mov ecx, esi
// 007173b5  ffd0                 call eax
// 007173b7  5e                   pop esi
// 007173b8  83c410               add esp, 0x10
// 007173bb  c20c00               ret 0xc
// 007173be  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007173c2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007173c6  8b442418             mov eax, dword ptr [esp + 0x18]
// 007173ca  51                   push ecx
// 007173cb  52                   push edx
// 007173cc  50                   push eax
// 007173cd  8bce                 mov ecx, esi
// 007173cf  e8dc760700           call 0x78eab0
// 007173d4  5e                   pop esi
// 007173d5  83c410               add esp, 0x10
// 007173d8  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorPopup.cpp (function ?OnLButtonDown@CXTColorPopup@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPopup.cpp
