// roc 2009-06 00592940  unit: seg_00590000  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592940
//
// 00592940  53                   push ebx
// 00592941  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00592945  33d2                 xor edx, edx
// 00592947  b8f0c99a3b           mov eax, 0x3b9ac9f0
// 0059294c  f7f3                 div ebx
// 0059294e  55                   push ebp
// 0059294f  56                   push esi
// 00592950  8b742410             mov esi, dword ptr [esp + 0x10]
// 00592954  8b6e04               mov ebp, dword ptr [esi + 4]
// 00592957  57                   push edi
// 00592958  8bf8                 mov edi, eax
// 0059295a  85ff                 test edi, edi
// 0059295c  7f13                 jg 0x592971
// 0059295e  8b06                 mov eax, dword ptr [esi]
// 00592960  c7401446000000       mov dword ptr [eax + 0x14], 0x46
// 00592967  8b0e                 mov ecx, dword ptr [esi]
// 00592969  8b11                 mov edx, dword ptr [ecx]
// 0059296b  56                   push esi
// 0059296c  ffd2                 call edx
// 0059296e  83c404               add esp, 4
// 00592971  8b442420             mov eax, dword ptr [esp + 0x20]
// 00592975  3bf8                 cmp edi, eax
// 00592977  7c02                 jl 0x59297b
// 00592979  8bf8                 mov edi, eax
// 0059297b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059297f  03c0                 add eax, eax
// 00592981  03c0                 add eax, eax
// 00592983  50                   push eax
// 00592984  51                   push ecx
// 00592985  56                   push esi
// 00592986  897d50               mov dword ptr [ebp + 0x50], edi
// 00592989  e8a2fdffff           call 0x592730
// 0059298e  33f6                 xor esi, esi
// 00592990  83c40c               add esp, 0xc
// 00592993  8be8                 mov ebp, eax
// 00592995  39742420             cmp dword ptr [esp + 0x20], esi
// 00592999  7647                 jbe 0x5929e2
// 0059299b  eb03                 jmp 0x5929a0
// 0059299d  8d4900               lea ecx, [ecx]
// 005929a0  8b442420             mov eax, dword ptr [esp + 0x20]
// 005929a4  2bc6                 sub eax, esi
// 005929a6  3bf8                 cmp edi, eax
// 005929a8  7202                 jb 0x5929ac
// 005929aa  8bf8                 mov edi, eax
// 005929ac  8b442418             mov eax, dword ptr [esp + 0x18]
// 005929b0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005929b4  8bd7                 mov edx, edi
// 005929b6  0fafd3               imul edx, ebx
// 005929b9  52                   push edx
// 005929ba  50                   push eax
// 005929bb  51                   push ecx
// 005929bc  e8bffeffff           call 0x592880
// 005929c1  83c40c               add esp, 0xc
// 005929c4  8bcf                 mov ecx, edi
// 005929c6  85ff                 test edi, edi
// 005929c8  7612                 jbe 0x5929dc
// 005929ca  8d9b00000000         lea ebx, [ebx]
// 005929d0  8944b500             mov dword ptr [ebp + esi*4], eax
// 005929d4  46                   inc esi
// 005929d5  03c3                 add eax, ebx
// 005929d7  83e901               sub ecx, 1
// 005929da  75f4                 jne 0x5929d0
// 005929dc  3b742420             cmp esi, dword ptr [esp + 0x20]
// 005929e0  72be                 jb 0x5929a0
// 005929e2  5f                   pop edi
// 005929e3  5e                   pop esi
// 005929e4  8bc5                 mov eax, ebp
// 005929e6  5d                   pop ebp
// 005929e7  5b                   pop ebx
// 005929e8  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_sarray)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
