// roc 2009-06 007aef90  unit: XTPPaintThemes::CXTPOfficeTheme  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007aef90
//
// 007aef90  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007aef94  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007aef9a  85c0                 test eax, eax
// 007aef9c  0f8489000000         je 0x7af02b
// 007aefa2  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007aefa9  746a                 je 0x7af015
// 007aefab  ba05000000           mov edx, 5
// 007aefb0  3991fc000000         cmp dword ptr [ecx + 0xfc], edx
// 007aefb6  7473                 je 0x7af02b
// 007aefb8  f780ec00000000002000 test dword ptr [eax + 0xec], 0x200000
// 007aefc2  741e                 je 0x7aefe2
// 007aefc4  399000010000         cmp dword ptr [eax + 0x100], edx
// 007aefca  7516                 jne 0x7aefe2
// 007aefcc  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 007aefd4  c744240800000000     mov dword ptr [esp + 8], 0
// 007aefdc  ff25bced8900         jmp dword ptr [0x89edbc]
// 007aefe2  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007aefe7  7416                 je 0x7aefff
// 007aefe9  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007aeff1  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 007aeff9  ff25bced8900         jmp dword ptr [0x89edbc]
// 007aefff  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 007af007  c744240800000000     mov dword ptr [esp + 8], 0
// 007af00f  ff25bced8900         jmp dword ptr [0x89edbc]
// 007af015  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007af01d  c744240801000000     mov dword ptr [esp + 8], 1
// 007af025  ff25bced8900         jmp dword ptr [0x89edbc]
// 007af02b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?AdjustExcludeRect@CXTPOfficeTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
