// from server: 100% by auto
// roc 2011-06 00892860  unit: CXTPControlGalleryOffice2007Theme  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00892860
//
// 00892860  8b442414             mov eax, dword ptr [esp + 0x14]
// 00892864  2b44240c             sub eax, dword ptr [esp + 0xc]
// 00892868  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089286c  49                   dec ecx
// 0089286d  0fafc1               imul eax, ecx
// 00892870  50                   push eax
// 00892871  6a00                 push 0
// 00892873  8d542410             lea edx, [esp + 0x10]
// 00892877  52                   push edx
// 00892878  ff15601ca400         call dword ptr [0xa41c60]
// 0089287e  8b442404             mov eax, dword ptr [esp + 4]
// 00892882  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00892886  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0089288a  8908                 mov dword ptr [eax], ecx
// 0089288c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00892890  895004               mov dword ptr [eax + 4], edx
// 00892893  8b542414             mov edx, dword ptr [esp + 0x14]
// 00892897  894808               mov dword ptr [eax + 8], ecx
// 0089289a  89500c               mov dword ptr [eax + 0xc], edx
// 0089289d  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPResourceTheme.cpp (function ?OffsetSourceRect@@YA?AVCRect@@V1@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPResourceTheme.cpp
