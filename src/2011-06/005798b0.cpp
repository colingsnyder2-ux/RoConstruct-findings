// from server: 100% by auto
// roc 2011-06 005798b0  unit: seg_00570000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005798b0
//
// 005798b0  8b4704               mov eax, dword ptr [edi + 4]
// 005798b3  8b10                 mov edx, dword ptr [eax]
// 005798b5  53                   push ebx
// 005798b6  55                   push ebp
// 005798b7  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005798bb  56                   push esi
// 005798bc  8bcd                 mov ecx, ebp
// 005798be  c1e105               shl ecx, 5
// 005798c1  51                   push ecx
// 005798c2  6a01                 push 1
// 005798c4  57                   push edi
// 005798c5  ffd2                 call edx
// 005798c7  8bf0                 mov esi, eax
// 005798c9  33db                 xor ebx, ebx
// 005798cb  b81f000000           mov eax, 0x1f
// 005798d0  56                   push esi
// 005798d1  8bcf                 mov ecx, edi
// 005798d3  891e                 mov dword ptr [esi], ebx
// 005798d5  894604               mov dword ptr [esi + 4], eax
// 005798d8  895e08               mov dword ptr [esi + 8], ebx
// 005798db  c7460c3f000000       mov dword ptr [esi + 0xc], 0x3f
// 005798e2  895e10               mov dword ptr [esi + 0x10], ebx
// 005798e5  894614               mov dword ptr [esi + 0x14], eax
// 005798e8  e8e3f8ffff           call 0x5791d0
// 005798ed  55                   push ebp
// 005798ee  6a01                 push 1
// 005798f0  56                   push esi
// 005798f1  57                   push edi
// 005798f2  e8b9fcffff           call 0x5795b0
// 005798f7  8be8                 mov ebp, eax
// 005798f9  83c420               add esp, 0x20
// 005798fc  3beb                 cmp ebp, ebx
// 005798fe  7e14                 jle 0x579914
// 00579900  53                   push ebx
// 00579901  57                   push edi
// 00579902  8bc6                 mov eax, esi
// 00579904  e827feffff           call 0x579730
// 00579909  43                   inc ebx
// 0057990a  83c408               add esp, 8
// 0057990d  83c620               add esi, 0x20
// 00579910  3bdd                 cmp ebx, ebp
// 00579912  7cec                 jl 0x579900
// 00579914  8b07                 mov eax, dword ptr [edi]
// 00579916  896f70               mov dword ptr [edi + 0x70], ebp
// 00579919  c7401460000000       mov dword ptr [eax + 0x14], 0x60
// 00579920  8b0f                 mov ecx, dword ptr [edi]
// 00579922  896918               mov dword ptr [ecx + 0x18], ebp
// 00579925  8b17                 mov edx, dword ptr [edi]
// 00579927  8b4204               mov eax, dword ptr [edx + 4]
// 0057992a  6a01                 push 1
// 0057992c  57                   push edi
// 0057992d  ffd0                 call eax
// 0057992f  83c408               add esp, 8
// 00579932  5e                   pop esi
// 00579933  5d                   pop ebp
// 00579934  5b                   pop ebx
// 00579935  c3                   ret 
// library jpeg-6b/jquant2.c (function _select_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
