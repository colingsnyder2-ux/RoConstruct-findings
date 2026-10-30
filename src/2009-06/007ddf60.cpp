// roc 2009-06 007ddf60  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ddf60
//
// 007ddf60  6aff                 push -1
// 007ddf62  6870f48700           push 0x87f470
// 007ddf67  64a100000000         mov eax, dword ptr fs:[0]
// 007ddf6d  50                   push eax
// 007ddf6e  83ec30               sub esp, 0x30
// 007ddf71  53                   push ebx
// 007ddf72  55                   push ebp
// 007ddf73  56                   push esi
// 007ddf74  57                   push edi
// 007ddf75  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007ddf7a  33c4                 xor eax, esp
// 007ddf7c  50                   push eax
// 007ddf7d  8d442444             lea eax, [esp + 0x44]
// 007ddf81  64a300000000         mov dword ptr fs:[0], eax
// 007ddf87  8bf9                 mov edi, ecx
// 007ddf89  8b742458             mov esi, dword ptr [esp + 0x58]
// 007ddf8d  8bce                 mov ecx, esi
// 007ddf8f  33db                 xor ebx, ebx
// 007ddf91  ff155cfb8900         call dword ptr [0x89fb5c]
// 007ddf97  84c0                 test al, al
// 007ddf99  7407                 je 0x7ddfa2
// 007ddf9b  33c0                 xor eax, eax
// 007ddf9d  e9f6000000           jmp 0x7de098
// 007ddfa2  395c246c             cmp dword ptr [esp + 0x6c], ebx
// 007ddfa6  7471                 je 0x7de019
// 007ddfa8  81c78c000000         add edi, 0x8c
// 007ddfae  57                   push edi
// 007ddfaf  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 007ddfb3  57                   push edi
// 007ddfb4  8d4c242c             lea ecx, [esp + 0x2c]
// 007ddfb8  e8a328f9ff           call 0x770860
// 007ddfbd  56                   push esi
// 007ddfbe  8d442418             lea eax, [esp + 0x18]
// 007ddfc2  50                   push eax
// 007ddfc3  8bcf                 mov ecx, edi
// 007ddfc5  895c2454             mov dword ptr [esp + 0x54], ebx
// 007ddfc9  e83248c8ff           call 0x462800
// 007ddfce  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 007ddfd2  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 007ddfd6  3bdd                 cmp ebx, ebp
// 007ddfd8  7e35                 jle 0x7de00f
// 007ddfda  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007ddfde  8bc1                 mov eax, ecx
// 007ddfe0  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 007ddfe4  6820890000           push 0x8920
// 007ddfe9  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 007ddfed  99                   cdq 
// 007ddfee  2bc2                 sub eax, edx
// 007ddff0  d1f8                 sar eax, 1
// 007ddff2  2bc8                 sub ecx, eax
// 007ddff4  8bc1                 mov eax, ecx
// 007ddff6  89442460             mov dword ptr [esp + 0x60], eax
// 007ddffa  8d4c2460             lea ecx, [esp + 0x60]
// 007ddffe  2bc5                 sub eax, ebp
// 007de000  51                   push ecx
// 007de001  03c3                 add eax, ebx
// 007de003  56                   push esi
// 007de004  8bcf                 mov ecx, edi
// 007de006  89442470             mov dword ptr [esp + 0x70], eax
// 007de00a  e881d9f3ff           call 0x71b990
// 007de00f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007de013  8d4c2424             lea ecx, [esp + 0x24]
// 007de017  eb70                 jmp 0x7de089
// 007de019  81c784000000         add edi, 0x84
// 007de01f  57                   push edi
// 007de020  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 007de024  57                   push edi
// 007de025  8d4c243c             lea ecx, [esp + 0x3c]
// 007de029  e83228f9ff           call 0x770860
// 007de02e  8b2f                 mov ebp, dword ptr [edi]
// 007de030  6824880000           push 0x8824
// 007de035  8d542460             lea edx, [esp + 0x60]
// 007de039  52                   push edx
// 007de03a  8bce                 mov ecx, esi
// 007de03c  c744245401000000     mov dword ptr [esp + 0x54], 1
// 007de044  ff1554fb8900         call dword ptr [0x89fb54]
// 007de04a  50                   push eax
// 007de04b  8bce                 mov ecx, esi
// 007de04d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007de053  50                   push eax
// 007de054  8b4570               mov eax, dword ptr [ebp + 0x70]
// 007de057  8bcf                 mov ecx, edi
// 007de059  ffd0                 call eax
// 007de05b  837c247000           cmp dword ptr [esp + 0x70], 0
// 007de060  7423                 je 0x7de085
// 007de062  8d4c2414             lea ecx, [esp + 0x14]
// 007de066  e8c523f9ff           call 0x770430
// 007de06b  68200c0000           push 0xc20
// 007de070  8d4c2418             lea ecx, [esp + 0x18]
// 007de074  51                   push ecx
// 007de075  56                   push esi
// 007de076  8bcf                 mov ecx, edi
// 007de078  e813d9f3ff           call 0x71b990
// 007de07d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007de081  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 007de085  8d4c2434             lea ecx, [esp + 0x34]
// 007de089  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 007de091  e84a28f9ff           call 0x7708e0
// 007de096  8bc3                 mov eax, ebx
// 007de098  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007de09c  64890d00000000       mov dword ptr fs:[0], ecx
// 007de0a3  59                   pop ecx
// 007de0a4  5f                   pop edi
// 007de0a5  5e                   pop esi
// 007de0a6  5d                   pop ebp
// 007de0a7  5b                   pop ebx
// 007de0a8  83c43c               add esp, 0x3c
// 007de0ab  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawCaptionText@CXTPDockingPanePaintManager@@QAEHAAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPanePaintManager.cpp