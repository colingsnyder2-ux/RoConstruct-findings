// roc 2009-06 0059cd10  unit: seg_00590000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059cd10
//
// 0059cd10  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0059cd16  57                   push edi
// 0059cd17  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0059cd1d  8b4710               mov eax, dword ptr [edi + 0x10]
// 0059cd20  99                   cdq 
// 0059cd21  83e207               and edx, 7
// 0059cd24  03c2                 add eax, edx
// 0059cd26  c1f803               sar eax, 3
// 0059cd29  014114               add dword ptr [ecx + 0x14], eax
// 0059cd2c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0059cd33  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0059cd39  8b4808               mov ecx, dword ptr [eax + 8]
// 0059cd3c  56                   push esi
// 0059cd3d  ffd1                 call ecx
// 0059cd3f  83c404               add esp, 4
// 0059cd42  84c0                 test al, al
// 0059cd44  7502                 jne 0x59cd48
// 0059cd46  5f                   pop edi
// 0059cd47  c3                   ret 
// 0059cd48  33c0                 xor eax, eax
// 0059cd4a  398624010000         cmp dword ptr [esi + 0x124], eax
// 0059cd50  7e15                 jle 0x59cd67
// 0059cd52  8d4f18               lea ecx, [edi + 0x18]
// 0059cd55  c70100000000         mov dword ptr [ecx], 0
// 0059cd5b  40                   inc eax
// 0059cd5c  83c104               add ecx, 4
// 0059cd5f  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0059cd65  7cee                 jl 0x59cd55
// 0059cd67  c7471400000000       mov dword ptr [edi + 0x14], 0
// 0059cd6e  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0059cd74  895728               mov dword ptr [edi + 0x28], edx
// 0059cd77  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 0059cd7e  7504                 jne 0x59cd84
// 0059cd80  c6470800             mov byte ptr [edi + 8], 0
// 0059cd84  b001                 mov al, 1
// 0059cd86  5f                   pop edi
// 0059cd87  c3                   ret 
// library jpeg-6b/jdphuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
