// roc 2012-06 00664fc0  unit: seg_00660000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00664fc0
//
// 00664fc0  8b4704               mov eax, dword ptr [edi + 4]
// 00664fc3  8b10                 mov edx, dword ptr [eax]
// 00664fc5  53                   push ebx
// 00664fc6  55                   push ebp
// 00664fc7  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00664fcb  56                   push esi
// 00664fcc  8bcd                 mov ecx, ebp
// 00664fce  c1e105               shl ecx, 5
// 00664fd1  51                   push ecx
// 00664fd2  6a01                 push 1
// 00664fd4  57                   push edi
// 00664fd5  ffd2                 call edx
// 00664fd7  8bf0                 mov esi, eax
// 00664fd9  33db                 xor ebx, ebx
// 00664fdb  b81f000000           mov eax, 0x1f
// 00664fe0  56                   push esi
// 00664fe1  8bcf                 mov ecx, edi
// 00664fe3  891e                 mov dword ptr [esi], ebx
// 00664fe5  894604               mov dword ptr [esi + 4], eax
// 00664fe8  895e08               mov dword ptr [esi + 8], ebx
// 00664feb  c7460c3f000000       mov dword ptr [esi + 0xc], 0x3f
// 00664ff2  895e10               mov dword ptr [esi + 0x10], ebx
// 00664ff5  894614               mov dword ptr [esi + 0x14], eax
// 00664ff8  e8e3f8ffff           call 0x6648e0
// 00664ffd  55                   push ebp
// 00664ffe  6a01                 push 1
// 00665000  56                   push esi
// 00665001  57                   push edi
// 00665002  e8b9fcffff           call 0x664cc0
// 00665007  8be8                 mov ebp, eax
// 00665009  83c420               add esp, 0x20
// 0066500c  3beb                 cmp ebp, ebx
// 0066500e  7e14                 jle 0x665024
// 00665010  53                   push ebx
// 00665011  57                   push edi
// 00665012  8bc6                 mov eax, esi
// 00665014  e827feffff           call 0x664e40
// 00665019  43                   inc ebx
// 0066501a  83c408               add esp, 8
// 0066501d  83c620               add esi, 0x20
// 00665020  3bdd                 cmp ebx, ebp
// 00665022  7cec                 jl 0x665010
// 00665024  8b07                 mov eax, dword ptr [edi]
// 00665026  896f70               mov dword ptr [edi + 0x70], ebp
// 00665029  c7401460000000       mov dword ptr [eax + 0x14], 0x60
// 00665030  8b0f                 mov ecx, dword ptr [edi]
// 00665032  896918               mov dword ptr [ecx + 0x18], ebp
// 00665035  8b17                 mov edx, dword ptr [edi]
// 00665037  8b4204               mov eax, dword ptr [edx + 4]
// 0066503a  6a01                 push 1
// 0066503c  57                   push edi
// 0066503d  ffd0                 call eax
// 0066503f  83c408               add esp, 8
// 00665042  5e                   pop esi
// 00665043  5d                   pop ebp
// 00665044  5b                   pop ebx
// 00665045  c3                   ret 
// library jpeg-6b/jquant2.c (function _select_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
