// from server: 100% by auto
// roc 2008-06 00402d30  unit: ATL::CRegObject  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00402d30
//
// 00402d30  55                   push ebp
// 00402d31  8bec                 mov ebp, esp
// 00402d33  6aff                 push -1
// 00402d35  68b3cb7b00           push 0x7bcbb3
// 00402d3a  64a100000000         mov eax, dword ptr fs:[0]
// 00402d40  50                   push eax
// 00402d41  64892500000000       mov dword ptr fs:[0], esp
// 00402d48  83ec1c               sub esp, 0x1c
// 00402d4b  53                   push ebx
// 00402d4c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00402d4f  8b03                 mov eax, dword ptr [ebx]
// 00402d51  8b500c               mov edx, dword ptr [eax + 0xc]
// 00402d54  56                   push esi
// 00402d55  57                   push edi
// 00402d56  8bf9                 mov edi, ecx
// 00402d58  8965f0               mov dword ptr [ebp - 0x10], esp
// 00402d5b  8d4de0               lea ecx, [ebp - 0x20]
// 00402d5e  51                   push ecx
// 00402d5f  53                   push ebx
// 00402d60  897ddc               mov dword ptr [ebp - 0x24], edi
// 00402d63  ffd2                 call edx
// 00402d65  33c9                 xor ecx, ecx
// 00402d67  3bc1                 cmp eax, ecx
// 00402d69  0f8c3b010000         jl 0x402eaa
// 00402d6f  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 00402d72  0fb7502c             movzx edx, word ptr [eax + 0x2c]
// 00402d76  894de4               mov dword ptr [ebp - 0x1c], ecx
// 00402d79  895718               mov dword ptr [edi + 0x18], edx
// 00402d7c  894f14               mov dword ptr [edi + 0x14], ecx
// 00402d7f  3bd1                 cmp edx, ecx
// 00402d81  7468                 je 0x402deb
// 00402d83  8bfa                 mov edi, edx
// 00402d85  8bc7                 mov eax, edi
// 00402d87  ba0c000000           mov edx, 0xc
// 00402d8c  f7e2                 mul edx
// 00402d8e  894dfc               mov dword ptr [ebp - 4], ecx
// 00402d91  0f90c1               seto cl
// 00402d94  f7d9                 neg ecx
// 00402d96  0bc8                 or ecx, eax
// 00402d98  33c0                 xor eax, eax
// 00402d9a  83c104               add ecx, 4
// 00402d9d  0f92c0               setb al
// 00402da0  f7d8                 neg eax
// 00402da2  0bc1                 or eax, ecx
// 00402da4  50                   push eax
// 00402da5  e8acdb2900           call 0x6a0956
// 00402daa  83c404               add esp, 4
// 00402dad  8945e4               mov dword ptr [ebp - 0x1c], eax
// 00402db0  c645fc01             mov byte ptr [ebp - 4], 1
// 00402db4  85c0                 test eax, eax
// 00402db6  741a                 je 0x402dd2
// 00402db8  6820104000           push 0x401020
// 00402dbd  6870234000           push 0x402370
// 00402dc2  57                   push edi
// 00402dc3  8d7004               lea esi, [eax + 4]
// 00402dc6  6a0c                 push 0xc
// 00402dc8  56                   push esi
// 00402dc9  8938                 mov dword ptr [eax], edi
// 00402dcb  e8c8e72900           call 0x6a1598
// 00402dd0  eb02                 jmp 0x402dd4
// 00402dd2  33f6                 xor esi, esi
// 00402dd4  8975e4               mov dword ptr [ebp - 0x1c], esi
// 00402dd7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00402dde  85f6                 test esi, esi
// 00402de0  0f84f1000000         je 0x402ed7
// 00402de6  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 00402de9  33c9                 xor ecx, ecx
// 00402deb  394f18               cmp dword ptr [edi + 0x18], ecx
// 00402dee  894de8               mov dword ptr [ebp - 0x18], ecx
// 00402df1  0f8ea1000000         jle 0x402e98
// 00402df7  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 00402dfa  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00402dfd  8b0b                 mov ecx, dword ptr [ebx]
// 00402dff  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00402e02  8d55ec               lea edx, [ebp - 0x14]
// 00402e05  52                   push edx
// 00402e06  50                   push eax
// 00402e07  53                   push ebx
// 00402e08  ffd1                 call ecx
// 00402e0a  85c0                 test eax, eax
// 00402e0c  7c77                 jl 0x402e85
// 00402e0e  c7450800000000       mov dword ptr [ebp + 8], 0
// 00402e15  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00402e18  8b13                 mov edx, dword ptr [ebx]
// 00402e1a  6a00                 push 0
// 00402e1c  6a00                 push 0
// 00402e1e  6a00                 push 0
// 00402e20  8d4508               lea eax, [ebp + 8]
// 00402e23  50                   push eax
// 00402e24  8b01                 mov eax, dword ptr [ecx]
// 00402e26  8b4a30               mov ecx, dword ptr [edx + 0x30]
// 00402e29  50                   push eax
// 00402e2a  53                   push ebx
// 00402e2b  c745fc03000000       mov dword ptr [ebp - 4], 3
// 00402e32  ffd1                 call ecx
// 00402e34  85c0                 test eax, eax
// 00402e36  7c30                 jl 0x402e68
// 00402e38  8b7d08               mov edi, dword ptr [ebp + 8]
// 00402e3b  8b06                 mov eax, dword ptr [esi]
// 00402e3d  c7450800000000       mov dword ptr [ebp + 8], 0
// 00402e44  3bc7                 cmp eax, edi
// 00402e46  7409                 je 0x402e51
// 00402e48  50                   push eax
// 00402e49  ff1544298000         call dword ptr [0x802944]
// 00402e4f  893e                 mov dword ptr [esi], edi
// 00402e51  8b06                 mov eax, dword ptr [esi]
// 00402e53  50                   push eax
// 00402e54  ff153c298000         call dword ptr [0x80293c]
// 00402e5a  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00402e5d  8b7ddc               mov edi, dword ptr [ebp - 0x24]
// 00402e60  894604               mov dword ptr [esi + 4], eax
// 00402e63  8b02                 mov eax, dword ptr [edx]
// 00402e65  894608               mov dword ptr [esi + 8], eax
// 00402e68  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00402e6b  8b0b                 mov ecx, dword ptr [ebx]
// 00402e6d  8b4150               mov eax, dword ptr [ecx + 0x50]
// 00402e70  52                   push edx
// 00402e71  53                   push ebx
// 00402e72  ffd0                 call eax
// 00402e74  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00402e77  51                   push ecx
// 00402e78  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00402e7f  ff1544298000         call dword ptr [0x802944]
// 00402e85  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00402e88  40                   inc eax
// 00402e89  83c60c               add esi, 0xc
// 00402e8c  3b4718               cmp eax, dword ptr [edi + 0x18]
// 00402e8f  8945e8               mov dword ptr [ebp - 0x18], eax
// 00402e92  0f8c62ffffff         jl 0x402dfa
// 00402e98  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 00402e9b  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00402e9e  895714               mov dword ptr [edi + 0x14], edx
// 00402ea1  8b03                 mov eax, dword ptr [ebx]
// 00402ea3  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00402ea6  51                   push ecx
// 00402ea7  53                   push ebx
// 00402ea8  ffd2                 call edx
// 00402eaa  33c0                 xor eax, eax
// 00402eac  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00402eaf  64890d00000000       mov dword ptr fs:[0], ecx
// 00402eb6  5f                   pop edi
// 00402eb7  5e                   pop esi
// 00402eb8  5b                   pop ebx
// 00402eb9  8be5                 mov esp, ebp
// 00402ebb  5d                   pop ebp
// 00402ebc  c20400               ret 4
// 00402ebf  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 00402ec2  e889da2900           call 0x6a0950
// 00402ec7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00402ece  b8d42e4000           mov eax, 0x402ed4
// 00402ed3  c3                   ret 
// 00402ed4  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00402ed7  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 00402eda  8b0b                 mov ecx, dword ptr [ebx]
// 00402edc  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00402edf  52                   push edx
// 00402ee0  53                   push ebx
// 00402ee1  ffd0                 call eax
// 00402ee3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00402ee6  5f                   pop edi
// 00402ee7  5e                   pop esi
// 00402ee8  b80e000780           mov eax, 0x8007000e
// 00402eed  64890d00000000       mov dword ptr fs:[0], ecx
// 00402ef4  5b                   pop ebx
// 00402ef5  8be5                 mov esp, ebp
// 00402ef7  5d                   pop ebp
// 00402ef8  c20400               ret 4

// from server: 100% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_namecachemfcearly_8ee13228801bbb3a.cpp
