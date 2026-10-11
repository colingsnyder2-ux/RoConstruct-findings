// roc 2007-08 0052d350  unit: RBX::RunService  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d350
//
// 0052d350  83ec0c               sub esp, 0xc
// 0052d353  56                   push esi
// 0052d354  8bf1                 mov esi, ecx
// 0052d356  8b5608               mov edx, dword ptr [esi + 8]
// 0052d359  33c0                 xor eax, eax
// 0052d35b  85d2                 test edx, edx
// 0052d35d  57                   push edi
// 0052d35e  89442408             mov dword ptr [esp + 8], eax
// 0052d362  7504                 jne 0x52d368
// 0052d364  33c9                 xor ecx, ecx
// 0052d366  eb08                 jmp 0x52d370
// 0052d368  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052d36b  2bca                 sub ecx, edx
// 0052d36d  c1f902               sar ecx, 2
// 0052d370  85c9                 test ecx, ecx
// 0052d372  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052d375  8d7c2408             lea edi, [esp + 8]
// 0052d379  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052d37d  89542410             mov dword ptr [esp + 0x10], edx
// 0052d381  897e14               mov dword ptr [esi + 0x14], edi
// 0052d384  7657                 jbe 0x52d3dd
// 0052d386  53                   push ebx
// 0052d387  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052d38b  55                   push ebp
// 0052d38c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052d390  8b5608               mov edx, dword ptr [esi + 8]
// 0052d393  85d2                 test edx, edx
// 0052d395  8bf8                 mov edi, eax
// 0052d397  740c                 je 0x52d3a5
// 0052d399  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052d39c  2bca                 sub ecx, edx
// 0052d39e  c1f902               sar ecx, 2
// 0052d3a1  3bc1                 cmp eax, ecx
// 0052d3a3  7206                 jb 0x52d3ab
// 0052d3a5  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052d3ab  8b4608               mov eax, dword ptr [esi + 8]
// 0052d3ae  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0052d3b1  50                   push eax
// 0052d3b2  53                   push ebx
// 0052d3b3  55                   push ebp
// 0052d3b4  8bce                 mov ecx, esi
// 0052d3b6  e855fcffff           call 0x52d010
// 0052d3bb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052d3bf  83c001               add eax, 1
// 0052d3c2  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0052d3c6  89442410             mov dword ptr [esp + 0x10], eax
// 0052d3ca  72c4                 jb 0x52d390
// 0052d3cc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052d3d0  5d                   pop ebp
// 0052d3d1  5b                   pop ebx
// 0052d3d2  5f                   pop edi
// 0052d3d3  894e14               mov dword ptr [esi + 0x14], ecx
// 0052d3d6  5e                   pop esi
// 0052d3d7  83c40c               add esp, 0xc
// 0052d3da  c20800               ret 8
// 0052d3dd  5f                   pop edi
// 0052d3de  895614               mov dword ptr [esi + 0x14], edx
// 0052d3e1  5e                   pop esi
// 0052d3e2  83c40c               add esp, 0xc
// 0052d3e5  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?raise@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@IBEXVHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
