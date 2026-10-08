// from server: 100% by auto
// roc 2008-06 0078b150  unit: CXTColorLum  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078b150
//
// 0078b150  8b442404             mov eax, dword ptr [esp + 4]
// 0078b154  56                   push esi
// 0078b155  50                   push eax
// 0078b156  8bf1                 mov esi, ecx
// 0078b158  e86d62f1ff           call 0x6a13ca
// 0078b15d  6a00                 push 0
// 0078b15f  c705d4f1970002000000 mov dword ptr [0x97f1d4], 2
// 0078b169  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078b16c  6a00                 push 0
// 0078b16e  51                   push ecx
// 0078b16f  ff15182e8000         call dword ptr [0x802e18]
// 0078b175  5e                   pop esi
// 0078b176  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?OnSetFocus@CXTColorLum@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
