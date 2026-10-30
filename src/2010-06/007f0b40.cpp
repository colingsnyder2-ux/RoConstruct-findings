// roc 2010-06 007f0b40  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f0b40
//
// 007f0b40  8b442408             mov eax, dword ptr [esp + 8]
// 007f0b44  56                   push esi
// 007f0b45  57                   push edi
// 007f0b46  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007f0b4a  50                   push eax
// 007f0b4b  57                   push edi
// 007f0b4c  8bf1                 mov esi, ecx
// 007f0b4e  e8ed380500           call 0x844440
// 007f0b53  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 007f0b59  5f                   pop edi
// 007f0b5a  898e74010000         mov dword ptr [esi + 0x174], ecx
// 007f0b60  5e                   pop esi
// 007f0b61  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlButtonColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
