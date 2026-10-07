// roc 2012-06 006654c0  unit: seg_00660000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006654c0
//
// 006654c0  83ec14               sub esp, 0x14
// 006654c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006654c7  8b88a8010000         mov ecx, dword ptr [eax + 0x1a8]
// 006654cd  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006654d0  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 006654d3  56                   push esi
// 006654d4  8b742428             mov esi, dword ptr [esp + 0x28]
// 006654d8  8954240c             mov dword ptr [esp + 0xc], edx
// 006654dc  894c2410             mov dword ptr [esp + 0x10], ecx
// 006654e0  85f6                 test esi, esi
// 006654e2  0f8e92000000         jle 0x66557a
// 006654e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006654ec  8b542420             mov edx, dword ptr [esp + 0x20]
// 006654f0  53                   push ebx
// 006654f1  2bd0                 sub edx, eax
// 006654f3  55                   push ebp
// 006654f4  8944240c             mov dword ptr [esp + 0xc], eax
// 006654f8  8954241c             mov dword ptr [esp + 0x1c], edx
// 006654fc  89742410             mov dword ptr [esp + 0x10], esi
// 00665500  57                   push edi
// 00665501  8b3402               mov esi, dword ptr [edx + eax]
// 00665504  8b18                 mov ebx, dword ptr [eax]
// 00665506  894c2434             mov dword ptr [esp + 0x34], ecx
// 0066550a  85c9                 test ecx, ecx
// 0066550c  765b                 jbe 0x665569
// 0066550e  8bff                 mov edi, edi
// 00665510  0fb60e               movzx ecx, byte ptr [esi]
// 00665513  0fb64601             movzx eax, byte ptr [esi + 1]
// 00665517  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0066551b  46                   inc esi
// 0066551c  0fb65601             movzx edx, byte ptr [esi + 1]
// 00665520  46                   inc esi
// 00665521  c1e802               shr eax, 2
// 00665524  8bf8                 mov edi, eax
// 00665526  c1e705               shl edi, 5
// 00665529  c1e903               shr ecx, 3
// 0066552c  8b6c8d00             mov ebp, dword ptr [ebp + ecx*4]
// 00665530  c1ea03               shr edx, 3
// 00665533  03fa                 add edi, edx
// 00665535  8d7c7d00             lea edi, [ebp + edi*2]
// 00665539  46                   inc esi
// 0066553a  66833f00             cmp word ptr [edi], 0
// 0066553e  750f                 jne 0x66554f
// 00665540  52                   push edx
// 00665541  51                   push ecx
// 00665542  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00665546  51                   push ecx
// 00665547  e854feffff           call 0x6653a0
// 0066554c  83c40c               add esp, 0xc
// 0066554f  8a17                 mov dl, byte ptr [edi]
// 00665551  feca                 dec dl
// 00665553  8813                 mov byte ptr [ebx], dl
// 00665555  43                   inc ebx
// 00665556  836c243401           sub dword ptr [esp + 0x34], 1
// 0066555b  75b3                 jne 0x665510
// 0066555d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00665561  8b442410             mov eax, dword ptr [esp + 0x10]
// 00665565  8b542420             mov edx, dword ptr [esp + 0x20]
// 00665569  83c004               add eax, 4
// 0066556c  836c241401           sub dword ptr [esp + 0x14], 1
// 00665571  89442410             mov dword ptr [esp + 0x10], eax
// 00665575  758a                 jne 0x665501
// 00665577  5f                   pop edi
// 00665578  5d                   pop ebp
// 00665579  5b                   pop ebx
// 0066557a  5e                   pop esi
// 0066557b  83c414               add esp, 0x14
// 0066557e  c3                   ret 
// library jpeg-6b/jquant2.c (function _pass2_no_dither)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
