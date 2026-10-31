// roc 2009-12 00406630  unit: VCApp::?$CComObject  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406630
//
// 00406630  55                   push ebp
// 00406631  8bec                 mov ebp, esp
// 00406633  6aff                 push -1
// 00406635  6823729200           push 0x927223
// 0040663a  64a100000000         mov eax, dword ptr fs:[0]
// 00406640  50                   push eax
// 00406641  64892500000000       mov dword ptr fs:[0], esp
// 00406648  83ec1c               sub esp, 0x1c
// 0040664b  53                   push ebx
// 0040664c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040664f  8b03                 mov eax, dword ptr [ebx]
// 00406651  8b500c               mov edx, dword ptr [eax + 0xc]
// 00406654  56                   push esi
// 00406655  57                   push edi
// 00406656  8bf9                 mov edi, ecx
// 00406658  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040665b  8d4de0               lea ecx, [ebp - 0x20]
// 0040665e  51                   push ecx
// 0040665f  53                   push ebx
// 00406660  897ddc               mov dword ptr [ebp - 0x24], edi
// 00406663  ffd2                 call edx
// 00406665  33c9                 xor ecx, ecx
// 00406667  3bc1                 cmp eax, ecx
// 00406669  0f8c3b010000         jl 0x4067aa
// 0040666f  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00406672  0fb7502c             movzx edx, word ptr [eax + 0x2c]
// 00406676  894de4               mov dword ptr [ebp - 0x1c], ecx
// 00406679  895718               mov dword ptr [edi + 0x18], edx
// 0040667c  894f14               mov dword ptr [edi + 0x14], ecx
// 0040667f  3bd1                 cmp edx, ecx
// 00406681  7468                 je 0x4066eb
// 00406683  8bfa                 mov edi, edx
// 00406685  8bc7                 mov eax, edi
// 00406687  ba0c000000           mov edx, 0xc
// 0040668c  f7e2                 mul edx
// 0040668e  894dfc               mov dword ptr [ebp - 4], ecx
// 00406691  0f90c1               seto cl
// 00406694  f7d9                 neg ecx
// 00406696  0bc8                 or ecx, eax
// 00406698  33c0                 xor eax, eax
// 0040669a  83c104               add ecx, 4
// 0040669d  0f92c0               setb al
// 004066a0  f7d8                 neg eax
// 004066a2  0bc1                 or eax, ecx
// 004066a4  50                   push eax
// 004066a5  e898d43e00           call 0x7f3b42
// 004066aa  83c404               add esp, 4
// 004066ad  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004066b0  c645fc01             mov byte ptr [ebp - 4], 1
// 004066b4  85c0                 test eax, eax
// 004066b6  741a                 je 0x4066d2
// 004066b8  6890204000           push 0x402090
// 004066bd  6830654000           push 0x406530
// 004066c2  57                   push edi
// 004066c3  8d7004               lea esi, [eax + 4]
// 004066c6  6a0c                 push 0xc
// 004066c8  56                   push esi
// 004066c9  8938                 mov dword ptr [eax], edi
// 004066cb  e8e0e33e00           call 0x7f4ab0
// 004066d0  eb02                 jmp 0x4066d4
// 004066d2  33f6                 xor esi, esi
// 004066d4  8975e4               mov dword ptr [ebp - 0x1c], esi
// 004066d7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004066de  85f6                 test esi, esi
// 004066e0  0f84f1000000         je 0x4067d7
// 004066e6  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 004066e9  33c9                 xor ecx, ecx
// 004066eb  394f18               cmp dword ptr [edi + 0x18], ecx
// 004066ee  894de8               mov dword ptr [ebp - 0x18], ecx
// 004066f1  0f8ea1000000         jle 0x406798
// 004066f7  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004066fa  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004066fd  8b0b                 mov ecx, dword ptr [ebx]
// 004066ff  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00406702  8d55ec               lea edx, [ebp - 0x14]
// 00406705  52                   push edx
// 00406706  50                   push eax
// 00406707  53                   push ebx
// 00406708  ffd1                 call ecx
// 0040670a  85c0                 test eax, eax
// 0040670c  7c77                 jl 0x406785
// 0040670e  c7450800000000       mov dword ptr [ebp + 8], 0
// 00406715  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00406718  8b13                 mov edx, dword ptr [ebx]
// 0040671a  6a00                 push 0
// 0040671c  6a00                 push 0
// 0040671e  6a00                 push 0
// 00406720  8d4508               lea eax, [ebp + 8]
// 00406723  50                   push eax
// 00406724  8b01                 mov eax, dword ptr [ecx]
// 00406726  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 00406729  50                   push eax
// 0040672a  53                   push ebx
// 0040672b  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00406732  ffd1                 call ecx
// 00406734  85c0                 test eax, eax
// 00406736  7c30                 jl 0x406768
// 00406738  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040673b  8b06                 mov eax, dword ptr [esi]
// 0040673d  c7450800000000       mov dword ptr [ebp + 8], 0
// 00406744  3bc7                 cmp eax, edi
// 00406746  7409                 je 0x406751
// 00406748  50                   push eax
// 00406749  ff1590ba9800         call dword ptr [0x98ba90]
// 0040674f  893e                 mov dword ptr [esi], edi
// 00406751  8b06                 mov eax, dword ptr [esi]
// 00406753  50                   push eax
// 00406754  ff1520ba9800         call dword ptr [0x98ba20]
// 0040675a  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0040675d  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 00406760  894604               mov dword ptr [esi + 4], eax
// 00406763  8b02                 mov eax, dword ptr [edx]
// 00406765  894608               mov dword ptr [esi + 8], eax
// 00406768  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0040676b  8b0b                 mov ecx, dword ptr [ebx]
// 0040676d  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00406770  52                   push edx
// 00406771  53                   push ebx
// 00406772  ffd0                 call eax
// 00406774  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00406777  51                   push ecx
// 00406778  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040677f  ff1590ba9800         call dword ptr [0x98ba90]
// 00406785  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00406788  40                   inc eax
// 00406789  83c60c               add esi, 0xc
// 0040678c  3b4718               cmp eax, dword ptr [edi + 0x18]
// 0040678f  8945e8               mov dword ptr [ebp - 0x18], eax
// 00406792  0f8c62ffffff         jl 0x4066fa
// 00406798  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 0040679b  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0040679e  895714               mov dword ptr [edi + 0x14], edx
// 004067a1  8b03                 mov eax, dword ptr [ebx]
// 004067a3  8b504c               mov edx, dword ptr [eax + 0x4c]
// 004067a6  51                   push ecx
// 004067a7  53                   push ebx
// 004067a8  ffd2                 call edx
// 004067aa  33c0                 xor eax, eax
// 004067ac  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004067af  64890d00000000       mov dword ptr fs:[0], ecx
// 004067b6  5f                   pop edi
// 004067b7  5e                   pop esi
// 004067b8  5b                   pop ebx
// 004067b9  8be5                 mov esp, ebp
// 004067bb  5d                   pop ebp
// 004067bc  c20400               ret 4
// 004067bf  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 004067c2  e875d33e00           call 0x7f3b3c
// 004067c7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004067ce  b8d4674000           mov eax, 0x4067d4
// 004067d3  c3                   ret 
// 004067d4  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004067d7  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 004067da  8b0b                 mov ecx, dword ptr [ebx]
// 004067dc  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 004067df  52                   push edx
// 004067e0  53                   push ebx
// 004067e1  ffd0                 call eax
// 004067e3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004067e6  5f                   pop edi
// 004067e7  5e                   pop esi
// 004067e8  b80e000780           mov eax, 0x8007000e
// 004067ed  64890d00000000       mov dword ptr fs:[0], ecx
// 004067f4  5b                   pop ebx
// 004067f5  8be5                 mov esp, ebp
// 004067f7  5d                   pop ebp
// 004067f8  c20400               ret 4
// copied from an identical function in another client (function ?LoadNameCache@CComTypeInfoHolder@ATL@@QAEJPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_namecachemfcearly_8ee13228801bbb3a.cpp