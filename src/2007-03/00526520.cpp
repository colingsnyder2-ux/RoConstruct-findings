// roc 2007-03 00526520  unit: seg_00520000  size: 533 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526520
//
// 00526520  81ec1c050000         sub esp, 0x51c
// 00526526  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0052652b  33c4                 xor eax, esp
// 0052652d  89842418050000       mov dword ptr [esp + 0x518], eax
// 00526534  53                   push ebx
// 00526535  8b9c2424050000       mov ebx, dword ptr [esp + 0x524]
// 0052653c  55                   push ebp
// 0052653d  56                   push esi
// 0052653e  8bb42434050000       mov esi, dword ptr [esp + 0x534]
// 00526545  85f6                 test esi, esi
// 00526547  57                   push edi
// 00526548  8bbc243c050000       mov edi, dword ptr [esp + 0x53c]
// 0052654f  bd32000000           mov ebp, 0x32
// 00526554  7c05                 jl 0x52655b
// 00526556  83fe04               cmp esi, 4
// 00526559  7c14                 jl 0x52656f
// 0052655b  8b03                 mov eax, dword ptr [ebx]
// 0052655d  896814               mov dword ptr [eax + 0x14], ebp
// 00526560  8b0b                 mov ecx, dword ptr [ebx]
// 00526562  897118               mov dword ptr [ecx + 0x18], esi
// 00526565  8b13                 mov edx, dword ptr [ebx]
// 00526567  8b02                 mov eax, dword ptr [edx]
// 00526569  53                   push ebx
// 0052656a  ffd0                 call eax
// 0052656c  83c404               add esp, 4
// 0052656f  80bc243405000000     cmp byte ptr [esp + 0x534], 0
// 00526577  740a                 je 0x526583
// 00526579  8b4cb358             mov ecx, dword ptr [ebx + esi*4 + 0x58]
// 0052657d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00526581  eb08                 jmp 0x52658b
// 00526583  8b54b368             mov edx, dword ptr [ebx + esi*4 + 0x68]
// 00526587  89542410             mov dword ptr [esp + 0x10], edx
// 0052658b  837c241000           cmp dword ptr [esp + 0x10], 0
// 00526590  7514                 jne 0x5265a6
// 00526592  8b03                 mov eax, dword ptr [ebx]
// 00526594  896814               mov dword ptr [eax + 0x14], ebp
// 00526597  8b0b                 mov ecx, dword ptr [ebx]
// 00526599  897118               mov dword ptr [ecx + 0x18], esi
// 0052659c  8b13                 mov edx, dword ptr [ebx]
// 0052659e  8b02                 mov eax, dword ptr [edx]
// 005265a0  53                   push ebx
// 005265a1  ffd0                 call eax
// 005265a3  83c404               add esp, 4
// 005265a6  833f00               cmp dword ptr [edi], 0
// 005265a9  7514                 jne 0x5265bf
// 005265ab  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005265ae  8b11                 mov edx, dword ptr [ecx]
// 005265b0  6800050000           push 0x500
// 005265b5  6a01                 push 1
// 005265b7  53                   push ebx
// 005265b8  ffd2                 call edx
// 005265ba  83c40c               add esp, 0xc
// 005265bd  8907                 mov dword ptr [edi], eax
// 005265bf  8b07                 mov eax, dword ptr [edi]
// 005265c1  89442418             mov dword ptr [esp + 0x18], eax
// 005265c5  33ff                 xor edi, edi
// 005265c7  bd01000000           mov ebp, 1
// 005265cc  8d642400             lea esp, [esp]
// 005265d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005265d4  0fb63429             movzx esi, byte ptr [ecx + ebp]
// 005265d8  85f6                 test esi, esi
// 005265da  7c0b                 jl 0x5265e7
// 005265dc  8d143e               lea edx, [esi + edi]
// 005265df  81fa00010000         cmp edx, 0x100
// 005265e5  7e13                 jle 0x5265fa
// 005265e7  8b03                 mov eax, dword ptr [ebx]
// 005265e9  c7401408000000       mov dword ptr [eax + 0x14], 8
// 005265f0  8b0b                 mov ecx, dword ptr [ebx]
// 005265f2  8b11                 mov edx, dword ptr [ecx]
// 005265f4  53                   push ebx
// 005265f5  ffd2                 call edx
// 005265f7  83c404               add esp, 4
// 005265fa  85f6                 test esi, esi
// 005265fc  7414                 je 0x526612
// 005265fe  56                   push esi
// 005265ff  8d843c28040000       lea eax, [esp + edi + 0x428]
// 00526606  55                   push ebp
// 00526607  50                   push eax
// 00526608  e80f8a0f00           call 0x61f01c
// 0052660d  83c40c               add esp, 0xc
// 00526610  03fe                 add edi, esi
// 00526612  83c501               add ebp, 1
// 00526615  83fd10               cmp ebp, 0x10
// 00526618  7eb6                 jle 0x5265d0
// 0052661a  c6843c2404000000     mov byte ptr [esp + edi + 0x424], 0
// 00526622  8a842424040000       mov al, byte ptr [esp + 0x424]
// 00526629  897c2414             mov dword ptr [esp + 0x14], edi
// 0052662d  33ff                 xor edi, edi
// 0052662f  33f6                 xor esi, esi
// 00526631  84c0                 test al, al
// 00526633  0fbee8               movsx ebp, al
// 00526636  745f                 je 0x526697
// 00526638  8d842424040000       lea eax, [esp + 0x424]
// 0052663f  90                   nop 
// 00526640  0fbe00               movsx eax, byte ptr [eax]
// 00526643  3bc5                 cmp eax, ebp
// 00526645  751f                 jne 0x526666
// 00526647  eb07                 jmp 0x526650
// 00526649  8da42400000000       lea esp, [esp]
// 00526650  0fbe8c3425040000     movsx ecx, byte ptr [esp + esi + 0x425]
// 00526658  897cb420             mov dword ptr [esp + esi*4 + 0x20], edi
// 0052665c  83c601               add esi, 1
// 0052665f  83c701               add edi, 1
// 00526662  3bcd                 cmp ecx, ebp
// 00526664  74ea                 je 0x526650
// 00526666  ba01000000           mov edx, 1
// 0052666b  8bcd                 mov ecx, ebp
// 0052666d  d3e2                 shl edx, cl
// 0052666f  3bfa                 cmp edi, edx
// 00526671  7c13                 jl 0x526686
// 00526673  8b03                 mov eax, dword ptr [ebx]
// 00526675  c7401408000000       mov dword ptr [eax + 0x14], 8
// 0052667c  8b0b                 mov ecx, dword ptr [ebx]
// 0052667e  8b11                 mov edx, dword ptr [ecx]
// 00526680  53                   push ebx
// 00526681  ffd2                 call edx
// 00526683  83c404               add esp, 4
// 00526686  8d843424040000       lea eax, [esp + esi + 0x424]
// 0052668d  03ff                 add edi, edi
// 0052668f  83c501               add ebp, 1
// 00526692  803800               cmp byte ptr [eax], 0
// 00526695  75a9                 jne 0x526640
// 00526697  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0052669b  6800010000           push 0x100
// 005266a0  81c500040000         add ebp, 0x400
// 005266a6  6a00                 push 0
// 005266a8  55                   push ebp
// 005266a9  e86e890f00           call 0x61f01c
// 005266ae  8a842440050000       mov al, byte ptr [esp + 0x540]
// 005266b5  83c40c               add esp, 0xc
// 005266b8  f6d8                 neg al
// 005266ba  1bc0                 sbb eax, eax
// 005266bc  2510ffffff           and eax, 0xffffff10
// 005266c1  05ff000000           add eax, 0xff
// 005266c6  33f6                 xor esi, esi
// 005266c8  39742414             cmp dword ptr [esp + 0x14], esi
// 005266cc  8944241c             mov dword ptr [esp + 0x1c], eax
// 005266d0  7e4a                 jle 0x52671c
// 005266d2  8b442410             mov eax, dword ptr [esp + 0x10]
// 005266d6  0fb67c3011           movzx edi, byte ptr [eax + esi + 0x11]
// 005266db  85ff                 test edi, edi
// 005266dd  7c0c                 jl 0x5266eb
// 005266df  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 005266e3  7f06                 jg 0x5266eb
// 005266e5  803c2f00             cmp byte ptr [edi + ebp], 0
// 005266e9  7413                 je 0x5266fe
// 005266eb  8b0b                 mov ecx, dword ptr [ebx]
// 005266ed  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 005266f4  8b13                 mov edx, dword ptr [ebx]
// 005266f6  8b02                 mov eax, dword ptr [edx]
// 005266f8  53                   push ebx
// 005266f9  ffd0                 call eax
// 005266fb  83c404               add esp, 4
// 005266fe  8b4cb420             mov ecx, dword ptr [esp + esi*4 + 0x20]
// 00526702  8a843424040000       mov al, byte ptr [esp + esi + 0x424]
// 00526709  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052670d  83c601               add esi, 1
// 00526710  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00526714  890cba               mov dword ptr [edx + edi*4], ecx
// 00526717  88042f               mov byte ptr [edi + ebp], al
// 0052671a  7cb6                 jl 0x5266d2
// 0052671c  8b8c2428050000       mov ecx, dword ptr [esp + 0x528]
// 00526723  5f                   pop edi
// 00526724  5e                   pop esi
// 00526725  5d                   pop ebp
// 00526726  5b                   pop ebx
// 00526727  33cc                 xor ecx, esp
// 00526729  e878870f00           call 0x61eea6
// 0052672e  81c41c050000         add esp, 0x51c
// 00526734  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_make_c_derived_tbl)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jchuff.c
