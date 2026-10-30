// roc 2009-12 00623310  unit: seg_00620000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623310
//
// 00623310  56                   push esi
// 00623311  8b742408             mov esi, dword ptr [esp + 8]
// 00623315  8b4604               mov eax, dword ptr [esi + 4]
// 00623318  8b08                 mov ecx, dword ptr [eax]
// 0062331a  6a40                 push 0x40
// 0062331c  6a01                 push 1
// 0062331e  56                   push esi
// 0062331f  ffd1                 call ecx
// 00623321  898640010000         mov dword ptr [esi + 0x140], eax
// 00623327  83c40c               add esp, 0xc
// 0062332a  c700c0326200         mov dword ptr [eax], 0x6232c0
// 00623330  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 00623337  7561                 jne 0x62339a
// 00623339  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0062333e  7415                 je 0x623355
// 00623340  8b16                 mov edx, dword ptr [esi]
// 00623342  c7421404000000       mov dword ptr [edx + 0x14], 4
// 00623349  8b06                 mov eax, dword ptr [esi]
// 0062334b  8b08                 mov ecx, dword ptr [eax]
// 0062334d  56                   push esi
// 0062334e  ffd1                 call ecx
// 00623350  83c404               add esp, 4
// 00623353  5e                   pop esi
// 00623354  c3                   ret 
// 00623355  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00623358  55                   push ebp
// 00623359  33ed                 xor ebp, ebp
// 0062335b  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0062335e  7e39                 jle 0x623399
// 00623360  53                   push ebx
// 00623361  57                   push edi
// 00623362  8d791c               lea edi, [ecx + 0x1c]
// 00623365  8d5818               lea ebx, [eax + 0x18]
// 00623368  8b47f0               mov eax, dword ptr [edi - 0x10]
// 0062336b  8b0f                 mov ecx, dword ptr [edi]
// 0062336d  8b5604               mov edx, dword ptr [esi + 4]
// 00623370  8b5208               mov edx, dword ptr [edx + 8]
// 00623373  03c0                 add eax, eax
// 00623375  03c9                 add ecx, ecx
// 00623377  03c0                 add eax, eax
// 00623379  03c0                 add eax, eax
// 0062337b  50                   push eax
// 0062337c  03c9                 add ecx, ecx
// 0062337e  03c9                 add ecx, ecx
// 00623380  51                   push ecx
// 00623381  6a01                 push 1
// 00623383  56                   push esi
// 00623384  ffd2                 call edx
// 00623386  8903                 mov dword ptr [ebx], eax
// 00623388  45                   inc ebp
// 00623389  83c410               add esp, 0x10
// 0062338c  83c304               add ebx, 4
// 0062338f  83c754               add edi, 0x54
// 00623392  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 00623395  7cd1                 jl 0x623368
// 00623397  5f                   pop edi
// 00623398  5b                   pop ebx
// 00623399  5d                   pop ebp
// 0062339a  5e                   pop esi
// 0062339b  c3                   ret 
// library jpeg-6b/jcmainct.c (function _jinit_c_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
