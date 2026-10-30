// from server: 100% by auto
// roc 2008-06 0078aa10  unit: CXTColorWnd  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078aa10
//
// 0078aa10  56                   push esi
// 0078aa11  8bf1                 mov esi, ecx
// 0078aa13  e85062f1ff           call 0x6a0c68
// 0078aa18  6a00                 push 0
// 0078aa1a  c705d4f1970000000000 mov dword ptr [0x97f1d4], 0
// 0078aa24  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078aa27  6a00                 push 0
// 0078aa29  50                   push eax
// 0078aa2a  ff15182e8000         call dword ptr [0x802e18]
// 0078aa30  5e                   pop esi
// 0078aa31  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?OnKillFocus@CXTColorWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
