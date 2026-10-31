// roc 2012-06 00407430  unit: VCApp::?$CComObject  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407430
//
// 00407430  55                   push ebp
// 00407431  8bec                 mov ebp, esp
// 00407433  6aff                 push -1
// 00407435  68a3a2a900           push 0xa9a2a3
// 0040743a  64a100000000         mov eax, dword ptr fs:[0]
// 00407440  50                   push eax
// 00407441  64892500000000       mov dword ptr fs:[0], esp
// 00407448  83ec1c               sub esp, 0x1c
// 0040744b  53                   push ebx
// 0040744c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040744f  8b03                 mov eax, dword ptr [ebx]
// 00407451  8b500c               mov edx, dword ptr [eax + 0xc]
// 00407454  56                   push esi
// 00407455  57                   push edi
// 00407456  8bf9                 mov edi, ecx
// 00407458  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040745b  8d4de0               lea ecx, [ebp - 0x20]
// 0040745e  51                   push ecx
// 0040745f  53                   push ebx
// 00407460  897ddc               mov dword ptr [ebp - 0x24], edi
// 00407463  ffd2                 call edx
// 00407465  33c9                 xor ecx, ecx
// 00407467  3bc1                 cmp eax, ecx
// 00407469  0f8c3b010000         jl 0x4075aa
// 0040746f  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00407472  0fb7502c             movzx edx, word ptr [eax + 0x2c]
// 00407476  894de4               mov dword ptr [ebp - 0x1c], ecx
// 00407479  895718               mov dword ptr [edi + 0x18], edx
// 0040747c  894f14               mov dword ptr [edi + 0x14], ecx
// 0040747f  3bd1                 cmp edx, ecx
// 00407481  7468                 je 0x4074eb
// 00407483  8bfa                 mov edi, edx
// 00407485  8bc7                 mov eax, edi
// 00407487  ba0c000000           mov edx, 0xc
// 0040748c  f7e2                 mul edx
// 0040748e  894dfc               mov dword ptr [ebp - 4], ecx
// 00407491  0f90c1               seto cl
// 00407494  f7d9                 neg ecx
// 00407496  0bc8                 or ecx, eax
// 00407498  33c0                 xor eax, eax
// 0040749a  83c104               add ecx, 4
// 0040749d  0f92c0               setb al
// 004074a0  f7d8                 neg eax
// 004074a2  0bc1                 or eax, ecx
// 004074a4  50                   push eax
// 004074a5  e846af5700           call 0x9823f0
// 004074aa  83c404               add esp, 4
// 004074ad  8945e4               mov dword ptr [ebp - 0x1c], eax
// 004074b0  c645fc01             mov byte ptr [ebp - 4], 1
// 004074b4  85c0                 test eax, eax
// 004074b6  741a                 je 0x4074d2
// 004074b8  68d0244000           push 0x4024d0
// 004074bd  68f0724000           push 0x4072f0
// 004074c2  57                   push edi
// 004074c3  8d7004               lea esi, [eax + 4]
// 004074c6  6a0c                 push 0xc
// 004074c8  56                   push esi
// 004074c9  8938                 mov dword ptr [eax], edi
// 004074cb  e8aabe5700           call 0x98337a
// 004074d0  eb02                 jmp 0x4074d4
// 004074d2  33f6                 xor esi, esi
// 004074d4  8975e4               mov dword ptr [ebp - 0x1c], esi
// 004074d7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004074de  85f6                 test esi, esi
// 004074e0  0f84f1000000         je 0x4075d7
// 004074e6  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 004074e9  33c9                 xor ecx, ecx
// 004074eb  394f18               cmp dword ptr [edi + 0x18], ecx
// 004074ee  894de8               mov dword ptr [ebp - 0x18], ecx
// 004074f1  0f8ea1000000         jle 0x407598
// 004074f7  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004074fa  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004074fd  8b0b                 mov ecx, dword ptr [ebx]
// 004074ff  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00407502  8d55ec               lea edx, [ebp - 0x14]
// 00407505  52                   push edx
// 00407506  50                   push eax
// 00407507  53                   push ebx
// 00407508  ffd1                 call ecx
// 0040750a  85c0                 test eax, eax
// 0040750c  7c77                 jl 0x407585
// 0040750e  c7450800000000       mov dword ptr [ebp + 8], 0
// 00407515  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00407518  8b13                 mov edx, dword ptr [ebx]
// 0040751a  6a00                 push 0
// 0040751c  6a00                 push 0
// 0040751e  6a00                 push 0
// 00407520  8d4508               lea eax, [ebp + 8]
// 00407523  50                   push eax
// 00407524  8b01                 mov eax, dword ptr [ecx]
// 00407526  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 00407529  50                   push eax
// 0040752a  53                   push ebx
// 0040752b  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00407532  ffd1                 call ecx
// 00407534  85c0                 test eax, eax
// 00407536  7c30                 jl 0x407568
// 00407538  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040753b  8b06                 mov eax, dword ptr [esi]
// 0040753d  c7450800000000       mov dword ptr [ebp + 8], 0
// 00407544  3bc7                 cmp eax, edi
// 00407546  7409                 je 0x407551
// 00407548  50                   push eax
// 00407549  ff15042bb200         call dword ptr [0xb22b04]
// 0040754f  893e                 mov dword ptr [esi], edi
// 00407551  8b06                 mov eax, dword ptr [esi]
// 00407553  50                   push eax
// 00407554  ff15182bb200         call dword ptr [0xb22b18]
// 0040755a  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0040755d  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 00407560  894604               mov dword ptr [esi + 4], eax
// 00407563  8b02                 mov eax, dword ptr [edx]
// 00407565  894608               mov dword ptr [esi + 8], eax
// 00407568  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0040756b  8b0b                 mov ecx, dword ptr [ebx]
// 0040756d  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00407570  52                   push edx
// 00407571  53                   push ebx
// 00407572  ffd0                 call eax
// 00407574  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00407577  51                   push ecx
// 00407578  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040757f  ff15042bb200         call dword ptr [0xb22b04]
// 00407585  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00407588  40                   inc eax
// 00407589  83c60c               add esi, 0xc
// 0040758c  3b4718               cmp eax, dword ptr [edi + 0x18]
// 0040758f  8945e8               mov dword ptr [ebp - 0x18], eax
// 00407592  0f8c62ffffff         jl 0x4074fa
// 00407598  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 0040759b  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 0040759e  895714               mov dword ptr [edi + 0x14], edx
// 004075a1  8b03                 mov eax, dword ptr [ebx]
// 004075a3  8b504c               mov edx, dword ptr [eax + 0x4c]
// 004075a6  51                   push ecx
// 004075a7  53                   push ebx
// 004075a8  ffd2                 call edx
// 004075aa  33c0                 xor eax, eax
// 004075ac  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004075af  64890d00000000       mov dword ptr fs:[0], ecx
// 004075b6  5f                   pop edi
// 004075b7  5e                   pop esi
// 004075b8  5b                   pop ebx
// 004075b9  8be5                 mov esp, ebp
// 004075bb  5d                   pop ebp
// 004075bc  c20400               ret 4
// 004075bf  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 004075c2  e823ae5700           call 0x9823ea
// 004075c7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004075ce  b8d4754000           mov eax, 0x4075d4
// 004075d3  c3                   ret 
// 004075d4  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004075d7  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 004075da  8b0b                 mov ecx, dword ptr [ebx]
// 004075dc  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 004075df  52                   push edx
// 004075e0  53                   push ebx
// 004075e1  ffd0                 call eax
// 004075e3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004075e6  5f                   pop edi
// 004075e7  5e                   pop esi
// 004075e8  b80e000780           mov eax, 0x8007000e
// 004075ed  64890d00000000       mov dword ptr fs:[0], ecx
// 004075f4  5b                   pop ebx
// 004075f5  8be5                 mov esp, ebp
// 004075f7  5d                   pop ebp
// 004075f8  c20400               ret 4
// copied from an identical function in another client (function ?LoadNameCache@CComTypeInfoHolder@ATL@@QAEJPAUITypeInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_namecachemfcearly_8ee13228801bbb3a.cpp