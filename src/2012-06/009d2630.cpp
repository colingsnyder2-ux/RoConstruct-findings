// roc 2012-06 009d2630  unit: CXTPControlSelector  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d2630
//
// 009d2630  8b442408             mov eax, dword ptr [esp + 8]
// 009d2634  56                   push esi
// 009d2635  57                   push edi
// 009d2636  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009d263a  50                   push eax
// 009d263b  57                   push edi
// 009d263c  8bf1                 mov esi, ecx
// 009d263e  e8ad4ffbff           call 0x9875f0
// 009d2643  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 009d2649  898e74010000         mov dword ptr [esi + 0x174], ecx
// 009d264f  8b9778010000         mov edx, dword ptr [edi + 0x178]
// 009d2655  899678010000         mov dword ptr [esi + 0x178], edx
// 009d265b  8b877c010000         mov eax, dword ptr [edi + 0x17c]
// 009d2661  89867c010000         mov dword ptr [esi + 0x17c], eax
// 009d2667  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 009d266d  898e80010000         mov dword ptr [esi + 0x180], ecx
// 009d2673  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 009d2679  89968c010000         mov dword ptr [esi + 0x18c], edx
// 009d267f  8b8790010000         mov eax, dword ptr [edi + 0x190]
// 009d2685  5f                   pop edi
// 009d2686  898690010000         mov dword ptr [esi + 0x190], eax
// 009d268c  5e                   pop esi
// 009d268d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?Copy@CXTPControlSelector@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
