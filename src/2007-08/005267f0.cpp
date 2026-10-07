// roc 2007-08 005267f0  unit: G3D::Line  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005267f0
//
// 005267f0  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 005267f6  57                   push edi
// 005267f7  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 005267fd  8b4710               mov eax, dword ptr [edi + 0x10]
// 00526800  99                   cdq 
// 00526801  83e207               and edx, 7
// 00526804  03c2                 add eax, edx
// 00526806  c1f803               sar eax, 3
// 00526809  014114               add dword ptr [ecx + 0x14], eax
// 0052680c  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00526813  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00526819  8b4808               mov ecx, dword ptr [eax + 8]
// 0052681c  56                   push esi
// 0052681d  ffd1                 call ecx
// 0052681f  83c404               add esp, 4
// 00526822  84c0                 test al, al
// 00526824  7502                 jne 0x526828
// 00526826  5f                   pop edi
// 00526827  c3                   ret 
// 00526828  33c0                 xor eax, eax
// 0052682a  398624010000         cmp dword ptr [esi + 0x124], eax
// 00526830  7e22                 jle 0x526854
// 00526832  8d4f18               lea ecx, [edi + 0x18]
// 00526835  eb09                 jmp 0x526840
// 00526837  8da42400000000       lea esp, [esp]
// 0052683e  8bff                 mov edi, edi
// 00526840  c70100000000         mov dword ptr [ecx], 0
// 00526846  83c001               add eax, 1
// 00526849  83c104               add ecx, 4
// 0052684c  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00526852  7cec                 jl 0x526840
// 00526854  c7471400000000       mov dword ptr [edi + 0x14], 0
// 0052685b  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00526861  895728               mov dword ptr [edi + 0x28], edx
// 00526864  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 0052686b  7504                 jne 0x526871
// 0052686d  c6470800             mov byte ptr [edi + 8], 0
// 00526871  b001                 mov al, 1
// 00526873  5f                   pop edi
// 00526874  c3                   ret 
// library jpeg-6b/jdphuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
