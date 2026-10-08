// roc 2007-08 0057b9b0  unit: RBX::Workspace  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b9b0
//
// 0057b9b0  83ec0c               sub esp, 0xc
// 0057b9b3  56                   push esi
// 0057b9b4  8bf1                 mov esi, ecx
// 0057b9b6  8b5608               mov edx, dword ptr [esi + 8]
// 0057b9b9  33c0                 xor eax, eax
// 0057b9bb  85d2                 test edx, edx
// 0057b9bd  57                   push edi
// 0057b9be  89442408             mov dword ptr [esp + 8], eax
// 0057b9c2  7504                 jne 0x57b9c8
// 0057b9c4  33c9                 xor ecx, ecx
// 0057b9c6  eb08                 jmp 0x57b9d0
// 0057b9c8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057b9cb  2bca                 sub ecx, edx
// 0057b9cd  c1f902               sar ecx, 2
// 0057b9d0  85c9                 test ecx, ecx
// 0057b9d2  8b5614               mov edx, dword ptr [esi + 0x14]
// 0057b9d5  8d7c2408             lea edi, [esp + 8]
// 0057b9d9  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057b9dd  89542410             mov dword ptr [esp + 0x10], edx
// 0057b9e1  897e14               mov dword ptr [esi + 0x14], edi
// 0057b9e4  7654                 jbe 0x57ba3a
// 0057b9e6  53                   push ebx
// 0057b9e7  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057b9eb  55                   push ebp
// 0057b9ec  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0057b9f2  8b5608               mov edx, dword ptr [esi + 8]
// 0057b9f5  85d2                 test edx, edx
// 0057b9f7  8bf8                 mov edi, eax
// 0057b9f9  740c                 je 0x57ba07
// 0057b9fb  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057b9fe  2bca                 sub ecx, edx
// 0057ba00  c1f902               sar ecx, 2
// 0057ba03  3bc1                 cmp eax, ecx
// 0057ba05  7202                 jb 0x57ba09
// 0057ba07  ffd5                 call ebp
// 0057ba09  8b4608               mov eax, dword ptr [esi + 8]
// 0057ba0c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0057ba0f  50                   push eax
// 0057ba10  53                   push ebx
// 0057ba11  8bce                 mov ecx, esi
// 0057ba13  e868fbffff           call 0x57b580
// 0057ba18  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057ba1c  83c001               add eax, 1
// 0057ba1f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0057ba23  89442410             mov dword ptr [esp + 0x10], eax
// 0057ba27  72c9                 jb 0x57b9f2
// 0057ba29  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057ba2d  5d                   pop ebp
// 0057ba2e  5b                   pop ebx
// 0057ba2f  5f                   pop edi
// 0057ba30  894e14               mov dword ptr [esi + 0x14], ecx
// 0057ba33  5e                   pop esi
// 0057ba34  83c40c               add esp, 0xc
// 0057ba37  c20400               ret 4
// 0057ba3a  5f                   pop edi
// 0057ba3b  895614               mov dword ptr [esi + 0x14], edx
// 0057ba3e  5e                   pop esi
// 0057ba3f  83c40c               add esp, 0xc
// 0057ba42  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
