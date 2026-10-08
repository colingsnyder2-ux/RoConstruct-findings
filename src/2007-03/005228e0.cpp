// roc 2007-03 005228e0  unit: seg_00520000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005228e0
//
// 005228e0  53                   push ebx
// 005228e1  55                   push ebp
// 005228e2  56                   push esi
// 005228e3  57                   push edi
// 005228e4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005228e8  8bafa0010000         mov ebp, dword ptr [edi + 0x1a0]
// 005228ee  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 005228f1  3b8714010000         cmp eax, dword ptr [edi + 0x114]
// 005228f7  7c52                 jl 0x52294b
// 005228f9  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 005228ff  33db                 xor ebx, ebx
// 00522901  395f24               cmp dword ptr [edi + 0x24], ebx
// 00522904  894c2414             mov dword ptr [esp + 0x14], ecx
// 00522908  7e3a                 jle 0x522944
// 0052290a  8d750c               lea esi, [ebp + 0xc]
// 0052290d  8d4900               lea ecx, [ecx]
// 00522910  8b5658               mov edx, dword ptr [esi + 0x58]
// 00522913  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00522917  0faf10               imul edx, dword ptr [eax]
// 0052291a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052291e  8b0499               mov eax, dword ptr [ecx + ebx*4]
// 00522921  8d0c90               lea ecx, [eax + edx*4]
// 00522924  8b542414             mov edx, dword ptr [esp + 0x14]
// 00522928  8b4628               mov eax, dword ptr [esi + 0x28]
// 0052292b  56                   push esi
// 0052292c  51                   push ecx
// 0052292d  52                   push edx
// 0052292e  57                   push edi
// 0052292f  ffd0                 call eax
// 00522931  8344242454           add dword ptr [esp + 0x24], 0x54
// 00522936  83c301               add ebx, 1
// 00522939  83c410               add esp, 0x10
// 0052293c  83c604               add esi, 4
// 0052293f  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 00522942  7ccc                 jl 0x522910
// 00522944  c7455c00000000       mov dword ptr [ebp + 0x5c], 0
// 0052294b  8bb714010000         mov esi, dword ptr [edi + 0x114]
// 00522951  2b755c               sub esi, dword ptr [ebp + 0x5c]
// 00522954  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00522957  3bf0                 cmp esi, eax
// 00522959  7602                 jbe 0x52295d
// 0052295b  8bf0                 mov esi, eax
// 0052295d  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00522961  8b03                 mov eax, dword ptr [ebx]
// 00522963  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00522967  2bc8                 sub ecx, eax
// 00522969  3bf1                 cmp esi, ecx
// 0052296b  7602                 jbe 0x52296f
// 0052296d  8bf1                 mov esi, ecx
// 0052296f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00522973  8b8fa4010000         mov ecx, dword ptr [edi + 0x1a4]
// 00522979  8b4904               mov ecx, dword ptr [ecx + 4]
// 0052297c  56                   push esi
// 0052297d  8d0482               lea eax, [edx + eax*4]
// 00522980  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 00522983  50                   push eax
// 00522984  52                   push edx
// 00522985  8d450c               lea eax, [ebp + 0xc]
// 00522988  50                   push eax
// 00522989  57                   push edi
// 0052298a  ffd1                 call ecx
// 0052298c  0133                 add dword ptr [ebx], esi
// 0052298e  297560               sub dword ptr [ebp + 0x60], esi
// 00522991  01755c               add dword ptr [ebp + 0x5c], esi
// 00522994  8b6d5c               mov ebp, dword ptr [ebp + 0x5c]
// 00522997  83c414               add esp, 0x14
// 0052299a  3baf14010000         cmp ebp, dword ptr [edi + 0x114]
// 005229a0  5f                   pop edi
// 005229a1  5e                   pop esi
// 005229a2  5d                   pop ebp
// 005229a3  5b                   pop ebx
// 005229a4  7c07                 jl 0x5229ad
// 005229a6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005229aa  830001               add dword ptr [eax], 1
// 005229ad  c3                   ret 
// library jpeg-6b/jdsample.c (function _sep_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
