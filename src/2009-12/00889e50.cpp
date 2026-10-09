// roc 2009-12 00889e50  unit: XTPPaintThemes::CXTPOfficeTheme  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00889e50
//
// 00889e50  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00889e54  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00889e5a  85c0                 test eax, eax
// 00889e5c  0f8489000000         je 0x889eeb
// 00889e62  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00889e69  746a                 je 0x889ed5
// 00889e6b  ba05000000           mov edx, 5
// 00889e70  3991fc000000         cmp dword ptr [ecx + 0xfc], edx
// 00889e76  7473                 je 0x889eeb
// 00889e78  f780ec00000000002000 test dword ptr [eax + 0xec], 0x200000
// 00889e82  741e                 je 0x889ea2
// 00889e84  399000010000         cmp dword ptr [eax + 0x100], edx
// 00889e8a  7516                 jne 0x889ea2
// 00889e8c  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00889e94  c744240800000000     mov dword ptr [esp + 8], 0
// 00889e9c  ff2558ca9800         jmp dword ptr [0x98ca58]
// 00889ea2  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00889ea7  7416                 je 0x889ebf
// 00889ea9  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00889eb1  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 00889eb9  ff2558ca9800         jmp dword ptr [0x98ca58]
// 00889ebf  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00889ec7  c744240800000000     mov dword ptr [esp + 8], 0
// 00889ecf  ff2558ca9800         jmp dword ptr [0x98ca58]
// 00889ed5  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00889edd  c744240801000000     mov dword ptr [esp + 8], 1
// 00889ee5  ff2558ca9800         jmp dword ptr [0x98ca58]
// 00889eeb  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?AdjustExcludeRect@CXTPOfficeTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
