// roc 2007-08 0051f530  unit: seg_00510000  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f530
//
// 0051f530  53                   push ebx
// 0051f531  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0051f535  33d2                 xor edx, edx
// 0051f537  b8f0c99a3b           mov eax, 0x3b9ac9f0
// 0051f53c  f7f3                 div ebx
// 0051f53e  55                   push ebp
// 0051f53f  56                   push esi
// 0051f540  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051f544  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051f547  57                   push edi
// 0051f548  8bf8                 mov edi, eax
// 0051f54a  85ff                 test edi, edi
// 0051f54c  7f13                 jg 0x51f561
// 0051f54e  8b06                 mov eax, dword ptr [esi]
// 0051f550  c7401446000000       mov dword ptr [eax + 0x14], 0x46
// 0051f557  8b0e                 mov ecx, dword ptr [esi]
// 0051f559  8b11                 mov edx, dword ptr [ecx]
// 0051f55b  56                   push esi
// 0051f55c  ffd2                 call edx
// 0051f55e  83c404               add esp, 4
// 0051f561  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051f565  3bf8                 cmp edi, eax
// 0051f567  7c02                 jl 0x51f56b
// 0051f569  8bf8                 mov edi, eax
// 0051f56b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051f56f  03c0                 add eax, eax
// 0051f571  03c0                 add eax, eax
// 0051f573  50                   push eax
// 0051f574  51                   push ecx
// 0051f575  56                   push esi
// 0051f576  897d50               mov dword ptr [ebp + 0x50], edi
// 0051f579  e8e2fdffff           call 0x51f360
// 0051f57e  33f6                 xor esi, esi
// 0051f580  83c40c               add esp, 0xc
// 0051f583  39742420             cmp dword ptr [esp + 0x20], esi
// 0051f587  8be8                 mov ebp, eax
// 0051f589  7649                 jbe 0x51f5d4
// 0051f58b  eb03                 jmp 0x51f590
// 0051f58d  8d4900               lea ecx, [ecx]
// 0051f590  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051f594  2bc6                 sub eax, esi
// 0051f596  3bf8                 cmp edi, eax
// 0051f598  7202                 jb 0x51f59c
// 0051f59a  8bf8                 mov edi, eax
// 0051f59c  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051f5a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051f5a4  8bd7                 mov edx, edi
// 0051f5a6  0fafd3               imul edx, ebx
// 0051f5a9  52                   push edx
// 0051f5aa  50                   push eax
// 0051f5ab  51                   push ecx
// 0051f5ac  e8dffeffff           call 0x51f490
// 0051f5b1  83c40c               add esp, 0xc
// 0051f5b4  85ff                 test edi, edi
// 0051f5b6  8bcf                 mov ecx, edi
// 0051f5b8  7614                 jbe 0x51f5ce
// 0051f5ba  8d9b00000000         lea ebx, [ebx]
// 0051f5c0  8944b500             mov dword ptr [ebp + esi*4], eax
// 0051f5c4  83c601               add esi, 1
// 0051f5c7  03c3                 add eax, ebx
// 0051f5c9  83e901               sub ecx, 1
// 0051f5cc  75f2                 jne 0x51f5c0
// 0051f5ce  3b742420             cmp esi, dword ptr [esp + 0x20]
// 0051f5d2  72bc                 jb 0x51f590
// 0051f5d4  5f                   pop edi
// 0051f5d5  5e                   pop esi
// 0051f5d6  8bc5                 mov eax, ebp
// 0051f5d8  5d                   pop ebp
// 0051f5d9  5b                   pop ebx
// 0051f5da  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_sarray)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
