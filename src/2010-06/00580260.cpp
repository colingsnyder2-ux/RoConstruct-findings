// from server: 100% by auto
// roc 2010-06 00580260  unit: seg_00580000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00580260
//
// 00580260  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00580266  57                   push edi
// 00580267  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0058026d  8b4710               mov eax, dword ptr [edi + 0x10]
// 00580270  99                   cdq 
// 00580271  83e207               and edx, 7
// 00580274  03c2                 add eax, edx
// 00580276  c1f803               sar eax, 3
// 00580279  014114               add dword ptr [ecx + 0x14], eax
// 0058027c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00580283  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00580289  8b4808               mov ecx, dword ptr [eax + 8]
// 0058028c  56                   push esi
// 0058028d  ffd1                 call ecx
// 0058028f  83c404               add esp, 4
// 00580292  84c0                 test al, al
// 00580294  7502                 jne 0x580298
// 00580296  5f                   pop edi
// 00580297  c3                   ret 
// 00580298  33c0                 xor eax, eax
// 0058029a  398624010000         cmp dword ptr [esi + 0x124], eax
// 005802a0  7e15                 jle 0x5802b7
// 005802a2  8d4f14               lea ecx, [edi + 0x14]
// 005802a5  c70100000000         mov dword ptr [ecx], 0
// 005802ab  40                   inc eax
// 005802ac  83c104               add ecx, 4
// 005802af  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 005802b5  7cee                 jl 0x5802a5
// 005802b7  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 005802bd  895724               mov dword ptr [edi + 0x24], edx
// 005802c0  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 005802c7  7504                 jne 0x5802cd
// 005802c9  c6470800             mov byte ptr [edi + 8], 0
// 005802cd  b001                 mov al, 1
// 005802cf  5f                   pop edi
// 005802d0  c3                   ret 
// library jpeg-6b/jdhuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
