// roc 2011-06 0087c010  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087c010
//
// 0087c010  56                   push esi
// 0087c011  8bf1                 mov esi, ecx
// 0087c013  e8782e0700           call 0x8eee90
// 0087c018  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087c01c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087c020  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0087c026  c706ace2ac00         mov dword ptr [esi], 0xace2ac
// 0087c02c  c746549ce2ac00       mov dword ptr [esi + 0x54], 0xace29c
// 0087c033  898e64010000         mov dword ptr [esi + 0x164], ecx
// 0087c039  c7866801000001000000 mov dword ptr [esi + 0x168], 1
// 0087c043  8bc6                 mov eax, esi
// 0087c045  5e                   pop esi
// 0087c046  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ??0CXTColorPopup@@QAE@HJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
