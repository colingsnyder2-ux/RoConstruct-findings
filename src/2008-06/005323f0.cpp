// from server: 100% by auto
// roc 2008-06 005323f0  unit: seg_00530000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005323f0
//
// 005323f0  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 005323f6  57                   push edi
// 005323f7  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 005323fd  8b4710               mov eax, dword ptr [edi + 0x10]
// 00532400  99                   cdq 
// 00532401  83e207               and edx, 7
// 00532404  03c2                 add eax, edx
// 00532406  c1f803               sar eax, 3
// 00532409  014114               add dword ptr [ecx + 0x14], eax
// 0053240c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00532413  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00532419  8b4808               mov ecx, dword ptr [eax + 8]
// 0053241c  56                   push esi
// 0053241d  ffd1                 call ecx
// 0053241f  83c404               add esp, 4
// 00532422  84c0                 test al, al
// 00532424  7502                 jne 0x532428
// 00532426  5f                   pop edi
// 00532427  c3                   ret 
// 00532428  33c0                 xor eax, eax
// 0053242a  398624010000         cmp dword ptr [esi + 0x124], eax
// 00532430  7e15                 jle 0x532447
// 00532432  8d4f14               lea ecx, [edi + 0x14]
// 00532435  c70100000000         mov dword ptr [ecx], 0
// 0053243b  40                   inc eax
// 0053243c  83c104               add ecx, 4
// 0053243f  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00532445  7cee                 jl 0x532435
// 00532447  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0053244d  895724               mov dword ptr [edi + 0x24], edx
// 00532450  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00532457  7504                 jne 0x53245d
// 00532459  c6470800             mov byte ptr [edi + 8], 0
// 0053245d  b001                 mov al, 1
// 0053245f  5f                   pop edi
// 00532460  c3                   ret 
// library jpeg-6b/jdhuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
