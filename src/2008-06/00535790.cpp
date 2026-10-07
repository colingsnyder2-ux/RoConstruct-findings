// roc 2008-06 00535790  unit: seg_00530000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00535790
//
// 00535790  8b4704               mov eax, dword ptr [edi + 4]
// 00535793  8b10                 mov edx, dword ptr [eax]
// 00535795  53                   push ebx
// 00535796  55                   push ebp
// 00535797  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0053579b  56                   push esi
// 0053579c  8bcd                 mov ecx, ebp
// 0053579e  c1e105               shl ecx, 5
// 005357a1  51                   push ecx
// 005357a2  6a01                 push 1
// 005357a4  57                   push edi
// 005357a5  ffd2                 call edx
// 005357a7  8bf0                 mov esi, eax
// 005357a9  33db                 xor ebx, ebx
// 005357ab  b81f000000           mov eax, 0x1f
// 005357b0  56                   push esi
// 005357b1  8bcf                 mov ecx, edi
// 005357b3  891e                 mov dword ptr [esi], ebx
// 005357b5  894604               mov dword ptr [esi + 4], eax
// 005357b8  895e08               mov dword ptr [esi + 8], ebx
// 005357bb  c7460c3f000000       mov dword ptr [esi + 0xc], 0x3f
// 005357c2  895e10               mov dword ptr [esi + 0x10], ebx
// 005357c5  894614               mov dword ptr [esi + 0x14], eax
// 005357c8  e8e3f8ffff           call 0x5350b0
// 005357cd  55                   push ebp
// 005357ce  6a01                 push 1
// 005357d0  56                   push esi
// 005357d1  57                   push edi
// 005357d2  e8b9fcffff           call 0x535490
// 005357d7  8be8                 mov ebp, eax
// 005357d9  83c420               add esp, 0x20
// 005357dc  3beb                 cmp ebp, ebx
// 005357de  7e14                 jle 0x5357f4
// 005357e0  53                   push ebx
// 005357e1  57                   push edi
// 005357e2  8bc6                 mov eax, esi
// 005357e4  e827feffff           call 0x535610
// 005357e9  43                   inc ebx
// 005357ea  83c408               add esp, 8
// 005357ed  83c620               add esi, 0x20
// 005357f0  3bdd                 cmp ebx, ebp
// 005357f2  7cec                 jl 0x5357e0
// 005357f4  8b07                 mov eax, dword ptr [edi]
// 005357f6  896f70               mov dword ptr [edi + 0x70], ebp
// 005357f9  c7401460000000       mov dword ptr [eax + 0x14], 0x60
// 00535800  8b0f                 mov ecx, dword ptr [edi]
// 00535802  896918               mov dword ptr [ecx + 0x18], ebp
// 00535805  8b17                 mov edx, dword ptr [edi]
// 00535807  8b4204               mov eax, dword ptr [edx + 4]
// 0053580a  6a01                 push 1
// 0053580c  57                   push edi
// 0053580d  ffd0                 call eax
// 0053580f  83c408               add esp, 8
// 00535812  5e                   pop esi
// 00535813  5d                   pop ebp
// 00535814  5b                   pop ebx
// 00535815  c3                   ret 
// library jpeg-6b/jquant2.c (function _select_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
