// roc 2010-06 00583600  unit: seg_00580000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00583600
//
// 00583600  8b4704               mov eax, dword ptr [edi + 4]
// 00583603  8b10                 mov edx, dword ptr [eax]
// 00583605  53                   push ebx
// 00583606  55                   push ebp
// 00583607  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0058360b  56                   push esi
// 0058360c  8bcd                 mov ecx, ebp
// 0058360e  c1e105               shl ecx, 5
// 00583611  51                   push ecx
// 00583612  6a01                 push 1
// 00583614  57                   push edi
// 00583615  ffd2                 call edx
// 00583617  8bf0                 mov esi, eax
// 00583619  33db                 xor ebx, ebx
// 0058361b  b81f000000           mov eax, 0x1f
// 00583620  56                   push esi
// 00583621  8bcf                 mov ecx, edi
// 00583623  891e                 mov dword ptr [esi], ebx
// 00583625  894604               mov dword ptr [esi + 4], eax
// 00583628  895e08               mov dword ptr [esi + 8], ebx
// 0058362b  c7460c3f000000       mov dword ptr [esi + 0xc], 0x3f
// 00583632  895e10               mov dword ptr [esi + 0x10], ebx
// 00583635  894614               mov dword ptr [esi + 0x14], eax
// 00583638  e8e3f8ffff           call 0x582f20
// 0058363d  55                   push ebp
// 0058363e  6a01                 push 1
// 00583640  56                   push esi
// 00583641  57                   push edi
// 00583642  e8b9fcffff           call 0x583300
// 00583647  8be8                 mov ebp, eax
// 00583649  83c420               add esp, 0x20
// 0058364c  3beb                 cmp ebp, ebx
// 0058364e  7e14                 jle 0x583664
// 00583650  53                   push ebx
// 00583651  57                   push edi
// 00583652  8bc6                 mov eax, esi
// 00583654  e827feffff           call 0x583480
// 00583659  43                   inc ebx
// 0058365a  83c408               add esp, 8
// 0058365d  83c620               add esi, 0x20
// 00583660  3bdd                 cmp ebx, ebp
// 00583662  7cec                 jl 0x583650
// 00583664  8b07                 mov eax, dword ptr [edi]
// 00583666  896f70               mov dword ptr [edi + 0x70], ebp
// 00583669  c7401460000000       mov dword ptr [eax + 0x14], 0x60
// 00583670  8b0f                 mov ecx, dword ptr [edi]
// 00583672  896918               mov dword ptr [ecx + 0x18], ebp
// 00583675  8b17                 mov edx, dword ptr [edi]
// 00583677  8b4204               mov eax, dword ptr [edx + 4]
// 0058367a  6a01                 push 1
// 0058367c  57                   push edi
// 0058367d  ffd0                 call eax
// 0058367f  83c408               add esp, 8
// 00583682  5e                   pop esi
// 00583683  5d                   pop ebp
// 00583684  5b                   pop ebx
// 00583685  c3                   ret 
// library jpeg-6b/jquant2.c (function _select_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
