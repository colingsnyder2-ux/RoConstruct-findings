// from server: 100% by auto
// roc 2007-08 006bdd50  unit: CXTPControlGalleryOffice2007Theme  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006bdd50
//
// 006bdd50  8b442414             mov eax, dword ptr [esp + 0x14]
// 006bdd54  2b44240c             sub eax, dword ptr [esp + 0xc]
// 006bdd58  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006bdd5c  83c1ff               add ecx, -1
// 006bdd5f  0fafc1               imul eax, ecx
// 006bdd62  50                   push eax
// 006bdd63  6a00                 push 0
// 006bdd65  8d542410             lea edx, [esp + 0x10]
// 006bdd69  52                   push edx
// 006bdd6a  ff15d8ed7700         call dword ptr [0x77edd8]
// 006bdd70  8b442404             mov eax, dword ptr [esp + 4]
// 006bdd74  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006bdd78  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006bdd7c  8908                 mov dword ptr [eax], ecx
// 006bdd7e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006bdd82  895004               mov dword ptr [eax + 4], edx
// 006bdd85  8b542414             mov edx, dword ptr [esp + 0x14]
// 006bdd89  894808               mov dword ptr [eax + 8], ecx
// 006bdd8c  89500c               mov dword ptr [eax + 0xc], edx
// 006bdd8f  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOffice2007Theme.cpp (function ?OffsetSourceRect@@YA?AVCRect@@V1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOffice2007Theme.cpp
