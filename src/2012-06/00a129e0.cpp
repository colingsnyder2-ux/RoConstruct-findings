// roc 2012-06 00a129e0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a129e0
//
// 00a129e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a129e4  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00a129ea  85c0                 test eax, eax
// 00a129ec  0f8489000000         je 0xa12a7b
// 00a129f2  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00a129f9  746a                 je 0xa12a65
// 00a129fb  ba05000000           mov edx, 5
// 00a12a00  3991fc000000         cmp dword ptr [ecx + 0xfc], edx
// 00a12a06  7473                 je 0xa12a7b
// 00a12a08  f780ec00000000002000 test dword ptr [eax + 0xec], 0x200000
// 00a12a12  741e                 je 0xa12a32
// 00a12a14  399000010000         cmp dword ptr [eax + 0x100], edx
// 00a12a1a  7516                 jne 0xa12a32
// 00a12a1c  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00a12a24  c744240800000000     mov dword ptr [esp + 8], 0
// 00a12a2c  ff254c3bb200         jmp dword ptr [0xb23b4c]
// 00a12a32  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a12a37  7416                 je 0xa12a4f
// 00a12a39  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00a12a41  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 00a12a49  ff254c3bb200         jmp dword ptr [0xb23b4c]
// 00a12a4f  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00a12a57  c744240800000000     mov dword ptr [esp + 8], 0
// 00a12a5f  ff254c3bb200         jmp dword ptr [0xb23b4c]
// 00a12a65  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00a12a6d  c744240801000000     mov dword ptr [esp + 8], 1
// 00a12a75  ff254c3bb200         jmp dword ptr [0xb23b4c]
// 00a12a7b  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?AdjustExcludeRect@CXTPOfficeTheme@XTPPaintThemes@@UAEXAAVCRect@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
