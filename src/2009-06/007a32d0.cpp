// roc 2009-06 007a32d0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a32d0
//
// 007a32d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007a32d4  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007a32da  85c0                 test eax, eax
// 007a32dc  745b                 je 0x7a3339
// 007a32de  83b9fc00000005       cmp dword ptr [ecx + 0xfc], 5
// 007a32e5  7452                 je 0x7a3339
// 007a32e7  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007a32ee  7433                 je 0x7a3323
// 007a32f0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007a32f5  7416                 je 0x7a330d
// 007a32f7  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 007a32ff  c744240800000000     mov dword ptr [esp + 8], 0
// 007a3307  ff25bced8900         jmp dword ptr [0x89edbc]
// 007a330d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007a3315  c744240801000000     mov dword ptr [esp + 8], 1
// 007a331d  ff25bced8900         jmp dword ptr [0x89edbc]
// 007a3323  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007a332b  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 007a3333  ff25bced8900         jmp dword ptr [0x89edbc]
// 007a3339  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?AdjustExcludeRect@CXTPDefaultTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
