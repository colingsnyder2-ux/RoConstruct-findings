// roc 2007-03 005275a0  unit: seg_00520000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005275a0
//
// 005275a0  57                   push edi
// 005275a1  8bf8                 mov edi, eax
// 005275a3  8b4738               mov eax, dword ptr [edi + 0x38]
// 005275a6  85c0                 test eax, eax
// 005275a8  766b                 jbe 0x527615
// 005275aa  53                   push ebx
// 005275ab  33db                 xor ebx, ebx
// 005275ad  d1f8                 sar eax, 1
// 005275af  7425                 je 0x5275d6
// 005275b1  83c301               add ebx, 1
// 005275b4  d1f8                 sar eax, 1
// 005275b6  75f9                 jne 0x5275b1
// 005275b8  83fb0e               cmp ebx, 0xe
// 005275bb  7e19                 jle 0x5275d6
// 005275bd  8b4720               mov eax, dword ptr [edi + 0x20]
// 005275c0  8b08                 mov ecx, dword ptr [eax]
// 005275c2  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 005275c9  8b4720               mov eax, dword ptr [edi + 0x20]
// 005275cc  8b10                 mov edx, dword ptr [eax]
// 005275ce  50                   push eax
// 005275cf  8b02                 mov eax, dword ptr [edx]
// 005275d1  ffd0                 call eax
// 005275d3  83c404               add esp, 4
// 005275d6  8b4734               mov eax, dword ptr [edi + 0x34]
// 005275d9  56                   push esi
// 005275da  8bf3                 mov esi, ebx
// 005275dc  c1e604               shl esi, 4
// 005275df  8bcf                 mov ecx, edi
// 005275e1  e85affffff           call 0x527540
// 005275e6  85db                 test ebx, ebx
// 005275e8  5e                   pop esi
// 005275e9  7410                 je 0x5275fb
// 005275eb  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 005275ee  51                   push ecx
// 005275ef  8bc3                 mov eax, ebx
// 005275f1  8bcf                 mov ecx, edi
// 005275f3  e868feffff           call 0x527460
// 005275f8  83c404               add esp, 4
// 005275fb  8b473c               mov eax, dword ptr [edi + 0x3c]
// 005275fe  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 00527601  c7473800000000       mov dword ptr [edi + 0x38], 0
// 00527608  e863ffffff           call 0x527570
// 0052760d  c7473c00000000       mov dword ptr [edi + 0x3c], 0
// 00527614  5b                   pop ebx
// 00527615  5f                   pop edi
// 00527616  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_eobrun)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
