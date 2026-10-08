// roc 2007-03 00520e80  unit: seg_00520000  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00520e80
//
// 00520e80  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00520e86  57                   push edi
// 00520e87  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00520e8d  8b4710               mov eax, dword ptr [edi + 0x10]
// 00520e90  99                   cdq 
// 00520e91  83e207               and edx, 7
// 00520e94  03c2                 add eax, edx
// 00520e96  c1f803               sar eax, 3
// 00520e99  014114               add dword ptr [ecx + 0x14], eax
// 00520e9c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00520ea3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00520ea9  8b4808               mov ecx, dword ptr [eax + 8]
// 00520eac  56                   push esi
// 00520ead  ffd1                 call ecx
// 00520eaf  83c404               add esp, 4
// 00520eb2  84c0                 test al, al
// 00520eb4  7502                 jne 0x520eb8
// 00520eb6  5f                   pop edi
// 00520eb7  c3                   ret 
// 00520eb8  33c0                 xor eax, eax
// 00520eba  398624010000         cmp dword ptr [esi + 0x124], eax
// 00520ec0  7e22                 jle 0x520ee4
// 00520ec2  8d4f14               lea ecx, [edi + 0x14]
// 00520ec5  eb09                 jmp 0x520ed0
// 00520ec7  8da42400000000       lea esp, [esp]
// 00520ece  8bff                 mov edi, edi
// 00520ed0  c70100000000         mov dword ptr [ecx], 0
// 00520ed6  83c001               add eax, 1
// 00520ed9  83c104               add ecx, 4
// 00520edc  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00520ee2  7cec                 jl 0x520ed0
// 00520ee4  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00520eea  895724               mov dword ptr [edi + 0x24], edx
// 00520eed  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00520ef4  7504                 jne 0x520efa
// 00520ef6  c6470800             mov byte ptr [edi + 8], 0
// 00520efa  b001                 mov al, 1
// 00520efc  5f                   pop edi
// 00520efd  c3                   ret 
// library jpeg-6b/jdhuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
