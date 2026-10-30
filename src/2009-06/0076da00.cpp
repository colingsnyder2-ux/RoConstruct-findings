// roc 2009-06 0076da00  unit: CXTPControlSelector  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076da00
//
// 0076da00  8b442408             mov eax, dword ptr [esp + 8]
// 0076da04  56                   push esi
// 0076da05  57                   push edi
// 0076da06  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0076da0a  50                   push eax
// 0076da0b  57                   push edi
// 0076da0c  8bf1                 mov esi, ecx
// 0076da0e  e8cd4afbff           call 0x7224e0
// 0076da13  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 0076da19  898e74010000         mov dword ptr [esi + 0x174], ecx
// 0076da1f  8b9778010000         mov edx, dword ptr [edi + 0x178]
// 0076da25  899678010000         mov dword ptr [esi + 0x178], edx
// 0076da2b  8b877c010000         mov eax, dword ptr [edi + 0x17c]
// 0076da31  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0076da37  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 0076da3d  898e80010000         mov dword ptr [esi + 0x180], ecx
// 0076da43  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 0076da49  89968c010000         mov dword ptr [esi + 0x18c], edx
// 0076da4f  8b8790010000         mov eax, dword ptr [edi + 0x190]
// 0076da55  5f                   pop edi
// 0076da56  898690010000         mov dword ptr [esi + 0x190], eax
// 0076da5c  5e                   pop esi
// 0076da5d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?Copy@CXTPControlSelector@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
