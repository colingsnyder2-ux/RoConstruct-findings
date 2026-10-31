// roc 2010-06 004064f0  unit: VCApp::?$CComObject  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004064f0
//
// 004064f0  55                   push ebp
// 004064f1  8bec                 mov ebp, esp
// 004064f3  6aff                 push -1
// 004064f5  6873db9700           push 0x97db73
// 004064fa  64a100000000         mov eax, dword ptr fs:[0]
// 00406500  50                   push eax
// 00406501  64892500000000       mov dword ptr fs:[0], esp
// 00406508  83ec1c               sub esp, 0x1c
// 0040650b  53                   push ebx
// 0040650c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040650f  8b03                 mov eax, dword ptr [ebx]
// 00406511  8b500c               mov edx, dword ptr [eax + 0xc]
// 00406514  56                   push esi
// 00406515  57                   push edi
// 00406516  8bf9                 mov edi, ecx
// 00406518  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040651b  8d4de0               lea ecx, [ebp - 0x20]
// 0040651e  51                   push ecx
// 0040651f  53                   push ebx
// 00406520  897ddc               mov dword ptr [ebp - 0x24], edi
// 00406523  ffd2                 call edx
// 00406525  33c9                 xor ecx, ecx
// 00406527  3bc1                 cmp eax, ecx
// 00406529  0f8c3b010000         jl 0x40666a
// 0040652f  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00406532  0fb7502c             movzx edx, word ptr [eax + 0x2c]
// 00406536  894de4               mov dword ptr [ebp - 0x1c], ecx
// 00406539  895718               mov dword ptr [edi + 0x18], edx
// 0040653c  894f14               mov dword ptr [edi + 0x14], ecx
// 0040653f  3bd1                 cmp edx, ecx
// 00406541  7468                 je 0x4065ab
// 00406543  8bfa                 mov edi, edx
// 00406545  8bc7                 mov eax, edi
// 00406547  ba0c000000           mov edx, 0xc
// 0040654c  f7e2                 mul edx
// 0040654e  894dfc               mov dword ptr [ebp - 4], ecx
// 00406551  0f90c1               seto cl
// 00406554  f7d9                 neg ecx
// 00406556  0bc8                 or ecx, eax
// 00406558  33c0                 xor eax, eax
// 0040655a  83c104               add ecx, 4
// 0040655d  0f92c0               setb al
// 00406560  f7d8                 neg eax
// 00406562  0bc1                 or eax, ecx
// 00406564  50                   push eax
// 00406565  e818173a00           call 0x7a7c82
// 0040656a  83c404               add esp, 4
// 0040656d  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00406570  c645fc01             mov byte ptr [ebp - 4], 1
// 00406574  85c0                 test eax, eax
// 00406576  741a                 je 0x406592
// 00406578  6880204000           push 0x402080
// 0040657d  6830644000           push 0x406430
// 00406582  57                   push edi
// 00406583  8d7004               lea esi, [eax + 4]
// 00406586  6a0c                 push 0xc
// 00406588  56                   push esi
// 00406589  8938                 mov dword ptr [eax], edi
// 0040658b  e860263a00           call 0x7a8bf0
// 00406590  eb02                 jmp 0x406594
// 00406592  33f6                 xor esi, esi
// 00406594  8975e4               mov dword ptr [ebp - 0x1c], esi
// 00406597  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040659e  85f6                 test esi, esi
// 004065a0  0f84f1000000         je 0x406697
// 004065a6  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 004065a9  33c9                 xor ecx, ecx
// 004065ab  394f18               cmp dword ptr [edi + 0x18], ecx
// 004065ae  894de8               mov dword ptr [ebp - 0x18], ecx
// 004065b1  0f8ea1000000         jle 0x406658
// 004065b7  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004065ba  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004065bd  8b0b                 mov ecx, dword ptr [ebx]
// 004065bf  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 004065c2  8d55ec               lea edx, [ebp - 0x14]
// 004065c5  52                   push edx
// 004065c6  50                   push eax
// 004065c7  53                   push ebx
// 004065c8  ffd1                 call ecx
// 004065ca  85c0                 test eax, eax
// 004065cc  7c77                 jl 0x406645
// 004065ce  c7450800000000       mov dword ptr [ebp + 8], 0
// 004065d5  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004065d8  8b13                 mov edx, dword ptr [ebx]
// 004065da  6a00                 push 0
// 004065dc  6a00                 push 0
// 004065de  6a00                 push 0
// 004065e0  8d4508               lea eax, [ebp + 8]
// 004065e3  50                   push eax
// 004065e4  8b01                 mov eax, dword ptr [ecx]
// 004065e6  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 004065e9  50                   push eax
// 004065ea  53                   push ebx
// 004065eb  c745fc03000000       mov dword ptr [ebp - 4], 3
// 004065f2  ffd1                 call ecx
// 004065f4  85c0                 test eax, eax
// 004065f6  7c30                 jl 0x406628
// 004065f8  8b7d08               mov edi, dword ptr [ebp + 8]
// 004065fb  8b06                 mov eax, dword ptr [esi]
// 004065fd  c7450800000000       mov dword ptr [ebp + 8], 0
// 00406604  3bc7                 cmp eax, edi
// 00406606  7409                 je 0x406611
// 00406608  50                   push eax
// 00406609  ff1540aa9e00         call dword ptr [0x9eaa40]
// 0040660f  893e                 mov dword ptr [esi], edi
// 00406611  8b06                 mov eax, dword ptr [esi]
// 00406613  50                   push eax
// 00406614  ff1554aa9e00         call dword ptr [0x9eaa54]
// 0040661a  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0040661d  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 00406620  894604               mov dword ptr [esi + 4], eax
// 00406623  8b02                 mov eax, dword ptr [edx]
// 00406625  894608               mov dword ptr [esi + 8], eax
// 00406628  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0040662b  8b0b                 mov ecx, dword ptr [ebx]
// 0040662d  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00406630  52                   push edx
// 00406631  53                   push ebx
// 00406632  ffd0                 call eax
// 00406634  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00406637  51                   push ecx
// 00406638  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040663f  ff1540aa9e00         call dword ptr [0x9eaa40]
// 00406645  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00406648  40                   inc eax
// 00406649  83c60c               add esi, 0xc
// 0040664c  3b4718               cmp eax, dword ptr [edi + 0x18]
// 0040664f  8945e8               mov dword ptr [ebp - 0x18], eax
// 00406652  0f8c62ffffff         jl 0x4065ba
// 00406658  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 0040665b  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0040665e  895714               mov dword ptr [edi + 0x14], edx
// 00406661  8b03                 mov eax, dword ptr [ebx]
// 00406663  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00406666  51                   push ecx
// 00406667  53                   push ebx
// 00406668  ffd2                 call edx
// 0040666a  33c0                 xor eax, eax
// 0040666c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040666f  64890d00000000       mov dword ptr fs:[0], ecx
// 00406676  5f                   pop edi
// 00406677  5e                   pop esi
// 00406678  5b                   pop ebx
// 00406679  8be5                 mov esp, ebp
// 0040667b  5d                   pop ebp
// 0040667c  c20400               ret 4
// 0040667f  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 00406682  e8f5153a00           call 0x7a7c7c
// 00406687  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040668e  b894664000           mov eax, 0x406694
// 00406693  c3                   ret 
// 00406694  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00406697  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0040669a  8b0b                 mov ecx, dword ptr [ebx]
// 0040669c  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0040669f  52                   push edx
// 004066a0  53                   push ebx
// 004066a1  ffd0                 call eax
// 004066a3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004066a6  5f                   pop edi
// 004066a7  5e                   pop esi
// 004066a8  b80e000780           mov eax, 0x8007000e
// 004066ad  64890d00000000       mov dword ptr fs:[0], ecx
// 004066b4  5b                   pop ebx
// 004066b5  8be5                 mov esp, ebp
// 004066b7  5d                   pop ebp
// 004066b8  c20400               ret 4
// copied from an identical function in another client (function ?LoadNameCache@CComTypeInfoHolder@ATL@@QAEJPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_namecachemfcearly_8ee13228801bbb3a.cpp