// roc 2012-06 009f4610  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f4610
//
// 009f4610  56                   push esi
// 009f4611  8bf1                 mov esi, ecx
// 009f4613  e8c6e0f8ff           call 0x9826de
// 009f4618  837c240800           cmp dword ptr [esp + 8], 0
// 009f461d  751b                 jne 0x9f463a
// 009f461f  8bce                 mov ecx, esi
// 009f4621  e8da240700           call 0xa66b00
// 009f4626  84c0                 test al, al
// 009f4628  7510                 jne 0x9f463a
// 009f462a  8b4620               mov eax, dword ptr [esi + 0x20]
// 009f462d  6a00                 push 0
// 009f462f  6a00                 push 0
// 009f4631  6a10                 push 0x10
// 009f4633  50                   push eax
// 009f4634  ff15243cb200         call dword ptr [0xb23c24]
// 009f463a  5e                   pop esi
// 009f463b  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Popup\XTPColorPopup.cpp (function ?OnActivate@CXTPColorPopup@@IAEXIPAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Popup/XTPColorPopup.cpp
