// roc 2012-06 00a0ae40  unit: CXTPControlGalleryOffice2007Theme  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0ae40
//
// 00a0ae40  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a0ae44  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00a0ae48  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0ae4c  49                   dec ecx
// 00a0ae4d  0fafc1               imul eax, ecx
// 00a0ae50  50                   push eax
// 00a0ae51  6a00                 push 0
// 00a0ae53  8d542410             lea edx, [esp + 0x10]
// 00a0ae57  52                   push edx
// 00a0ae58  ff15f43ab200         call dword ptr [0xb23af4]
// 00a0ae5e  8b442404             mov eax, dword ptr [esp + 4]
// 00a0ae62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a0ae66  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a0ae6a  8908                 mov dword ptr [eax], ecx
// 00a0ae6c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a0ae70  895004               mov dword ptr [eax + 4], edx
// 00a0ae73  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a0ae77  894808               mov dword ptr [eax + 8], ecx
// 00a0ae7a  89500c               mov dword ptr [eax + 0xc], edx
// 00a0ae7d  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPResourceTheme.cpp (function ?OffsetSourceRect@@YA?AVCRect@@V1@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPResourceTheme.cpp
