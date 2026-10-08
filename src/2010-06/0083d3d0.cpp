// roc 2010-06 0083d3d0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083d3d0
//
// 0083d3d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083d3d4  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0083d3da  85c0                 test eax, eax
// 0083d3dc  0f8489000000         je 0x83d46b
// 0083d3e2  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0083d3e9  746a                 je 0x83d455
// 0083d3eb  ba05000000           mov edx, 5
// 0083d3f0  3991fc000000         cmp dword ptr [ecx + 0xfc], edx
// 0083d3f6  7473                 je 0x83d46b
// 0083d3f8  f780ec00000000002000 test dword ptr [eax + 0xec], 0x200000
// 0083d402  741e                 je 0x83d422
// 0083d404  399000010000         cmp dword ptr [eax + 0x100], edx
// 0083d40a  7516                 jne 0x83d422
// 0083d40c  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0083d414  c744240800000000     mov dword ptr [esp + 8], 0
// 0083d41c  ff25dcbb9e00         jmp dword ptr [0x9ebbdc]
// 0083d422  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0083d427  7416                 je 0x83d43f
// 0083d429  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0083d431  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0083d439  ff25dcbb9e00         jmp dword ptr [0x9ebbdc]
// 0083d43f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0083d447  c744240800000000     mov dword ptr [esp + 8], 0
// 0083d44f  ff25dcbb9e00         jmp dword ptr [0x9ebbdc]
// 0083d455  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0083d45d  c744240801000000     mov dword ptr [esp + 8], 1
// 0083d465  ff25dcbb9e00         jmp dword ptr [0x9ebbdc]
// 0083d46b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?AdjustExcludeRect@CXTPOfficeTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
