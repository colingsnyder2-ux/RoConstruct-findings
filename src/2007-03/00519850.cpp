// roc 2007-03 00519850  unit: seg_00510000  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519850
//
// 00519850  53                   push ebx
// 00519851  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00519855  33d2                 xor edx, edx
// 00519857  b8f0c99a3b           mov eax, 0x3b9ac9f0
// 0051985c  f7f3                 div ebx
// 0051985e  55                   push ebp
// 0051985f  56                   push esi
// 00519860  8b742410             mov esi, dword ptr [esp + 0x10]
// 00519864  8b6e04               mov ebp, dword ptr [esi + 4]
// 00519867  57                   push edi
// 00519868  8bf8                 mov edi, eax
// 0051986a  85ff                 test edi, edi
// 0051986c  7f13                 jg 0x519881
// 0051986e  8b06                 mov eax, dword ptr [esi]
// 00519870  c7401446000000       mov dword ptr [eax + 0x14], 0x46
// 00519877  8b0e                 mov ecx, dword ptr [esi]
// 00519879  8b11                 mov edx, dword ptr [ecx]
// 0051987b  56                   push esi
// 0051987c  ffd2                 call edx
// 0051987e  83c404               add esp, 4
// 00519881  8b442420             mov eax, dword ptr [esp + 0x20]
// 00519885  3bf8                 cmp edi, eax
// 00519887  7c02                 jl 0x51988b
// 00519889  8bf8                 mov edi, eax
// 0051988b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051988f  03c0                 add eax, eax
// 00519891  03c0                 add eax, eax
// 00519893  50                   push eax
// 00519894  51                   push ecx
// 00519895  56                   push esi
// 00519896  897d50               mov dword ptr [ebp + 0x50], edi
// 00519899  e8e2fdffff           call 0x519680
// 0051989e  33f6                 xor esi, esi
// 005198a0  83c40c               add esp, 0xc
// 005198a3  39742420             cmp dword ptr [esp + 0x20], esi
// 005198a7  8be8                 mov ebp, eax
// 005198a9  7649                 jbe 0x5198f4
// 005198ab  eb03                 jmp 0x5198b0
// 005198ad  8d4900               lea ecx, [ecx]
// 005198b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 005198b4  2bc6                 sub eax, esi
// 005198b6  3bf8                 cmp edi, eax
// 005198b8  7202                 jb 0x5198bc
// 005198ba  8bf8                 mov edi, eax
// 005198bc  8b442418             mov eax, dword ptr [esp + 0x18]
// 005198c0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005198c4  8bd7                 mov edx, edi
// 005198c6  0fafd3               imul edx, ebx
// 005198c9  52                   push edx
// 005198ca  50                   push eax
// 005198cb  51                   push ecx
// 005198cc  e8dffeffff           call 0x5197b0
// 005198d1  83c40c               add esp, 0xc
// 005198d4  85ff                 test edi, edi
// 005198d6  8bcf                 mov ecx, edi
// 005198d8  7614                 jbe 0x5198ee
// 005198da  8d9b00000000         lea ebx, [ebx]
// 005198e0  8944b500             mov dword ptr [ebp + esi*4], eax
// 005198e4  83c601               add esi, 1
// 005198e7  03c3                 add eax, ebx
// 005198e9  83e901               sub ecx, 1
// 005198ec  75f2                 jne 0x5198e0
// 005198ee  3b742420             cmp esi, dword ptr [esp + 0x20]
// 005198f2  72bc                 jb 0x5198b0
// 005198f4  5f                   pop edi
// 005198f5  5e                   pop esi
// 005198f6  8bc5                 mov eax, ebp
// 005198f8  5d                   pop ebp
// 005198f9  5b                   pop ebx
// 005198fa  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_sarray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
