// roc 2009-06 00761b50  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761b50
//
// 00761b50  8b442408             mov eax, dword ptr [esp + 8]
// 00761b54  56                   push esi
// 00761b55  57                   push edi
// 00761b56  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00761b5a  50                   push eax
// 00761b5b  57                   push edi
// 00761b5c  8bf1                 mov esi, ecx
// 00761b5e  e85dedffff           call 0x7608c0
// 00761b63  8b8f84010000         mov ecx, dword ptr [edi + 0x184]
// 00761b69  5f                   pop edi
// 00761b6a  898e84010000         mov dword ptr [esi + 0x184], ecx
// 00761b70  5e                   pop esi
// 00761b71  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlPopupColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
