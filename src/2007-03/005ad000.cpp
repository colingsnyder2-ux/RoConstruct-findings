// roc 2007-03 005ad000  unit: seg_005a0000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ad000
//
// 005ad000  83ec0c               sub esp, 0xc
// 005ad003  56                   push esi
// 005ad004  8bf1                 mov esi, ecx
// 005ad006  8b5608               mov edx, dword ptr [esi + 8]
// 005ad009  33c0                 xor eax, eax
// 005ad00b  85d2                 test edx, edx
// 005ad00d  57                   push edi
// 005ad00e  89442408             mov dword ptr [esp + 8], eax
// 005ad012  7504                 jne 0x5ad018
// 005ad014  33c9                 xor ecx, ecx
// 005ad016  eb08                 jmp 0x5ad020
// 005ad018  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005ad01b  2bca                 sub ecx, edx
// 005ad01d  c1f902               sar ecx, 2
// 005ad020  85c9                 test ecx, ecx
// 005ad022  8b5614               mov edx, dword ptr [esi + 0x14]
// 005ad025  8d7c2408             lea edi, [esp + 8]
// 005ad029  894c240c             mov dword ptr [esp + 0xc], ecx
// 005ad02d  89542410             mov dword ptr [esp + 0x10], edx
// 005ad031  897e14               mov dword ptr [esi + 0x14], edi
// 005ad034  7654                 jbe 0x5ad08a
// 005ad036  53                   push ebx
// 005ad037  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005ad03b  55                   push ebp
// 005ad03c  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 005ad042  8b5608               mov edx, dword ptr [esi + 8]
// 005ad045  85d2                 test edx, edx
// 005ad047  8bf8                 mov edi, eax
// 005ad049  740c                 je 0x5ad057
// 005ad04b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005ad04e  2bca                 sub ecx, edx
// 005ad050  c1f902               sar ecx, 2
// 005ad053  3bc1                 cmp eax, ecx
// 005ad055  7202                 jb 0x5ad059
// 005ad057  ffd5                 call ebp
// 005ad059  8b4608               mov eax, dword ptr [esi + 8]
// 005ad05c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 005ad05f  50                   push eax
// 005ad060  53                   push ebx
// 005ad061  8bce                 mov ecx, esi
// 005ad063  e868fcffff           call 0x5accd0
// 005ad068  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ad06c  83c001               add eax, 1
// 005ad06f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005ad073  89442410             mov dword ptr [esp + 0x10], eax
// 005ad077  72c9                 jb 0x5ad042
// 005ad079  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ad07d  5d                   pop ebp
// 005ad07e  5b                   pop ebx
// 005ad07f  5f                   pop edi
// 005ad080  894e14               mov dword ptr [esi + 0x14], ecx
// 005ad083  5e                   pop esi
// 005ad084  83c40c               add esp, 0xc
// 005ad087  c20400               ret 4
// 005ad08a  5f                   pop edi
// 005ad08b  895614               mov dword ptr [esi + 0x14], edx
// 005ad08e  5e                   pop esi
// 005ad08f  83c40c               add esp, 0xc
// 005ad092  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
