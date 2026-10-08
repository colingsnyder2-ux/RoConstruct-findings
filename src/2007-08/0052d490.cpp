// roc 2007-08 0052d490  unit: RBX::RunService  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d490
//
// 0052d490  83ec0c               sub esp, 0xc
// 0052d493  56                   push esi
// 0052d494  8bf1                 mov esi, ecx
// 0052d496  8b5608               mov edx, dword ptr [esi + 8]
// 0052d499  33c0                 xor eax, eax
// 0052d49b  85d2                 test edx, edx
// 0052d49d  57                   push edi
// 0052d49e  89442408             mov dword ptr [esp + 8], eax
// 0052d4a2  7504                 jne 0x52d4a8
// 0052d4a4  33c9                 xor ecx, ecx
// 0052d4a6  eb08                 jmp 0x52d4b0
// 0052d4a8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052d4ab  2bca                 sub ecx, edx
// 0052d4ad  c1f902               sar ecx, 2
// 0052d4b0  85c9                 test ecx, ecx
// 0052d4b2  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052d4b5  8d7c2408             lea edi, [esp + 8]
// 0052d4b9  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052d4bd  89542410             mov dword ptr [esp + 0x10], edx
// 0052d4c1  897e14               mov dword ptr [esi + 0x14], edi
// 0052d4c4  7654                 jbe 0x52d51a
// 0052d4c6  53                   push ebx
// 0052d4c7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052d4cb  55                   push ebp
// 0052d4cc  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0052d4d2  8b5608               mov edx, dword ptr [esi + 8]
// 0052d4d5  85d2                 test edx, edx
// 0052d4d7  8bf8                 mov edi, eax
// 0052d4d9  740c                 je 0x52d4e7
// 0052d4db  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052d4de  2bca                 sub ecx, edx
// 0052d4e0  c1f902               sar ecx, 2
// 0052d4e3  3bc1                 cmp eax, ecx
// 0052d4e5  7202                 jb 0x52d4e9
// 0052d4e7  ffd5                 call ebp
// 0052d4e9  8b4608               mov eax, dword ptr [esi + 8]
// 0052d4ec  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0052d4ef  50                   push eax
// 0052d4f0  53                   push ebx
// 0052d4f1  8bce                 mov ecx, esi
// 0052d4f3  e898fcffff           call 0x52d190
// 0052d4f8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052d4fc  83c001               add eax, 1
// 0052d4ff  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0052d503  89442410             mov dword ptr [esp + 0x10], eax
// 0052d507  72c9                 jb 0x52d4d2
// 0052d509  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052d50d  5d                   pop ebp
// 0052d50e  5b                   pop ebx
// 0052d50f  5f                   pop edi
// 0052d510  894e14               mov dword ptr [esi + 0x14], ecx
// 0052d513  5e                   pop esi
// 0052d514  83c40c               add esp, 0xc
// 0052d517  c20400               ret 4
// 0052d51a  5f                   pop edi
// 0052d51b  895614               mov dword ptr [esi + 0x14], edx
// 0052d51e  5e                   pop esi
// 0052d51f  83c40c               add esp, 0xc
// 0052d522  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
