// roc 2011-06 00852380  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00852380
//
// 00852380  8b442408             mov eax, dword ptr [esp + 8]
// 00852384  56                   push esi
// 00852385  57                   push edi
// 00852386  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085238a  50                   push eax
// 0085238b  57                   push edi
// 0085238c  8bf1                 mov esi, ecx
// 0085238e  e87df20400           call 0x8a1610
// 00852393  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 00852399  5f                   pop edi
// 0085239a  898e74010000         mov dword ptr [esi + 0x174], ecx
// 008523a0  5e                   pop esi
// 008523a1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlButtonColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
