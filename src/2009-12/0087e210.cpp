// roc 2009-12 0087e210  unit: XTPPaintThemes::CXTPDefaultTheme  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087e210
//
// 0087e210  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087e214  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0087e21a  85c0                 test eax, eax
// 0087e21c  745b                 je 0x87e279
// 0087e21e  83b9fc00000005       cmp dword ptr [ecx + 0xfc], 5
// 0087e225  7452                 je 0x87e279
// 0087e227  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0087e22e  7433                 je 0x87e263
// 0087e230  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0087e235  7416                 je 0x87e24d
// 0087e237  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0087e23f  c744240800000000     mov dword ptr [esp + 8], 0
// 0087e247  ff2558ca9800         jmp dword ptr [0x98ca58]
// 0087e24d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0087e255  c744240801000000     mov dword ptr [esp + 8], 1
// 0087e25d  ff2558ca9800         jmp dword ptr [0x98ca58]
// 0087e263  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0087e26b  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0087e273  ff2558ca9800         jmp dword ptr [0x98ca58]
// 0087e279  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?AdjustExcludeRect@CXTPDefaultTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
