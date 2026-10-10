// roc 2008-06 00717300  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717300
//
// 00717300  56                   push esi
// 00717301  6a00                 push 0
// 00717303  8bf1                 mov esi, ecx
// 00717305  e8c62dfeff           call 0x6fa0d0
// 0071730a  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00717310  8b06                 mov eax, dword ptr [esi]
// 00717312  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00717316  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0071731c  83c404               add esp, 4
// 0071731f  51                   push ecx
// 00717320  52                   push edx
// 00717321  8bce                 mov ecx, esi
// 00717323  ffd0                 call eax
// 00717325  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00717328  6a00                 push 0
// 0071732a  6a00                 push 0
// 0071732c  6a10                 push 0x10
// 0071732e  51                   push ecx
// 0071732f  ff150c2e8000         call dword ptr [0x802e0c]
// 00717335  5e                   pop esi
// 00717336  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTColorPopup.cpp (function ?EndSelection@CXTColorPopup@@MAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTColorPopup.cpp
