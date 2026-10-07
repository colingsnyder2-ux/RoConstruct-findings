// roc 2012-06 00662260  unit: seg_00660000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00662260
//
// 00662260  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00662266  57                   push edi
// 00662267  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0066226d  8b4710               mov eax, dword ptr [edi + 0x10]
// 00662270  99                   cdq 
// 00662271  83e207               and edx, 7
// 00662274  03c2                 add eax, edx
// 00662276  c1f803               sar eax, 3
// 00662279  014114               add dword ptr [ecx + 0x14], eax
// 0066227c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00662283  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00662289  8b4808               mov ecx, dword ptr [eax + 8]
// 0066228c  56                   push esi
// 0066228d  ffd1                 call ecx
// 0066228f  83c404               add esp, 4
// 00662292  84c0                 test al, al
// 00662294  7502                 jne 0x662298
// 00662296  5f                   pop edi
// 00662297  c3                   ret 
// 00662298  33c0                 xor eax, eax
// 0066229a  398624010000         cmp dword ptr [esi + 0x124], eax
// 006622a0  7e15                 jle 0x6622b7
// 006622a2  8d4f18               lea ecx, [edi + 0x18]
// 006622a5  c70100000000         mov dword ptr [ecx], 0
// 006622ab  40                   inc eax
// 006622ac  83c104               add ecx, 4
// 006622af  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 006622b5  7cee                 jl 0x6622a5
// 006622b7  c7471400000000       mov dword ptr [edi + 0x14], 0
// 006622be  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 006622c4  895728               mov dword ptr [edi + 0x28], edx
// 006622c7  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 006622ce  7504                 jne 0x6622d4
// 006622d0  c6470800             mov byte ptr [edi + 8], 0
// 006622d4  b001                 mov al, 1
// 006622d6  5f                   pop edi
// 006622d7  c3                   ret 
// library jpeg-6b/jdphuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
