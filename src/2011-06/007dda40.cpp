// roc 2011-06 007dda40  unit: seg_007d0000  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dda40
//
// 007dda40  83ec18               sub esp, 0x18
// 007dda43  53                   push ebx
// 007dda44  56                   push esi
// 007dda45  8bf0                 mov esi, eax
// 007dda47  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 007dda4a  56                   push esi
// 007dda4b  e8d0210000           call 0x7dfc20
// 007dda50  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007dda53  8d81fcfeffff         lea eax, [ecx - 0x104]
// 007dda59  83c404               add esp, 4
// 007dda5c  83f81b               cmp eax, 0x1b
// 007dda5f  770e                 ja 0x7dda6f
// 007dda61  0fb68044db7d00       movzx eax, byte ptr [eax + 0x7ddb44]
// 007dda68  ff24853cdb7d00       jmp dword ptr [eax*4 + 0x7ddb3c]
// 007dda6f  83f93b               cmp ecx, 0x3b
// 007dda72  0f84ad000000         je 0x7ddb25
// 007dda78  57                   push edi
// 007dda79  8d7c240c             lea edi, [esp + 0xc]
// 007dda7d  e88ee4ffff           call 0x7dbf10
// 007dda82  8bf0                 mov esi, eax
// 007dda84  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007dda88  5f                   pop edi
// 007dda89  83f80d               cmp eax, 0xd
// 007dda8c  744c                 je 0x7ddada
// 007dda8e  83f80e               cmp eax, 0xe
// 007dda91  7447                 je 0x7ddada
// 007dda93  83fe01               cmp esi, 1
// 007dda96  751f                 jne 0x7ddab7
// 007dda98  8d4c2408             lea ecx, [esp + 8]
// 007dda9c  51                   push ecx
// 007dda9d  53                   push ebx
// 007dda9e  e8ad530100           call 0x7f2e50
// 007ddaa3  83c408               add esp, 8
// 007ddaa6  56                   push esi
// 007ddaa7  50                   push eax
// 007ddaa8  53                   push ebx
// 007ddaa9  e8d24e0100           call 0x7f2980
// 007ddaae  83c40c               add esp, 0xc
// 007ddab1  5e                   pop esi
// 007ddab2  5b                   pop ebx
// 007ddab3  83c418               add esp, 0x18
// 007ddab6  c3                   ret 
// 007ddab7  8d542408             lea edx, [esp + 8]
// 007ddabb  52                   push edx
// 007ddabc  53                   push ebx
// 007ddabd  e80e530100           call 0x7f2dd0
// 007ddac2  0fb64332             movzx eax, byte ptr [ebx + 0x32]
// 007ddac6  83c408               add esp, 8
// 007ddac9  56                   push esi
// 007ddaca  50                   push eax
// 007ddacb  53                   push ebx
// 007ddacc  e8af4e0100           call 0x7f2980
// 007ddad1  83c40c               add esp, 0xc
// 007ddad4  5e                   pop esi
// 007ddad5  5b                   pop ebx
// 007ddad6  83c418               add esp, 0x18
// 007ddad9  c3                   ret 
// 007ddada  6aff                 push -1
// 007ddadc  8d44240c             lea eax, [esp + 0xc]
// 007ddae0  50                   push eax
// 007ddae1  53                   push ebx
// 007ddae2  e8c9490100           call 0x7f24b0
// 007ddae7  83c40c               add esp, 0xc
// 007ddaea  837c24080d           cmp dword ptr [esp + 8], 0xd
// 007ddaef  751c                 jne 0x7ddb0d
// 007ddaf1  83fe01               cmp esi, 1
// 007ddaf4  7517                 jne 0x7ddb0d
// 007ddaf6  8b0b                 mov ecx, dword ptr [ebx]
// 007ddaf8  8b510c               mov edx, dword ptr [ecx + 0xc]
// 007ddafb  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ddaff  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 007ddb02  8d0482               lea eax, [edx + eax*4]
// 007ddb05  83e1dd               and ecx, 0xffffffdd
// 007ddb08  83c91d               or ecx, 0x1d
// 007ddb0b  8908                 mov dword ptr [eax], ecx
// 007ddb0d  0fb64332             movzx eax, byte ptr [ebx + 0x32]
// 007ddb11  83ceff               or esi, 0xffffffff
// 007ddb14  56                   push esi
// 007ddb15  50                   push eax
// 007ddb16  53                   push ebx
// 007ddb17  e8644e0100           call 0x7f2980
// 007ddb1c  83c40c               add esp, 0xc
// 007ddb1f  5e                   pop esi
// 007ddb20  5b                   pop ebx
// 007ddb21  83c418               add esp, 0x18
// 007ddb24  c3                   ret 
// 007ddb25  33f6                 xor esi, esi
// 007ddb27  33c0                 xor eax, eax
// 007ddb29  56                   push esi
// 007ddb2a  50                   push eax
// 007ddb2b  53                   push ebx
// 007ddb2c  e84f4e0100           call 0x7f2980
// 007ddb31  83c40c               add esp, 0xc
// 007ddb34  5e                   pop esi
// 007ddb35  5b                   pop ebx
// 007ddb36  83c418               add esp, 0x18
// 007ddb39  c3                   ret 
// 007ddb3a  8bff                 mov edi, edi
// 007ddb3c  25db7d006f           and eax, 0x6f007ddb
// 007ddb41  da7d00               fidivr dword ptr [ebp]
// 007ddb44  0000                 add byte ptr [eax], al
// 007ddb46  0001                 add byte ptr [ecx], al
// 007ddb48  0101                 add dword ptr [ecx], eax
// 007ddb4a  0101                 add dword ptr [ecx], eax
// 007ddb4c  0101                 add dword ptr [ecx], eax
// 007ddb4e  0101                 add dword ptr [ecx], eax
// 007ddb50  0101                 add dword ptr [ecx], eax
// 007ddb52  0101                 add dword ptr [ecx], eax
// 007ddb54  0001                 add byte ptr [ecx], al
// 007ddb56  0101                 add dword ptr [ecx], eax
// 007ddb58  0101                 add dword ptr [ecx], eax
// 007ddb5a  0101                 add dword ptr [ecx], eax
// 007ddb5c  0101                 add dword ptr [ecx], eax
// 007ddb5e  0100                 add dword ptr [eax], eax
// library lua-5.1.4/lparser.c (function _retstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
