// roc 2008-06 006e9300  unit: CXTPControlButtonColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9300
//
// 006e9300  8b442408             mov eax, dword ptr [esp + 8]
// 006e9304  56                   push esi
// 006e9305  57                   push edi
// 006e9306  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e930a  50                   push eax
// 006e930b  57                   push edi
// 006e930c  8bf1                 mov esi, ecx
// 006e930e  e80dc40500           call 0x745720
// 006e9313  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 006e9319  5f                   pop edi
// 006e931a  898e74010000         mov dword ptr [esi + 0x174], ecx
// 006e9320  5e                   pop esi
// 006e9321  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?Copy@CXTPControlButtonColor@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
