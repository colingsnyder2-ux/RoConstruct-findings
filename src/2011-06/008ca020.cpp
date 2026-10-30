// roc 2011-06 008ca020  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ca020
//
// 008ca020  6aff                 push -1
// 008ca022  68f0c6a000           push 0xa0c6f0
// 008ca027  64a100000000         mov eax, dword ptr fs:[0]
// 008ca02d  50                   push eax
// 008ca02e  83ec30               sub esp, 0x30
// 008ca031  53                   push ebx
// 008ca032  55                   push ebp
// 008ca033  56                   push esi
// 008ca034  57                   push edi
// 008ca035  a12058c900           mov eax, dword ptr [0xc95820]
// 008ca03a  33c4                 xor eax, esp
// 008ca03c  50                   push eax
// 008ca03d  8d442444             lea eax, [esp + 0x44]
// 008ca041  64a300000000         mov dword ptr fs:[0], eax
// 008ca047  8bf9                 mov edi, ecx
// 008ca049  8b742458             mov esi, dword ptr [esp + 0x58]
// 008ca04d  8bce                 mov ecx, esi
// 008ca04f  33db                 xor ebx, ebx
// 008ca051  ff15b026a400         call dword ptr [0xa426b0]
// 008ca057  84c0                 test al, al
// 008ca059  7407                 je 0x8ca062
// 008ca05b  33c0                 xor eax, eax
// 008ca05d  e9f6000000           jmp 0x8ca158
// 008ca062  395c246c             cmp dword ptr [esp + 0x6c], ebx
// 008ca066  7471                 je 0x8ca0d9
// 008ca068  81c78c000000         add edi, 0x8c
// 008ca06e  57                   push edi
// 008ca06f  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 008ca073  57                   push edi
// 008ca074  8d4c242c             lea ecx, [esp + 0x2c]
// 008ca078  e8a330f9ff           call 0x85d120
// 008ca07d  56                   push esi
// 008ca07e  8d442418             lea eax, [esp + 0x18]
// 008ca082  50                   push eax
// 008ca083  8bcf                 mov ecx, edi
// 008ca085  895c2454             mov dword ptr [esp + 0x54], ebx
// 008ca089  e83217bcff           call 0x48b7c0
// 008ca08e  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008ca092  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 008ca096  3bdd                 cmp ebx, ebp
// 008ca098  7e35                 jle 0x8ca0cf
// 008ca09a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008ca09e  8bc1                 mov eax, ecx
// 008ca0a0  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 008ca0a4  6820890000           push 0x8920
// 008ca0a9  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 008ca0ad  99                   cdq 
// 008ca0ae  2bc2                 sub eax, edx
// 008ca0b0  d1f8                 sar eax, 1
// 008ca0b2  2bc8                 sub ecx, eax
// 008ca0b4  8bc1                 mov eax, ecx
// 008ca0b6  89442460             mov dword ptr [esp + 0x60], eax
// 008ca0ba  8d4c2460             lea ecx, [esp + 0x60]
// 008ca0be  2bc5                 sub eax, ebp
// 008ca0c0  51                   push ecx
// 008ca0c1  03c3                 add eax, ebx
// 008ca0c3  56                   push esi
// 008ca0c4  8bcf                 mov ecx, edi
// 008ca0c6  89442470             mov dword ptr [esp + 0x70], eax
// 008ca0ca  e82160f4ff           call 0x8100f0
// 008ca0cf  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008ca0d3  8d4c2424             lea ecx, [esp + 0x24]
// 008ca0d7  eb70                 jmp 0x8ca149
// 008ca0d9  81c784000000         add edi, 0x84
// 008ca0df  57                   push edi
// 008ca0e0  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 008ca0e4  57                   push edi
// 008ca0e5  8d4c243c             lea ecx, [esp + 0x3c]
// 008ca0e9  e83230f9ff           call 0x85d120
// 008ca0ee  8b2f                 mov ebp, dword ptr [edi]
// 008ca0f0  6824880000           push 0x8824
// 008ca0f5  8d542460             lea edx, [esp + 0x60]
// 008ca0f9  52                   push edx
// 008ca0fa  8bce                 mov ecx, esi
// 008ca0fc  c744245401000000     mov dword ptr [esp + 0x54], 1
// 008ca104  ff15a826a400         call dword ptr [0xa426a8]
// 008ca10a  50                   push eax
// 008ca10b  8bce                 mov ecx, esi
// 008ca10d  ff15c82da400         call dword ptr [0xa42dc8]
// 008ca113  50                   push eax
// 008ca114  8b4570               mov eax, dword ptr [ebp + 0x70]
// 008ca117  8bcf                 mov ecx, edi
// 008ca119  ffd0                 call eax
// 008ca11b  837c247000           cmp dword ptr [esp + 0x70], 0
// 008ca120  7423                 je 0x8ca145
// 008ca122  8d4c2414             lea ecx, [esp + 0x14]
// 008ca126  e8c52bf9ff           call 0x85ccf0
// 008ca12b  68200c0000           push 0xc20
// 008ca130  8d4c2418             lea ecx, [esp + 0x18]
// 008ca134  51                   push ecx
// 008ca135  56                   push esi
// 008ca136  8bcf                 mov ecx, edi
// 008ca138  e8b35ff4ff           call 0x8100f0
// 008ca13d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008ca141  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 008ca145  8d4c2434             lea ecx, [esp + 0x34]
// 008ca149  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 008ca151  e84a30f9ff           call 0x85d1a0
// 008ca156  8bc3                 mov eax, ebx
// 008ca158  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008ca15c  64890d00000000       mov dword ptr fs:[0], ecx
// 008ca163  59                   pop ecx
// 008ca164  5f                   pop edi
// 008ca165  5e                   pop esi
// 008ca166  5d                   pop ebp
// 008ca167  5b                   pop ebx
// 008ca168  83c43c               add esp, 0x3c
// 008ca16b  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawCaptionText@CXTPDockingPanePaintManager@@QAEHAAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPanePaintManager.cpp