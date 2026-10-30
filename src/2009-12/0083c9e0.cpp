// roc 2009-12 0083c9e0  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c9e0
//
// 0083c9e0  8b442408             mov eax, dword ptr [esp + 8]
// 0083c9e4  56                   push esi
// 0083c9e5  57                   push edi
// 0083c9e6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0083c9ea  50                   push eax
// 0083c9eb  57                   push edi
// 0083c9ec  8bf1                 mov esi, ecx
// 0083c9ee  e84d380500           call 0x890240
// 0083c9f3  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 0083c9f9  5f                   pop edi
// 0083c9fa  898e74010000         mov dword ptr [esi + 0x174], ecx
// 0083ca00  5e                   pop esi
// 0083ca01  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlButtonColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
