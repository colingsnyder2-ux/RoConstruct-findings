// roc 2010-06 007f0a80  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0a80
//
// 007f0a80  8b442408             mov eax, dword ptr [esp + 8]
// 007f0a84  56                   push esi
// 007f0a85  57                   push edi
// 007f0a86  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007f0a8a  50                   push eax
// 007f0a8b  57                   push edi
// 007f0a8c  8bf1                 mov esi, ecx
// 007f0a8e  e84dedffff           call 0x7ef7e0
// 007f0a93  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 007f0a99  5f                   pop edi
// 007f0a9a  898e84010000         mov dword ptr [esi + 0x184], ecx
// 007f0aa0  5e                   pop esi
// 007f0aa1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlPopupColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
