// roc 2009-12 0086a880  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086a880
//
// 0086a880  56                   push esi
// 0086a881  8bf1                 mov esi, ecx
// 0086a883  e808780700           call 0x8e2090
// 0086a888  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086a88c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0086a890  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0086a896  c70664f59f00         mov dword ptr [esi], 0x9ff564
// 0086a89c  c7465454f59f00       mov dword ptr [esi + 0x54], 0x9ff554
// 0086a8a3  898e64010000         mov dword ptr [esi + 0x164], ecx
// 0086a8a9  c7866801000001000000 mov dword ptr [esi + 0x168], 1
// 0086a8b3  8bc6                 mov eax, esi
// 0086a8b5  5e                   pop esi
// 0086a8b6  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ??0CXTColorPopup@@QAE@HJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
