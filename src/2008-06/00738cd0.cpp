// roc 2008-06 00738cd0  unit: CXTPControlGalleryOffice2007Theme  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00738cd0
//
// 00738cd0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00738cd4  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00738cd8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00738cdc  49                   dec ecx
// 00738cdd  0fafc1               imul eax, ecx
// 00738ce0  50                   push eax
// 00738ce1  6a00                 push 0
// 00738ce3  8d542410             lea edx, [esp + 0x10]
// 00738ce7  52                   push edx
// 00738ce8  ff15682d8000         call dword ptr [0x802d68]
// 00738cee  8b442404             mov eax, dword ptr [esp + 4]
// 00738cf2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00738cf6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00738cfa  8908                 mov dword ptr [eax], ecx
// 00738cfc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00738d00  895004               mov dword ptr [eax + 4], edx
// 00738d03  8b542414             mov edx, dword ptr [esp + 0x14]
// 00738d07  894808               mov dword ptr [eax + 8], ecx
// 00738d0a  89500c               mov dword ptr [eax + 0xc], edx
// 00738d0d  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?OffsetSourceRect@@YA?AVCRect@@V1@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
