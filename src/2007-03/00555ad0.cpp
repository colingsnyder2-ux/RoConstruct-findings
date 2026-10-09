// roc 2007-03 00555ad0  unit: seg_00550000  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00555ad0
//
// 00555ad0  83ec0c               sub esp, 0xc
// 00555ad3  56                   push esi
// 00555ad4  8bf1                 mov esi, ecx
// 00555ad6  8b5608               mov edx, dword ptr [esi + 8]
// 00555ad9  33c0                 xor eax, eax
// 00555adb  85d2                 test edx, edx
// 00555add  57                   push edi
// 00555ade  89442408             mov dword ptr [esp + 8], eax
// 00555ae2  7504                 jne 0x555ae8
// 00555ae4  33c9                 xor ecx, ecx
// 00555ae6  eb08                 jmp 0x555af0
// 00555ae8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00555aeb  2bca                 sub ecx, edx
// 00555aed  c1f902               sar ecx, 2
// 00555af0  85c9                 test ecx, ecx
// 00555af2  8b5614               mov edx, dword ptr [esi + 0x14]
// 00555af5  8d7c2408             lea edi, [esp + 8]
// 00555af9  894c240c             mov dword ptr [esp + 0xc], ecx
// 00555afd  89542410             mov dword ptr [esp + 0x10], edx
// 00555b01  897e14               mov dword ptr [esi + 0x14], edi
// 00555b04  7654                 jbe 0x555b5a
// 00555b06  53                   push ebx
// 00555b07  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00555b0b  55                   push ebp
// 00555b0c  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00555b12  8b5608               mov edx, dword ptr [esi + 8]
// 00555b15  85d2                 test edx, edx
// 00555b17  8bf8                 mov edi, eax
// 00555b19  740c                 je 0x555b27
// 00555b1b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00555b1e  2bca                 sub ecx, edx
// 00555b20  c1f902               sar ecx, 2
// 00555b23  3bc1                 cmp eax, ecx
// 00555b25  7202                 jb 0x555b29
// 00555b27  ffd5                 call ebp
// 00555b29  8b4608               mov eax, dword ptr [esi + 8]
// 00555b2c  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00555b2f  50                   push eax
// 00555b30  53                   push ebx
// 00555b31  8bce                 mov ecx, esi
// 00555b33  e828e8ffff           call 0x554360
// 00555b38  8b442410             mov eax, dword ptr [esp + 0x10]
// 00555b3c  83c001               add eax, 1
// 00555b3f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00555b43  89442410             mov dword ptr [esp + 0x10], eax
// 00555b47  72c9                 jb 0x555b12
// 00555b49  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00555b4d  5d                   pop ebp
// 00555b4e  5b                   pop ebx
// 00555b4f  5f                   pop edi
// 00555b50  894e14               mov dword ptr [esi + 0x14], ecx
// 00555b53  5e                   pop esi
// 00555b54  83c40c               add esp, 0xc
// 00555b57  c20400               ret 4
// 00555b5a  5f                   pop edi
// 00555b5b  895614               mov dword ptr [esi + 0x14], edx
// 00555b5e  5e                   pop esi
// 00555b5f  83c40c               add esp, 0xc
// 00555b62  c20400               ret 4
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ?raise@?$Notifier@VPartInstance@RBX@@UCanAggregateChanged@2@@RBX@@IBEXUCanAggregateChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
