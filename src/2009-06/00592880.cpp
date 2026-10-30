// from server: 100% by auto
// roc 2009-06 00592880  unit: seg_00590000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592880
//
// 00592880  53                   push ebx
// 00592881  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00592885  55                   push ebp
// 00592886  56                   push esi
// 00592887  57                   push edi
// 00592888  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059288c  8b6f04               mov ebp, dword ptr [edi + 4]
// 0059288f  81fbf0c99a3b         cmp ebx, 0x3b9ac9f0
// 00592895  761c                 jbe 0x5928b3
// 00592897  8b07                 mov eax, dword ptr [edi]
// 00592899  c7401436000000       mov dword ptr [eax + 0x14], 0x36
// 005928a0  8b0f                 mov ecx, dword ptr [edi]
// 005928a2  c7411803000000       mov dword ptr [ecx + 0x18], 3
// 005928a9  8b17                 mov edx, dword ptr [edi]
// 005928ab  8b02                 mov eax, dword ptr [edx]
// 005928ad  57                   push edi
// 005928ae  ffd0                 call eax
// 005928b0  83c404               add esp, 4
// 005928b3  8bc3                 mov eax, ebx
// 005928b5  83e007               and eax, 7
// 005928b8  7609                 jbe 0x5928c3
// 005928ba  b908000000           mov ecx, 8
// 005928bf  2bc8                 sub ecx, eax
// 005928c1  03d9                 add ebx, ecx
// 005928c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 005928c7  85c0                 test eax, eax
// 005928c9  7c05                 jl 0x5928d0
// 005928cb  83f802               cmp eax, 2
// 005928ce  7c18                 jl 0x5928e8
// 005928d0  8b17                 mov edx, dword ptr [edi]
// 005928d2  c742140e000000       mov dword ptr [edx + 0x14], 0xe
// 005928d9  8b0f                 mov ecx, dword ptr [edi]
// 005928db  894118               mov dword ptr [ecx + 0x18], eax
// 005928de  8b17                 mov edx, dword ptr [edi]
// 005928e0  8b02                 mov eax, dword ptr [edx]
// 005928e2  57                   push edi
// 005928e3  ffd0                 call eax
// 005928e5  83c404               add esp, 4
// 005928e8  8d4b10               lea ecx, [ebx + 0x10]
// 005928eb  51                   push ecx
// 005928ec  57                   push edi
// 005928ed  e84e810000           call 0x59aa40
// 005928f2  8bf0                 mov esi, eax
// 005928f4  83c408               add esp, 8
// 005928f7  85f6                 test esi, esi
// 005928f9  751c                 jne 0x592917
// 005928fb  8b17                 mov edx, dword ptr [edi]
// 005928fd  c7421436000000       mov dword ptr [edx + 0x14], 0x36
// 00592904  8b07                 mov eax, dword ptr [edi]
// 00592906  c7401804000000       mov dword ptr [eax + 0x18], 4
// 0059290d  8b0f                 mov ecx, dword ptr [edi]
// 0059290f  8b11                 mov edx, dword ptr [ecx]
// 00592911  57                   push edi
// 00592912  ffd2                 call edx
// 00592914  83c404               add esp, 4
// 00592917  8d4310               lea eax, [ebx + 0x10]
// 0059291a  01454c               add dword ptr [ebp + 0x4c], eax
// 0059291d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00592921  8b4c853c             mov ecx, dword ptr [ebp + eax*4 + 0x3c]
// 00592925  895e04               mov dword ptr [esi + 4], ebx
// 00592928  890e                 mov dword ptr [esi], ecx
// 0059292a  c7460800000000       mov dword ptr [esi + 8], 0
// 00592931  8974853c             mov dword ptr [ebp + eax*4 + 0x3c], esi
// 00592935  5f                   pop edi
// 00592936  8d4610               lea eax, [esi + 0x10]
// 00592939  5e                   pop esi
// 0059293a  5d                   pop ebp
// 0059293b  5b                   pop ebx
// 0059293c  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_large)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
