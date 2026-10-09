// roc 2007-03 00696720  unit: seg_00690000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00696720
//
// 00696720  8b4104               mov eax, dword ptr [ecx + 4]
// 00696723  85c0                 test eax, eax
// 00696725  7501                 jne 0x696728
// 00696727  c3                   ret 
// 00696728  8a00                 mov al, byte ptr [eax]
// 0069672a  a808                 test al, 8
// 0069672c  7406                 je 0x696734
// 0069672e  b803000000           mov eax, 3
// 00696733  c3                   ret 
// 00696734  a810                 test al, 0x10
// 00696736  7406                 je 0x69673e
// 00696738  b802000000           mov eax, 2
// 0069673d  c3                   ret 
// 0069673e  2404                 and al, 4
// 00696740  f6d8                 neg al
// 00696742  1bc0                 sbb eax, eax
// 00696744  83e0fd               and eax, 0xfffffffd
// 00696747  83c004               add eax, 4
// 0069674a  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?Priority@CKeyHelper@CXTPShortcutManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
