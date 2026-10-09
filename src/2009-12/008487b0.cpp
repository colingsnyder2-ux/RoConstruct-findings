// roc 2009-12 008487b0  unit: CXTPControlSelector  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008487b0
//
// 008487b0  8b442408             mov eax, dword ptr [esp + 8]
// 008487b4  56                   push esi
// 008487b5  57                   push edi
// 008487b6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008487ba  50                   push eax
// 008487bb  57                   push edi
// 008487bc  8bf1                 mov esi, ecx
// 008487be  e85d04fbff           call 0x7f8c20
// 008487c3  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 008487c9  898e74010000         mov dword ptr [esi + 0x174], ecx
// 008487cf  8b9778010000         mov edx, dword ptr [edi + 0x178]
// 008487d5  899678010000         mov dword ptr [esi + 0x178], edx
// 008487db  8b877c010000         mov eax, dword ptr [edi + 0x17c]
// 008487e1  89867c010000         mov dword ptr [esi + 0x17c], eax
// 008487e7  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 008487ed  898e80010000         mov dword ptr [esi + 0x180], ecx
// 008487f3  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 008487f9  89968c010000         mov dword ptr [esi + 0x18c], edx
// 008487ff  8b8790010000         mov eax, dword ptr [edi + 0x190]
// 00848805  5f                   pop edi
// 00848806  898690010000         mov dword ptr [esi + 0x190], eax
// 0084880c  5e                   pop esi
// 0084880d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?Copy@CXTPControlSelector@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
