// roc 2009-06 0059c6d0  unit: seg_00590000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059c6d0
//
// 0059c6d0  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0059c6d6  57                   push edi
// 0059c6d7  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0059c6dd  8b4710               mov eax, dword ptr [edi + 0x10]
// 0059c6e0  99                   cdq 
// 0059c6e1  83e207               and edx, 7
// 0059c6e4  03c2                 add eax, edx
// 0059c6e6  c1f803               sar eax, 3
// 0059c6e9  014114               add dword ptr [ecx + 0x14], eax
// 0059c6ec  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0059c6f3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0059c6f9  8b4808               mov ecx, dword ptr [eax + 8]
// 0059c6fc  56                   push esi
// 0059c6fd  ffd1                 call ecx
// 0059c6ff  83c404               add esp, 4
// 0059c702  84c0                 test al, al
// 0059c704  7502                 jne 0x59c708
// 0059c706  5f                   pop edi
// 0059c707  c3                   ret 
// 0059c708  33c0                 xor eax, eax
// 0059c70a  398624010000         cmp dword ptr [esi + 0x124], eax
// 0059c710  7e15                 jle 0x59c727
// 0059c712  8d4f14               lea ecx, [edi + 0x14]
// 0059c715  c70100000000         mov dword ptr [ecx], 0
// 0059c71b  40                   inc eax
// 0059c71c  83c104               add ecx, 4
// 0059c71f  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0059c725  7cee                 jl 0x59c715
// 0059c727  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0059c72d  895724               mov dword ptr [edi + 0x24], edx
// 0059c730  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 0059c737  7504                 jne 0x59c73d
// 0059c739  c6470800             mov byte ptr [edi + 8], 0
// 0059c73d  b001                 mov al, 1
// 0059c73f  5f                   pop edi
// 0059c740  c3                   ret 
// library jpeg-6b/jdhuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
