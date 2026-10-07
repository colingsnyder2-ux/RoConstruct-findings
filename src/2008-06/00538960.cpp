// roc 2008-06 00538960  unit: seg_00530000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538960
//
// 00538960  53                   push ebx
// 00538961  8a5c2408             mov bl, byte ptr [esp + 8]
// 00538965  56                   push esi
// 00538966  8bf0                 mov esi, eax
// 00538968  e853ffffff           call 0x5388c0
// 0053896d  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00538971  7544                 jne 0x5389b7
// 00538973  6a07                 push 7
// 00538975  6a7f                 push 0x7f
// 00538977  e8d4fdffff           call 0x538750
// 0053897c  8b4610               mov eax, dword ptr [esi + 0x10]
// 0053897f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00538986  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0053898d  c600ff               mov byte ptr [eax], 0xff
// 00538990  ff4610               inc dword ptr [esi + 0x10]
// 00538993  83c408               add esp, 8
// 00538996  834614ff             add dword ptr [esi + 0x14], -1
// 0053899a  7505                 jne 0x5389a1
// 0053899c  e86ffdffff           call 0x538710
// 005389a1  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005389a4  80eb30               sub bl, 0x30
// 005389a7  8819                 mov byte ptr [ecx], bl
// 005389a9  ff4610               inc dword ptr [esi + 0x10]
// 005389ac  834614ff             add dword ptr [esi + 0x14], -1
// 005389b0  7505                 jne 0x5389b7
// 005389b2  e859fdffff           call 0x538710
// 005389b7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005389ba  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 005389c1  7525                 jne 0x5389e8
// 005389c3  33c0                 xor eax, eax
// 005389c5  3981e4000000         cmp dword ptr [ecx + 0xe4], eax
// 005389cb  7e29                 jle 0x5389f6
// 005389cd  8d4e24               lea ecx, [esi + 0x24]
// 005389d0  c70100000000         mov dword ptr [ecx], 0
// 005389d6  8b5620               mov edx, dword ptr [esi + 0x20]
// 005389d9  40                   inc eax
// 005389da  83c104               add ecx, 4
// 005389dd  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 005389e3  7ceb                 jl 0x5389d0
// 005389e5  5e                   pop esi
// 005389e6  5b                   pop ebx
// 005389e7  c3                   ret 
// 005389e8  c7463800000000       mov dword ptr [esi + 0x38], 0
// 005389ef  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 005389f6  5e                   pop esi
// 005389f7  5b                   pop ebx
// 005389f8  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
