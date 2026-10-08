// roc 2012-06 009f45b0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f45b0
//
// 009f45b0  56                   push esi
// 009f45b1  8bf1                 mov esi, ecx
// 009f45b3  e8c82c0700           call 0xa67280
// 009f45b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009f45bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009f45c0  89867c010000         mov dword ptr [esi + 0x17c], eax
// 009f45c6  c7066c99c100         mov dword ptr [esi], 0xc1996c
// 009f45cc  c746545c99c100       mov dword ptr [esi + 0x54], 0xc1995c
// 009f45d3  898e64010000         mov dword ptr [esi + 0x164], ecx
// 009f45d9  c7866801000001000000 mov dword ptr [esi + 0x168], 1
// 009f45e3  8bc6                 mov eax, esi
// 009f45e5  5e                   pop esi
// 009f45e6  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ??0CXTColorPopup@@QAE@HJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
