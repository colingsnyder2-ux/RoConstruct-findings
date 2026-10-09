// roc 2007-03 006cb680  unit: seg_006c0000  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cb680
//
// 006cb680  83ec28               sub esp, 0x28
// 006cb683  56                   push esi
// 006cb684  8b742430             mov esi, dword ptr [esp + 0x30]
// 006cb688  57                   push edi
// 006cb689  56                   push esi
// 006cb68a  8bf9                 mov edi, ecx
// 006cb68c  e8cfdfffff           call 0x6c9660
// 006cb691  8b07                 mov eax, dword ptr [edi]
// 006cb693  8b5014               mov edx, dword ptr [eax + 0x14]
// 006cb696  8bcf                 mov ecx, edi
// 006cb698  ffd2                 call edx
// 006cb69a  85c0                 test eax, eax
// 006cb69c  0f85da000000         jne 0x6cb77c
// 006cb6a2  53                   push ebx
// 006cb6a3  8d5fac               lea ebx, [edi - 0x54]
// 006cb6a6  8bcb                 mov ecx, ebx
// 006cb6a8  e8d3fdffff           call 0x6cb480
// 006cb6ad  85c0                 test eax, eax
// 006cb6af  744b                 je 0x6cb6fc
// 006cb6b1  8b4710               mov eax, dword ptr [edi + 0x10]
// 006cb6b4  85c0                 test eax, eax
// 006cb6b6  7405                 je 0x6cb6bd
// 006cb6b8  83c0e0               add eax, -0x20
// 006cb6bb  eb02                 jmp 0x6cb6bf
// 006cb6bd  33c0                 xor eax, eax
// 006cb6bf  83b89000000000       cmp dword ptr [eax + 0x90], 0
// 006cb6c6  741a                 je 0x6cb6e2
// 006cb6c8  6a00                 push 0
// 006cb6ca  56                   push esi
// 006cb6cb  8bcb                 mov ecx, ebx
// 006cb6cd  c7462000000000       mov dword ptr [esi + 0x20], 0
// 006cb6d4  e827f3ffff           call 0x6caa00
// 006cb6d9  5b                   pop ebx
// 006cb6da  5f                   pop edi
// 006cb6db  5e                   pop esi
// 006cb6dc  83c428               add esp, 0x28
// 006cb6df  c20400               ret 4
// 006cb6e2  6a00                 push 0
// 006cb6e4  56                   push esi
// 006cb6e5  8bcb                 mov ecx, ebx
// 006cb6e7  c7462400000000       mov dword ptr [esi + 0x24], 0
// 006cb6ee  e80df3ffff           call 0x6caa00
// 006cb6f3  5b                   pop ebx
// 006cb6f4  5f                   pop edi
// 006cb6f5  5e                   pop esi
// 006cb6f6  83c428               add esp, 0x28
// 006cb6f9  c20400               ret 4
// 006cb6fc  8bcf                 mov ecx, edi
// 006cb6fe  e8edfff9ff           call 0x66b6f0
// 006cb703  85c0                 test eax, eax
// 006cb705  89442438             mov dword ptr [esp + 0x38], eax
// 006cb709  7466                 je 0x6cb771
// 006cb70b  eb03                 jmp 0x6cb710
// 006cb70d  8d4900               lea ecx, [ecx]
// 006cb710  8d442438             lea eax, [esp + 0x38]
// 006cb714  50                   push eax
// 006cb715  8bcf                 mov ecx, edi
// 006cb717  e8049b0400           call 0x715220
// 006cb71c  8b10                 mov edx, dword ptr [eax]
// 006cb71e  8b5210               mov edx, dword ptr [edx + 0x10]
// 006cb721  8d4c240c             lea ecx, [esp + 0xc]
// 006cb725  51                   push ecx
// 006cb726  8bc8                 mov ecx, eax
// 006cb728  ffd2                 call edx
// 006cb72a  8b4618               mov eax, dword ptr [esi + 0x18]
// 006cb72d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006cb731  3bc1                 cmp eax, ecx
// 006cb733  7f02                 jg 0x6cb737
// 006cb735  8bc1                 mov eax, ecx
// 006cb737  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006cb73b  894618               mov dword ptr [esi + 0x18], eax
// 006cb73e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006cb741  3bc1                 cmp eax, ecx
// 006cb743  7f02                 jg 0x6cb747
// 006cb745  8bc1                 mov eax, ecx
// 006cb747  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006cb74b  89461c               mov dword ptr [esi + 0x1c], eax
// 006cb74e  8b4620               mov eax, dword ptr [esi + 0x20]
// 006cb751  3bc1                 cmp eax, ecx
// 006cb753  7c02                 jl 0x6cb757
// 006cb755  8bc1                 mov eax, ecx
// 006cb757  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006cb75b  894620               mov dword ptr [esi + 0x20], eax
// 006cb75e  8b4624               mov eax, dword ptr [esi + 0x24]
// 006cb761  3bc1                 cmp eax, ecx
// 006cb763  7c02                 jl 0x6cb767
// 006cb765  8bc1                 mov eax, ecx
// 006cb767  837c243800           cmp dword ptr [esp + 0x38], 0
// 006cb76c  894624               mov dword ptr [esi + 0x24], eax
// 006cb76f  759f                 jne 0x6cb710
// 006cb771  6a00                 push 0
// 006cb773  56                   push esi
// 006cb774  8bcb                 mov ecx, ebx
// 006cb776  e885f2ffff           call 0x6caa00
// 006cb77b  5b                   pop ebx
// 006cb77c  5f                   pop edi
// 006cb77d  5e                   pop esi
// 006cb77e  83c428               add esp, 0x28
// 006cb781  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetMinMaxInfo@CXTPDockingPaneTabbedContainer@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
