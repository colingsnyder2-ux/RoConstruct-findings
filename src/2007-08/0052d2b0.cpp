// roc 2007-08 0052d2b0  unit: RBX::RunService  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d2b0
//
// 0052d2b0  83ec0c               sub esp, 0xc
// 0052d2b3  56                   push esi
// 0052d2b4  8bf1                 mov esi, ecx
// 0052d2b6  8b5608               mov edx, dword ptr [esi + 8]
// 0052d2b9  33c0                 xor eax, eax
// 0052d2bb  85d2                 test edx, edx
// 0052d2bd  57                   push edi
// 0052d2be  89442408             mov dword ptr [esp + 8], eax
// 0052d2c2  7504                 jne 0x52d2c8
// 0052d2c4  33c9                 xor ecx, ecx
// 0052d2c6  eb08                 jmp 0x52d2d0
// 0052d2c8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052d2cb  2bca                 sub ecx, edx
// 0052d2cd  c1f902               sar ecx, 2
// 0052d2d0  85c9                 test ecx, ecx
// 0052d2d2  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052d2d5  8d7c2408             lea edi, [esp + 8]
// 0052d2d9  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052d2dd  89542410             mov dword ptr [esp + 0x10], edx
// 0052d2e1  897e14               mov dword ptr [esi + 0x14], edi
// 0052d2e4  7657                 jbe 0x52d33d
// 0052d2e6  53                   push ebx
// 0052d2e7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0052d2eb  55                   push ebp
// 0052d2ec  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052d2f0  8b5608               mov edx, dword ptr [esi + 8]
// 0052d2f3  85d2                 test edx, edx
// 0052d2f5  8bf8                 mov edi, eax
// 0052d2f7  740c                 je 0x52d305
// 0052d2f9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052d2fc  2bca                 sub ecx, edx
// 0052d2fe  c1f902               sar ecx, 2
// 0052d301  3bc1                 cmp eax, ecx
// 0052d303  7206                 jb 0x52d30b
// 0052d305  ff15d8e67700         call dword ptr [0x77e6d8]
// 0052d30b  8b4608               mov eax, dword ptr [esi + 8]
// 0052d30e  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0052d311  50                   push eax
// 0052d312  53                   push ebx
// 0052d313  55                   push ebp
// 0052d314  8bce                 mov ecx, esi
// 0052d316  e835fcffff           call 0x52cf50
// 0052d31b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052d31f  83c001               add eax, 1
// 0052d322  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0052d326  89442410             mov dword ptr [esp + 0x10], eax
// 0052d32a  72c4                 jb 0x52d2f0
// 0052d32c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052d330  5d                   pop ebp
// 0052d331  5b                   pop ebx
// 0052d332  5f                   pop edi
// 0052d333  894e14               mov dword ptr [esi + 0x14], ecx
// 0052d336  5e                   pop esi
// 0052d337  83c40c               add esp, 0xc
// 0052d33a  c20800               ret 8
// 0052d33d  5f                   pop edi
// 0052d33e  895614               mov dword ptr [esi + 0x14], edx
// 0052d341  5e                   pop esi
// 0052d342  83c40c               add esp, 0xc
// 0052d345  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?raise@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@IBEXVHeartbeat@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/RunStateOwner.cpp
