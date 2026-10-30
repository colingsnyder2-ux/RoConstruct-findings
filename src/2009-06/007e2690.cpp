// roc 2009-06 007e2690  unit: CXTPDockingPaneContext  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e2690
//
// 007e2690  83ec14               sub esp, 0x14
// 007e2693  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 007e2699  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e269d  56                   push esi
// 007e269e  57                   push edi
// 007e269f  8bb8c8000000         mov edi, dword ptr [eax + 0xc8]
// 007e26a5  51                   push ecx
// 007e26a6  8d4c2410             lea ecx, [esp + 0x10]
// 007e26aa  897c240c             mov dword ptr [esp + 0xc], edi
// 007e26ae  e8bdddf8ff           call 0x770470
// 007e26b3  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e26b7  8b742420             mov esi, dword ptr [esp + 0x20]
// 007e26bb  2bd7                 sub edx, edi
// 007e26bd  39560c               cmp dword ptr [esi + 0xc], edx
// 007e26c0  0f8c31010000         jl 0x7e27f7
// 007e26c6  8b4604               mov eax, dword ptr [esi + 4]
// 007e26c9  55                   push ebp
// 007e26ca  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007e26ce  8d0c2f               lea ecx, [edi + ebp]
// 007e26d1  3bc1                 cmp eax, ecx
// 007e26d3  0f8f1d010000         jg 0x7e27f6
// 007e26d9  53                   push ebx
// 007e26da  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007e26de  8bd3                 mov edx, ebx
// 007e26e0  2bd7                 sub edx, edi
// 007e26e2  395608               cmp dword ptr [esi + 8], edx
// 007e26e5  0f8c0a010000         jl 0x7e27f5
// 007e26eb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e26ef  8d1439               lea edx, [ecx + edi]
// 007e26f2  3916                 cmp dword ptr [esi], edx
// 007e26f4  0f8ffb000000         jg 0x7e27f5
// 007e26fa  2be8                 sub ebp, eax
// 007e26fc  8bc5                 mov eax, ebp
// 007e26fe  99                   cdq 
// 007e26ff  33c2                 xor eax, edx
// 007e2701  2bc2                 sub eax, edx
// 007e2703  3bc7                 cmp eax, edi
// 007e2705  8b3df8ed8900         mov edi, dword ptr [0x89edf8]
// 007e270b  7d0e                 jge 0x7e271b
// 007e270d  55                   push ebp
// 007e270e  6a00                 push 0
// 007e2710  56                   push esi
// 007e2711  ffd7                 call edi
// 007e2713  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e2717  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007e271b  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 007e271e  8bc5                 mov eax, ebp
// 007e2720  2b442418             sub eax, dword ptr [esp + 0x18]
// 007e2724  99                   cdq 
// 007e2725  33c2                 xor eax, edx
// 007e2727  2bc2                 sub eax, edx
// 007e2729  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007e272d  7d14                 jge 0x7e2743
// 007e272f  8b442418             mov eax, dword ptr [esp + 0x18]
// 007e2733  2bc5                 sub eax, ebp
// 007e2735  50                   push eax
// 007e2736  6a00                 push 0
// 007e2738  56                   push esi
// 007e2739  ffd7                 call edi
// 007e273b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e273f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007e2743  8beb                 mov ebp, ebx
// 007e2745  2b6e08               sub ebp, dword ptr [esi + 8]
// 007e2748  8bc5                 mov eax, ebp
// 007e274a  99                   cdq 
// 007e274b  33c2                 xor eax, edx
// 007e274d  2bc2                 sub eax, edx
// 007e274f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007e2753  7d0e                 jge 0x7e2763
// 007e2755  6a00                 push 0
// 007e2757  55                   push ebp
// 007e2758  56                   push esi
// 007e2759  ffd7                 call edi
// 007e275b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e275f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007e2763  8b2e                 mov ebp, dword ptr [esi]
// 007e2765  8bc5                 mov eax, ebp
// 007e2767  2bc1                 sub eax, ecx
// 007e2769  99                   cdq 
// 007e276a  33c2                 xor eax, edx
// 007e276c  2bc2                 sub eax, edx
// 007e276e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007e2772  7d10                 jge 0x7e2784
// 007e2774  6a00                 push 0
// 007e2776  2bcd                 sub ecx, ebp
// 007e2778  51                   push ecx
// 007e2779  56                   push esi
// 007e277a  ffd7                 call edi
// 007e277c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e2780  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007e2784  8b2e                 mov ebp, dword ptr [esi]
// 007e2786  8bc5                 mov eax, ebp
// 007e2788  2bc3                 sub eax, ebx
// 007e278a  99                   cdq 
// 007e278b  33c2                 xor eax, edx
// 007e278d  2bc2                 sub eax, edx
// 007e278f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007e2793  7d0c                 jge 0x7e27a1
// 007e2795  6a00                 push 0
// 007e2797  2bdd                 sub ebx, ebp
// 007e2799  53                   push ebx
// 007e279a  56                   push esi
// 007e279b  ffd7                 call edi
// 007e279d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e27a1  8b5e08               mov ebx, dword ptr [esi + 8]
// 007e27a4  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007e27a8  8bc3                 mov eax, ebx
// 007e27aa  2bc1                 sub eax, ecx
// 007e27ac  99                   cdq 
// 007e27ad  33c2                 xor eax, edx
// 007e27af  2bc2                 sub eax, edx
// 007e27b1  3bc5                 cmp eax, ebp
// 007e27b3  7d08                 jge 0x7e27bd
// 007e27b5  6a00                 push 0
// 007e27b7  2bcb                 sub ecx, ebx
// 007e27b9  51                   push ecx
// 007e27ba  56                   push esi
// 007e27bb  ffd7                 call edi
// 007e27bd  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 007e27c0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007e27c4  8bc3                 mov eax, ebx
// 007e27c6  2bc1                 sub eax, ecx
// 007e27c8  99                   cdq 
// 007e27c9  33c2                 xor eax, edx
// 007e27cb  2bc2                 sub eax, edx
// 007e27cd  3bc5                 cmp eax, ebp
// 007e27cf  7d08                 jge 0x7e27d9
// 007e27d1  2bcb                 sub ecx, ebx
// 007e27d3  51                   push ecx
// 007e27d4  6a00                 push 0
// 007e27d6  56                   push esi
// 007e27d7  ffd7                 call edi
// 007e27d9  8b5e04               mov ebx, dword ptr [esi + 4]
// 007e27dc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007e27e0  8bc3                 mov eax, ebx
// 007e27e2  2bc1                 sub eax, ecx
// 007e27e4  99                   cdq 
// 007e27e5  33c2                 xor eax, edx
// 007e27e7  2bc2                 sub eax, edx
// 007e27e9  3bc5                 cmp eax, ebp
// 007e27eb  7d08                 jge 0x7e27f5
// 007e27ed  2bcb                 sub ecx, ebx
// 007e27ef  51                   push ecx
// 007e27f0  6a00                 push 0
// 007e27f2  56                   push esi
// 007e27f3  ffd7                 call edi
// 007e27f5  5b                   pop ebx
// 007e27f6  5d                   pop ebp
// 007e27f7  5f                   pop edi
// 007e27f8  5e                   pop esi
// 007e27f9  83c414               add esp, 0x14
// 007e27fc  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@IAEXAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
