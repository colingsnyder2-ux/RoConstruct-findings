// roc 2007-08 0052d3f0  unit: RBX::RunService  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d3f0
//
// 0052d3f0  83ec0c               sub esp, 0xc
// 0052d3f3  56                   push esi
// 0052d3f4  8bf1                 mov esi, ecx
// 0052d3f6  8b5608               mov edx, dword ptr [esi + 8]
// 0052d3f9  33c0                 xor eax, eax
// 0052d3fb  85d2                 test edx, edx
// 0052d3fd  57                   push edi
// 0052d3fe  89442408             mov dword ptr [esp + 8], eax
// 0052d402  7504                 jne 0x52d408
// 0052d404  33c9                 xor ecx, ecx
// 0052d406  eb08                 jmp 0x52d410
// 0052d408  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052d40b  2bca                 sub ecx, edx
// 0052d40d  c1f902               sar ecx, 2
// 0052d410  85c9                 test ecx, ecx
// 0052d412  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052d415  8d7c2408             lea edi, [esp + 8]
// 0052d419  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052d41d  89542410             mov dword ptr [esp + 0x10], edx
// 0052d421  897e14               mov dword ptr [esi + 0x14], edi
// 0052d424  7657                 jbe 0x52d47d
// 0052d426  53                   push ebx
// 0052d427  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052d42b  55                   push ebp
// 0052d42c  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052d430  8b5608               mov edx, dword ptr [esi + 8]
// 0052d433  85d2                 test edx, edx
// 0052d435  8bf8                 mov edi, eax
// 0052d437  740c                 je 0x52d445
// 0052d439  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052d43c  2bca                 sub ecx, edx
// 0052d43e  c1f902               sar ecx, 2
// 0052d441  3bc1                 cmp eax, ecx
// 0052d443  7206                 jb 0x52d44b
// 0052d445  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052d44b  8b4608               mov eax, dword ptr [esi + 8]
// 0052d44e  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0052d451  50                   push eax
// 0052d452  53                   push ebx
// 0052d453  55                   push ebp
// 0052d454  8bce                 mov ecx, esi
// 0052d456  e875fcffff           call 0x52d0d0
// 0052d45b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052d45f  83c001               add eax, 1
// 0052d462  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0052d466  89442410             mov dword ptr [esp + 0x10], eax
// 0052d46a  72c4                 jb 0x52d430
// 0052d46c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052d470  5d                   pop ebp
// 0052d471  5b                   pop ebx
// 0052d472  5f                   pop edi
// 0052d473  894e14               mov dword ptr [esi + 0x14], ecx
// 0052d476  5e                   pop esi
// 0052d477  83c40c               add esp, 0xc
// 0052d47a  c20800               ret 8
// 0052d47d  5f                   pop edi
// 0052d47e  895614               mov dword ptr [esi + 0x14], edx
// 0052d481  5e                   pop esi
// 0052d482  83c40c               add esp, 0xc
// 0052d485  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?raise@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@IBEXVHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/RunStateOwner.cpp
