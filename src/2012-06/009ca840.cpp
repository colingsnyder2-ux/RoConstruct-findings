// roc 2012-06 009ca840  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca840
//
// 009ca840  8b442408             mov eax, dword ptr [esp + 8]
// 009ca844  56                   push esi
// 009ca845  57                   push edi
// 009ca846  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ca84a  50                   push eax
// 009ca84b  57                   push edi
// 009ca84c  8bf1                 mov esi, ecx
// 009ca84e  e80df20400           call 0xa19a60
// 009ca853  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 009ca859  5f                   pop edi
// 009ca85a  898e74010000         mov dword ptr [esi + 0x174], ecx
// 009ca860  5e                   pop esi
// 009ca861  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlButtonColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
