// from server: 100% by auto
// roc 2007-08 0069d8a0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069d8a0
//
// 0069d8a0  56                   push esi
// 0069d8a1  8bf1                 mov esi, ecx
// 0069d8a3  e89629f9ff           call 0x63023e
// 0069d8a8  837c240800           cmp dword ptr [esp + 8], 0
// 0069d8ad  751b                 jne 0x69d8ca
// 0069d8af  8bce                 mov ecx, esi
// 0069d8b1  e81a370700           call 0x710fd0
// 0069d8b6  84c0                 test al, al
// 0069d8b8  7510                 jne 0x69d8ca
// 0069d8ba  8b4620               mov eax, dword ptr [esi + 0x20]
// 0069d8bd  6a00                 push 0
// 0069d8bf  6a00                 push 0
// 0069d8c1  6a10                 push 0x10
// 0069d8c3  50                   push eax
// 0069d8c4  ff15d0ec7700         call dword ptr [0x77ecd0]
// 0069d8ca  5e                   pop esi
// 0069d8cb  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTColorPopup.cpp (function ?OnActivate@CXTColorPopup@@IAEXIPAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPopup.cpp
