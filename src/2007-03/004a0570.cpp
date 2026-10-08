// roc 2007-03 004a0570  unit: seg_004a0000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a0570
//
// 004a0570  53                   push ebx
// 004a0571  56                   push esi
// 004a0572  8bf1                 mov esi, ecx
// 004a0574  33db                 xor ebx, ebx
// 004a0576  395e10               cmp dword ptr [esi + 0x10], ebx
// 004a0579  57                   push edi
// 004a057a  746c                 je 0x4a05e8
// 004a057c  8d642400             lea esp, [esp]
// 004a0580  8b4610               mov eax, dword ptr [esi + 0x10]
// 004a0583  3bc3                 cmp eax, ebx
// 004a0585  745c                 je 0x4a05e3
// 004a0587  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a058a  8b5608               mov edx, dword ptr [esi + 8]
// 004a058d  8d4408ff             lea eax, [eax + ecx - 1]
// 004a0591  8bc8                 mov ecx, eax
// 004a0593  d1e9                 shr ecx, 1
// 004a0595  3bd1                 cmp edx, ecx
// 004a0597  7702                 ja 0x4a059b
// 004a0599  2bca                 sub ecx, edx
// 004a059b  8b5604               mov edx, dword ptr [esi + 4]
// 004a059e  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 004a05a1  83e001               and eax, 1
// 004a05a4  8b7cc104             mov edi, dword ptr [ecx + eax*8 + 4]
// 004a05a8  3bfb                 cmp edi, ebx
// 004a05aa  8d44c104             lea eax, [ecx + eax*8 + 4]
// 004a05ae  742a                 je 0x4a05da
// 004a05b0  8d5704               lea edx, [edi + 4]
// 004a05b3  83c8ff               or eax, 0xffffffff
// 004a05b6  f00fc102             lock xadd dword ptr [edx], eax
// 004a05ba  751e                 jne 0x4a05da
// 004a05bc  8b17                 mov edx, dword ptr [edi]
// 004a05be  8b4204               mov eax, dword ptr [edx + 4]
// 004a05c1  8bcf                 mov ecx, edi
// 004a05c3  ffd0                 call eax
// 004a05c5  8d4f08               lea ecx, [edi + 8]
// 004a05c8  83caff               or edx, 0xffffffff
// 004a05cb  f00fc111             lock xadd dword ptr [ecx], edx
// 004a05cf  7509                 jne 0x4a05da
// 004a05d1  8b07                 mov eax, dword ptr [edi]
// 004a05d3  8b5008               mov edx, dword ptr [eax + 8]
// 004a05d6  8bcf                 mov ecx, edi
// 004a05d8  ffd2                 call edx
// 004a05da  834610ff             add dword ptr [esi + 0x10], -1
// 004a05de  7503                 jne 0x4a05e3
// 004a05e0  895e0c               mov dword ptr [esi + 0xc], ebx
// 004a05e3  395e10               cmp dword ptr [esi + 0x10], ebx
// 004a05e6  7598                 jne 0x4a0580
// 004a05e8  8b7e08               mov edi, dword ptr [esi + 8]
// 004a05eb  3bfb                 cmp edi, ebx
// 004a05ed  761e                 jbe 0x4a060d
// 004a05ef  90                   nop 
// 004a05f0  8b4604               mov eax, dword ptr [esi + 4]
// 004a05f3  83ef01               sub edi, 1
// 004a05f6  391cb8               cmp dword ptr [eax + edi*4], ebx
// 004a05f9  8d04b8               lea eax, [eax + edi*4]
// 004a05fc  740b                 je 0x4a0609
// 004a05fe  8b08                 mov ecx, dword ptr [eax]
// 004a0600  51                   push ecx
// 004a0601  e8eada1700           call 0x61e0f0
// 004a0606  83c404               add esp, 4
// 004a0609  3bfb                 cmp edi, ebx
// 004a060b  77e3                 ja 0x4a05f0
// 004a060d  8b4604               mov eax, dword ptr [esi + 4]
// 004a0610  3bc3                 cmp eax, ebx
// 004a0612  7409                 je 0x4a061d
// 004a0614  50                   push eax
// 004a0615  e8d6da1700           call 0x61e0f0
// 004a061a  83c404               add esp, 4
// 004a061d  5f                   pop edi
// 004a061e  895e04               mov dword ptr [esi + 4], ebx
// 004a0621  895e08               mov dword ptr [esi + 8], ebx
// 004a0624  5e                   pop esi
// 004a0625  5b                   pop ebx
// 004a0626  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?_Tidy@?$deque@V?$shared_ptr@VMarker@Network@RBX@@@boost@@V?$allocator@V?$shared_ptr@VMarker@Network@RBX@@@boost@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
