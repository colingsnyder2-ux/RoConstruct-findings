// from server: 100% by auto
// roc 2008-06 007170d0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007170d0
//
// 007170d0  56                   push esi
// 007170d1  8bf1                 mov esi, ecx
// 007170d3  e8787e0700           call 0x78ef50
// 007170d8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007170dc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007170e0  89867c010000         mov dword ptr [esi + 0x17c], eax
// 007170e6  c7069ce08500         mov dword ptr [esi], 0x85e09c
// 007170ec  c746548ce08500       mov dword ptr [esi + 0x54], 0x85e08c
// 007170f3  898e64010000         mov dword ptr [esi + 0x164], ecx
// 007170f9  c7866801000001000000 mov dword ptr [esi + 0x168], 1
// 00717103  8bc6                 mov eax, esi
// 00717105  5e                   pop esi
// 00717106  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ??0CXTColorPopup@@QAE@HJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
