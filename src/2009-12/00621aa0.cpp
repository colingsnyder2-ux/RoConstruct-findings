// roc 2009-12 00621aa0  unit: seg_00620000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00621aa0
//
// 00621aa0  8b4704               mov eax, dword ptr [edi + 4]
// 00621aa3  8b10                 mov edx, dword ptr [eax]
// 00621aa5  53                   push ebx
// 00621aa6  55                   push ebp
// 00621aa7  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00621aab  56                   push esi
// 00621aac  8bcd                 mov ecx, ebp
// 00621aae  c1e105               shl ecx, 5
// 00621ab1  51                   push ecx
// 00621ab2  6a01                 push 1
// 00621ab4  57                   push edi
// 00621ab5  ffd2                 call edx
// 00621ab7  8bf0                 mov esi, eax
// 00621ab9  33db                 xor ebx, ebx
// 00621abb  b81f000000           mov eax, 0x1f
// 00621ac0  56                   push esi
// 00621ac1  8bcf                 mov ecx, edi
// 00621ac3  891e                 mov dword ptr [esi], ebx
// 00621ac5  894604               mov dword ptr [esi + 4], eax
// 00621ac8  895e08               mov dword ptr [esi + 8], ebx
// 00621acb  c7460c3f000000       mov dword ptr [esi + 0xc], 0x3f
// 00621ad2  895e10               mov dword ptr [esi + 0x10], ebx
// 00621ad5  894614               mov dword ptr [esi + 0x14], eax
// 00621ad8  e8e3f8ffff           call 0x6213c0
// 00621add  55                   push ebp
// 00621ade  6a01                 push 1
// 00621ae0  56                   push esi
// 00621ae1  57                   push edi
// 00621ae2  e8b9fcffff           call 0x6217a0
// 00621ae7  8be8                 mov ebp, eax
// 00621ae9  83c420               add esp, 0x20
// 00621aec  3beb                 cmp ebp, ebx
// 00621aee  7e14                 jle 0x621b04
// 00621af0  53                   push ebx
// 00621af1  57                   push edi
// 00621af2  8bc6                 mov eax, esi
// 00621af4  e827feffff           call 0x621920
// 00621af9  43                   inc ebx
// 00621afa  83c408               add esp, 8
// 00621afd  83c620               add esi, 0x20
// 00621b00  3bdd                 cmp ebx, ebp
// 00621b02  7cec                 jl 0x621af0
// 00621b04  8b07                 mov eax, dword ptr [edi]
// 00621b06  896f70               mov dword ptr [edi + 0x70], ebp
// 00621b09  c7401460000000       mov dword ptr [eax + 0x14], 0x60
// 00621b10  8b0f                 mov ecx, dword ptr [edi]
// 00621b12  896918               mov dword ptr [ecx + 0x18], ebp
// 00621b15  8b17                 mov edx, dword ptr [edi]
// 00621b17  8b4204               mov eax, dword ptr [edx + 4]
// 00621b1a  6a01                 push 1
// 00621b1c  57                   push edi
// 00621b1d  ffd0                 call eax
// 00621b1f  83c408               add esp, 8
// 00621b22  5e                   pop esi
// 00621b23  5d                   pop ebp
// 00621b24  5b                   pop ebx
// 00621b25  c3                   ret 
// library jpeg-6b/jquant2.c (function _select_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
