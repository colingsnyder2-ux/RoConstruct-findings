// from server: 100% by auto
// roc 2008-06 004501c0  unit: CRobloxDoc  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004501c0
//
// 004501c0  55                   push ebp
// 004501c1  8bec                 mov ebp, esp
// 004501c3  6aff                 push -1
// 004501c5  6864187c00           push 0x7c1864
// 004501ca  64a100000000         mov eax, dword ptr fs:[0]
// 004501d0  50                   push eax
// 004501d1  64892500000000       mov dword ptr fs:[0], esp
// 004501d8  83ec18               sub esp, 0x18
// 004501db  53                   push ebx
// 004501dc  56                   push esi
// 004501dd  57                   push edi
// 004501de  8d45e0               lea eax, [ebp - 0x20]
// 004501e1  8965f0               mov dword ptr [ebp - 0x10], esp
// 004501e4  50                   push eax
// 004501e5  8bf1                 mov esi, ecx
// 004501e7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004501ee  e8dd5efbff           call 0x4060d0
// 004501f3  83c404               add esp, 4
// 004501f6  50                   push eax
// 004501f7  8d4de4               lea ecx, [ebp - 0x1c]
// 004501fa  68f8798100           push 0x8179f8
// 004501ff  51                   push ecx
// 00450200  c645fc01             mov byte ptr [ebp - 4], 1
// 00450204  e817f0ffff           call 0x44f220
// 00450209  83c40c               add esp, 0xc
// 0045020c  68187a8100           push 0x817a18
// 00450211  50                   push eax
// 00450212  8d55e8               lea edx, [ebp - 0x18]
// 00450215  52                   push edx
// 00450216  c645fc02             mov byte ptr [ebp - 4], 2
// 0045021a  e841dffbff           call 0x40e160
// 0045021f  83c40c               add esp, 0xc
// 00450222  8bf8                 mov edi, eax
// 00450224  68107a8100           push 0x817a10
// 00450229  8d45ec               lea eax, [ebp - 0x14]
// 0045022c  56                   push esi
// 0045022d  50                   push eax
// 0045022e  c645fc03             mov byte ptr [ebp - 4], 3
// 00450232  e8c9fbffff           call 0x44fe00
// 00450237  83c40c               add esp, 0xc
// 0045023a  8bf0                 mov esi, eax
// 0045023c  8bcf                 mov ecx, edi
// 0045023e  c645fc04             mov byte ptr [ebp - 4], 4
// 00450242  ff15e03e8000         call dword ptr [0x803ee0]
// 00450248  8bce                 mov ecx, esi
// 0045024a  8bf8                 mov edi, eax
// 0045024c  ff15e03e8000         call dword ptr [0x803ee0]
// 00450252  8bc8                 mov ecx, eax
// 00450254  e8e7fcffff           call 0x44ff40
// 00450259  8d4dec               lea ecx, [ebp - 0x14]
// 0045025c  ff15143f8000         call dword ptr [0x803f14]
// 00450262  8d4de8               lea ecx, [ebp - 0x18]
// 00450265  ff15143f8000         call dword ptr [0x803f14]
// 0045026b  8d4de4               lea ecx, [ebp - 0x1c]
// 0045026e  ff15143f8000         call dword ptr [0x803f14]
// 00450274  8d4de0               lea ecx, [ebp - 0x20]
// 00450277  ff15143f8000         call dword ptr [0x803f14]
// 0045027d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00450280  5f                   pop edi
// 00450281  5e                   pop esi
// 00450282  64890d00000000       mov dword ptr fs:[0], ecx
// 00450289  5b                   pop ebx
// 0045028a  8be5                 mov esp, ebp
// 0045028c  5d                   pop ebp
// 0045028d  c3                   ret 
// 0045028e  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00450291  8b11                 mov edx, dword ptr [ecx]
// 00450293  8b4204               mov eax, dword ptr [edx + 4]
// 00450296  6a00                 push 0
// 00450298  6a00                 push 0
// 0045029a  ffd0                 call eax
// 0045029c  50                   push eax
// 0045029d  e8ae092500           call 0x6a0c50
// 004502a2  b87d024500           mov eax, 0x45027d
// 004502a7  c3                   ret 

// from server: 100% by colin
// roc 2008-06 004501c0  unit: CRobloxDoc  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004501c0
//
// 004501c0  55                   push ebp
// 004501c1  8bec                 mov ebp, esp
// 004501c3  6aff                 push -1
// 004501c5  6864187c00           push 0x7c1864
// 004501ca  64a100000000         mov eax, dword ptr fs:[0]
// 004501d0  50                   push eax
// 004501d1  64892500000000       mov dword ptr fs:[0], esp
// 004501d8  83ec18               sub esp, 0x18
// 004501db  53                   push ebx
// 004501dc  56                   push esi
// 004501dd  57                   push edi
// 004501de  8d45e0               lea eax, [ebp - 0x20]
// 004501e1  8965f0               mov dword ptr [ebp - 0x10], esp
// 004501e4  50                   push eax
// 004501e5  8bf1                 mov esi, ecx
// 004501e7  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004501ee  e8dd5efbff           call 0x4060d0
// 004501f3  83c404               add esp, 4
// 004501f6  50                   push eax
// 004501f7  8d4de4               lea ecx, [ebp - 0x1c]
// 004501fa  68f8798100           push 0x8179f8
// 004501ff  51                   push ecx
// 00450200  c645fc01             mov byte ptr [ebp - 4], 1
// 00450204  e817f0ffff           call 0x44f220
// 00450209  83c40c               add esp, 0xc
// 0045020c  68187a8100           push 0x817a18
// 00450211  50                   push eax
// 00450212  8d55e8               lea edx, [ebp - 0x18]
// 00450215  52                   push edx
// 00450216  c645fc02             mov byte ptr [ebp - 4], 2
// 0045021a  e841dffbff           call 0x40e160
// 0045021f  83c40c               add esp, 0xc
// 00450222  8bf8                 mov edi, eax
// 00450224  68107a8100           push 0x817a10
// 00450229  8d45ec               lea eax, [ebp - 0x14]
// 0045022c  56                   push esi
// 0045022d  50                   push eax
// 0045022e  c645fc03             mov byte ptr [ebp - 4], 3
// 00450232  e8c9fbffff           call 0x44fe00
// 00450237  83c40c               add esp, 0xc
// 0045023a  8bf0                 mov esi, eax
// 0045023c  8bcf                 mov ecx, edi
// 0045023e  c645fc04             mov byte ptr [ebp - 4], 4
// 00450242  ff15e03e8000         call dword ptr [0x803ee0]
// 00450248  8bce                 mov ecx, esi
// 0045024a  8bf8                 mov edi, eax
// 0045024c  ff15e03e8000         call dword ptr [0x803ee0]
// 00450252  8bc8                 mov ecx, eax
// 00450254  e8e7fcffff           call 0x44ff40
// 00450259  8d4dec               lea ecx, [ebp - 0x14]
// 0045025c  ff15143f8000         call dword ptr [0x803f14]
// 00450262  8d4de8               lea ecx, [ebp - 0x18]
// 00450265  ff15143f8000         call dword ptr [0x803f14]
// 0045026b  8d4de4               lea ecx, [ebp - 0x1c]
// 0045026e  ff15143f8000         call dword ptr [0x803f14]
// 00450274  8d4de0               lea ecx, [ebp - 0x20]
// 00450277  ff15143f8000         call dword ptr [0x803f14]
// 0045027d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00450280  5f                   pop edi
// 00450281  5e                   pop esi
// 00450282  64890d00000000       mov dword ptr fs:[0], ecx
// 00450289  5b                   pop ebx
// 0045028a  8be5                 mov esp, ebp
// 0045028c  5d                   pop ebp
// 0045028d  c3                   ret 
// 0045028e  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00450291  8b11                 mov edx, dword ptr [ecx]
// 00450293  8b4204               mov eax, dword ptr [edx + 4]
// 00450296  6a00                 push 0
// 00450298  6a00                 push 0
// 0045029a  ffd0                 call eax
// 0045029c  50                   push eax
// 0045029d  e8ae092500           call 0x6a0c50
// 004502a2  b87d024500           mov eax, 0x45027d
// 004502a7  c3                   ret 

// from server: 89% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob0 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_nativedocumentfamilyad94f610efff160c.cpp
