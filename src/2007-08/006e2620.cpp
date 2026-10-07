// roc 2007-08 006e2620  unit: CXTPDockingPaneTabbedContainer  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e2620
//
// 006e2620  83ec28               sub esp, 0x28
// 006e2623  56                   push esi
// 006e2624  8b742430             mov esi, dword ptr [esp + 0x30]
// 006e2628  57                   push edi
// 006e2629  56                   push esi
// 006e262a  8bf9                 mov edi, ecx
// 006e262c  e85fe0ffff           call 0x6e0690
// 006e2631  8b07                 mov eax, dword ptr [edi]
// 006e2633  8b5014               mov edx, dword ptr [eax + 0x14]
// 006e2636  8bcf                 mov ecx, edi
// 006e2638  ffd2                 call edx
// 006e263a  85c0                 test eax, eax
// 006e263c  0f85da000000         jne 0x6e271c
// 006e2642  53                   push ebx
// 006e2643  8d5fac               lea ebx, [edi - 0x54]
// 006e2646  8bcb                 mov ecx, ebx
// 006e2648  e8d3fdffff           call 0x6e2420
// 006e264d  85c0                 test eax, eax
// 006e264f  744b                 je 0x6e269c
// 006e2651  8b4710               mov eax, dword ptr [edi + 0x10]
// 006e2654  85c0                 test eax, eax
// 006e2656  7405                 je 0x6e265d
// 006e2658  83c0e0               add eax, -0x20
// 006e265b  eb02                 jmp 0x6e265f
// 006e265d  33c0                 xor eax, eax
// 006e265f  83b89000000000       cmp dword ptr [eax + 0x90], 0
// 006e2666  741a                 je 0x6e2682
// 006e2668  6a00                 push 0
// 006e266a  56                   push esi
// 006e266b  8bcb                 mov ecx, ebx
// 006e266d  c7462000000000       mov dword ptr [esi + 0x20], 0
// 006e2674  e8f7f2ffff           call 0x6e1970
// 006e2679  5b                   pop ebx
// 006e267a  5f                   pop edi
// 006e267b  5e                   pop esi
// 006e267c  83c428               add esp, 0x28
// 006e267f  c20400               ret 4
// 006e2682  6a00                 push 0
// 006e2684  56                   push esi
// 006e2685  8bcb                 mov ecx, ebx
// 006e2687  c7462400000000       mov dword ptr [esi + 0x24], 0
// 006e268e  e8ddf2ffff           call 0x6e1970
// 006e2693  5b                   pop ebx
// 006e2694  5f                   pop edi
// 006e2695  5e                   pop esi
// 006e2696  83c428               add esp, 0x28
// 006e2699  c20400               ret 4
// 006e269c  8bcf                 mov ecx, edi
// 006e269e  e8bdbef7ff           call 0x65e560
// 006e26a3  85c0                 test eax, eax
// 006e26a5  89442438             mov dword ptr [esp + 0x38], eax
// 006e26a9  7466                 je 0x6e2711
// 006e26ab  eb03                 jmp 0x6e26b0
// 006e26ad  8d4900               lea ecx, [ecx]
// 006e26b0  8d442438             lea eax, [esp + 0x38]
// 006e26b4  50                   push eax
// 006e26b5  8bcf                 mov ecx, edi
// 006e26b7  e8a4d30300           call 0x71fa60
// 006e26bc  8b10                 mov edx, dword ptr [eax]
// 006e26be  8b5210               mov edx, dword ptr [edx + 0x10]
// 006e26c1  8d4c240c             lea ecx, [esp + 0xc]
// 006e26c5  51                   push ecx
// 006e26c6  8bc8                 mov ecx, eax
// 006e26c8  ffd2                 call edx
// 006e26ca  8b4618               mov eax, dword ptr [esi + 0x18]
// 006e26cd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e26d1  3bc1                 cmp eax, ecx
// 006e26d3  7f02                 jg 0x6e26d7
// 006e26d5  8bc1                 mov eax, ecx
// 006e26d7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006e26db  894618               mov dword ptr [esi + 0x18], eax
// 006e26de  8b461c               mov eax, dword ptr [esi + 0x1c]
// 006e26e1  3bc1                 cmp eax, ecx
// 006e26e3  7f02                 jg 0x6e26e7
// 006e26e5  8bc1                 mov eax, ecx
// 006e26e7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006e26eb  89461c               mov dword ptr [esi + 0x1c], eax
// 006e26ee  8b4620               mov eax, dword ptr [esi + 0x20]
// 006e26f1  3bc1                 cmp eax, ecx
// 006e26f3  7c02                 jl 0x6e26f7
// 006e26f5  8bc1                 mov eax, ecx
// 006e26f7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006e26fb  894620               mov dword ptr [esi + 0x20], eax
// 006e26fe  8b4624               mov eax, dword ptr [esi + 0x24]
// 006e2701  3bc1                 cmp eax, ecx
// 006e2703  7c02                 jl 0x6e2707
// 006e2705  8bc1                 mov eax, ecx
// 006e2707  837c243800           cmp dword ptr [esp + 0x38], 0
// 006e270c  894624               mov dword ptr [esi + 0x24], eax
// 006e270f  759f                 jne 0x6e26b0
// 006e2711  6a00                 push 0
// 006e2713  56                   push esi
// 006e2714  8bcb                 mov ecx, ebx
// 006e2716  e855f2ffff           call 0x6e1970
// 006e271b  5b                   pop ebx
// 006e271c  5f                   pop edi
// 006e271d  5e                   pop esi
// 006e271e  83c428               add esp, 0x28
// 006e2721  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetMinMaxInfo@CXTPDockingPaneTabbedContainer@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
