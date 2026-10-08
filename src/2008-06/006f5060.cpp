// from server: 100% by auto
// roc 2008-06 006f5060  unit: CXTPControlSelector  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5060
//
// 006f5060  8b442408             mov eax, dword ptr [esp + 8]
// 006f5064  56                   push esi
// 006f5065  57                   push edi
// 006f5066  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f506a  50                   push eax
// 006f506b  57                   push edi
// 006f506c  8bf1                 mov esi, ecx
// 006f506e  e85d8dfbff           call 0x6addd0
// 006f5073  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 006f5079  898e74010000         mov dword ptr [esi + 0x174], ecx
// 006f507f  8b9778010000         mov edx, dword ptr [edi + 0x178]
// 006f5085  899678010000         mov dword ptr [esi + 0x178], edx
// 006f508b  8b877c010000         mov eax, dword ptr [edi + 0x17c]
// 006f5091  89867c010000         mov dword ptr [esi + 0x17c], eax
// 006f5097  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 006f509d  898e80010000         mov dword ptr [esi + 0x180], ecx
// 006f50a3  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 006f50a9  89968c010000         mov dword ptr [esi + 0x18c], edx
// 006f50af  8b8790010000         mov eax, dword ptr [edi + 0x190]
// 006f50b5  5f                   pop edi
// 006f50b6  898690010000         mov dword ptr [esi + 0x190], eax
// 006f50bc  5e                   pop esi
// 006f50bd  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?Copy@CXTPControlSelector@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
