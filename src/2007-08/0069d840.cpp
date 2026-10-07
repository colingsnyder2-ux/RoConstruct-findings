// roc 2007-08 0069d840  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069d840
//
// 0069d840  56                   push esi
// 0069d841  8bf1                 mov esi, ecx
// 0069d843  e8583e0700           call 0x7116a0
// 0069d848  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0069d84c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069d850  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0069d856  c706f4217d00         mov dword ptr [esi], 0x7d21f4
// 0069d85c  c74654e4217d00       mov dword ptr [esi + 0x54], 0x7d21e4
// 0069d863  898e64010000         mov dword ptr [esi + 0x164], ecx
// 0069d869  c7866801000001000000 mov dword ptr [esi + 0x168], 1
// 0069d873  8bc6                 mov eax, esi
// 0069d875  5e                   pop esi
// 0069d876  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTColorPopup.cpp (function ??0CXTColorPopup@@QAE@HJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPopup.cpp
