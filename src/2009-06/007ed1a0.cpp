// roc 2009-06 007ed1a0  unit: VCEdit::?$CXTMaskEditT  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ed1a0
//
// 007ed1a0  6aff                 push -1
// 007ed1a2  68da068800           push 0x8806da
// 007ed1a7  64a100000000         mov eax, dword ptr fs:[0]
// 007ed1ad  50                   push eax
// 007ed1ae  83ec08               sub esp, 8
// 007ed1b1  53                   push ebx
// 007ed1b2  55                   push ebp
// 007ed1b3  56                   push esi
// 007ed1b4  57                   push edi
// 007ed1b5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007ed1ba  33c4                 xor eax, esp
// 007ed1bc  50                   push eax
// 007ed1bd  8d44241c             lea eax, [esp + 0x1c]
// 007ed1c1  64a300000000         mov dword ptr fs:[0], eax
// 007ed1c7  8bd9                 mov ebx, ecx
// 007ed1c9  895c2414             mov dword ptr [esp + 0x14], ebx
// 007ed1cd  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007ed1d1  83eb80               sub ebx, -0x80
// 007ed1d4  33f6                 xor esi, esi
// 007ed1d6  8bcb                 mov ecx, ebx
// 007ed1d8  89742418             mov dword ptr [esp + 0x18], esi
// 007ed1dc  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed1e2  83ffff               cmp edi, -1
// 007ed1e5  740c                 je 0x7ed1f3
// 007ed1e7  3bf8                 cmp edi, eax
// 007ed1e9  7c0a                 jl 0x7ed1f5
// 007ed1eb  8bcb                 mov ecx, ebx
// 007ed1ed  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed1f3  8bf8                 mov edi, eax
// 007ed1f5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007ed1f9  8bcd                 mov ecx, ebp
// 007ed1fb  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007ed201  89742424             mov dword ptr [esp + 0x24], esi
// 007ed205  8b742430             mov esi, dword ptr [esp + 0x30]
// 007ed209  3bf7                 cmp esi, edi
// 007ed20b  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007ed213  7d4f                 jge 0x7ed264
// 007ed215  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007ed219  81c584000000         add ebp, 0x84
// 007ed21f  90                   nop 
// 007ed220  85f6                 test esi, esi
// 007ed222  7c35                 jl 0x7ed259
// 007ed224  8bcd                 mov ecx, ebp
// 007ed226  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed22c  3bf0                 cmp esi, eax
// 007ed22e  7d29                 jge 0x7ed259
// 007ed230  56                   push esi
// 007ed231  8bcd                 mov ecx, ebp
// 007ed233  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ed239  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ed23d  3a416c               cmp al, byte ptr [ecx + 0x6c]
// 007ed240  7517                 jne 0x7ed259
// 007ed242  56                   push esi
// 007ed243  8bcb                 mov ecx, ebx
// 007ed245  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ed24b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007ed24f  0fb6d0               movzx edx, al
// 007ed252  52                   push edx
// 007ed253  ff15b4ff8900         call dword ptr [0x89ffb4]
// 007ed259  46                   inc esi
// 007ed25a  3bf7                 cmp esi, edi
// 007ed25c  7cc2                 jl 0x7ed220
// 007ed25e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007ed262  eb02                 jmp 0x7ed266
// 007ed264  8bc5                 mov eax, ebp
// 007ed266  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ed26a  64890d00000000       mov dword ptr fs:[0], ecx
// 007ed271  59                   pop ecx
// 007ed272  5f                   pop edi
// 007ed273  5e                   pop esi
// 007ed274  5d                   pop ebp
// 007ed275  5b                   pop ebx
// 007ed276  83c414               add esp, 0x14
// 007ed279  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetMaskedText@?$CXTMaskEditT@VCEdit@@@@QBE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@HH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp