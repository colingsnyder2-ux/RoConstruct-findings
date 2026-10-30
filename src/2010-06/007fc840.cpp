// roc 2010-06 007fc840  unit: CXTPControlSelector  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc840
//
// 007fc840  8b442408             mov eax, dword ptr [esp + 8]
// 007fc844  56                   push esi
// 007fc845  57                   push edi
// 007fc846  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007fc84a  50                   push eax
// 007fc84b  57                   push edi
// 007fc84c  8bf1                 mov esi, ecx
// 007fc84e  e81d06fbff           call 0x7ace70
// 007fc853  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 007fc859  898e74010000         mov dword ptr [esi + 0x174], ecx
// 007fc85f  8b9778010000         mov edx, dword ptr [edi + 0x178]
// 007fc865  899678010000         mov dword ptr [esi + 0x178], edx
// 007fc86b  8b877c010000         mov eax, dword ptr [edi + 0x17c]
// 007fc871  89867c010000         mov dword ptr [esi + 0x17c], eax
// 007fc877  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 007fc87d  898e80010000         mov dword ptr [esi + 0x180], ecx
// 007fc883  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 007fc889  89968c010000         mov dword ptr [esi + 0x18c], edx
// 007fc88f  8b8790010000         mov eax, dword ptr [edi + 0x190]
// 007fc895  5f                   pop edi
// 007fc896  898690010000         mov dword ptr [esi + 0x190], eax
// 007fc89c  5e                   pop esi
// 007fc89d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?Copy@CXTPControlSelector@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
