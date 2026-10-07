// roc 2010-06 005867d0  unit: seg_00580000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005867d0
//
// 005867d0  53                   push ebx
// 005867d1  8a5c2408             mov bl, byte ptr [esp + 8]
// 005867d5  56                   push esi
// 005867d6  8bf0                 mov esi, eax
// 005867d8  e853ffffff           call 0x586730
// 005867dd  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005867e1  7544                 jne 0x586827
// 005867e3  6a07                 push 7
// 005867e5  6a7f                 push 0x7f
// 005867e7  e8d4fdffff           call 0x5865c0
// 005867ec  8b4610               mov eax, dword ptr [esi + 0x10]
// 005867ef  c7461800000000       mov dword ptr [esi + 0x18], 0
// 005867f6  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 005867fd  c600ff               mov byte ptr [eax], 0xff
// 00586800  ff4610               inc dword ptr [esi + 0x10]
// 00586803  83c408               add esp, 8
// 00586806  834614ff             add dword ptr [esi + 0x14], -1
// 0058680a  7505                 jne 0x586811
// 0058680c  e86ffdffff           call 0x586580
// 00586811  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00586814  80eb30               sub bl, 0x30
// 00586817  8819                 mov byte ptr [ecx], bl
// 00586819  ff4610               inc dword ptr [esi + 0x10]
// 0058681c  834614ff             add dword ptr [esi + 0x14], -1
// 00586820  7505                 jne 0x586827
// 00586822  e859fdffff           call 0x586580
// 00586827  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0058682a  83b92c01000000       cmp dword ptr [ecx + 0x12c], 0
// 00586831  7525                 jne 0x586858
// 00586833  33c0                 xor eax, eax
// 00586835  3981e4000000         cmp dword ptr [ecx + 0xe4], eax
// 0058683b  7e29                 jle 0x586866
// 0058683d  8d4e24               lea ecx, [esi + 0x24]
// 00586840  c70100000000         mov dword ptr [ecx], 0
// 00586846  8b5620               mov edx, dword ptr [esi + 0x20]
// 00586849  40                   inc eax
// 0058684a  83c104               add ecx, 4
// 0058684d  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 00586853  7ceb                 jl 0x586840
// 00586855  5e                   pop esi
// 00586856  5b                   pop ebx
// 00586857  c3                   ret 
// 00586858  c7463800000000       mov dword ptr [esi + 0x38], 0
// 0058685f  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00586866  5e                   pop esi
// 00586867  5b                   pop ebx
// 00586868  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
