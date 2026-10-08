// roc 2009-06 00761c10  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00761c10
//
// 00761c10  8b442408             mov eax, dword ptr [esp + 8]
// 00761c14  56                   push esi
// 00761c15  57                   push edi
// 00761c16  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00761c1a  50                   push eax
// 00761c1b  57                   push edi
// 00761c1c  8bf1                 mov esi, ecx
// 00761c1e  e85dce0500           call 0x7bea80
// 00761c23  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 00761c29  5f                   pop edi
// 00761c2a  898e74010000         mov dword ptr [esi + 0x174], ecx
// 00761c30  5e                   pop esi
// 00761c31  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlButtonColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
