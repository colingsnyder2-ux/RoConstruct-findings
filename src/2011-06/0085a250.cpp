// roc 2011-06 0085a250  unit: CXTPControlSelector  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085a250
//
// 0085a250  8b442408             mov eax, dword ptr [esp + 8]
// 0085a254  56                   push esi
// 0085a255  57                   push edi
// 0085a256  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085a25a  50                   push eax
// 0085a25b  57                   push edi
// 0085a25c  8bf1                 mov esi, ecx
// 0085a25e  e87d50fbff           call 0x80f2e0
// 0085a263  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 0085a269  898e74010000         mov dword ptr [esi + 0x174], ecx
// 0085a26f  8b9778010000         mov edx, dword ptr [edi + 0x178]
// 0085a275  899678010000         mov dword ptr [esi + 0x178], edx
// 0085a27b  8b877c010000         mov eax, dword ptr [edi + 0x17c]
// 0085a281  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0085a287  8b8f80010000         mov ecx, dword ptr [edi + 0x180]
// 0085a28d  898e80010000         mov dword ptr [esi + 0x180], ecx
// 0085a293  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 0085a299  89968c010000         mov dword ptr [esi + 0x18c], edx
// 0085a29f  8b8790010000         mov eax, dword ptr [edi + 0x190]
// 0085a2a5  5f                   pop edi
// 0085a2a6  898690010000         mov dword ptr [esi + 0x190], eax
// 0085a2ac  5e                   pop esi
// 0085a2ad  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?Copy@CXTPControlSelector@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
