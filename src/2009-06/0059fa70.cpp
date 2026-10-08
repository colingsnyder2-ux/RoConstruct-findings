// from server: 100% by auto
// roc 2009-06 0059fa70  unit: seg_00590000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059fa70
//
// 0059fa70  8b4704               mov eax, dword ptr [edi + 4]
// 0059fa73  8b10                 mov edx, dword ptr [eax]
// 0059fa75  53                   push ebx
// 0059fa76  55                   push ebp
// 0059fa77  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0059fa7b  56                   push esi
// 0059fa7c  8bcd                 mov ecx, ebp
// 0059fa7e  c1e105               shl ecx, 5
// 0059fa81  51                   push ecx
// 0059fa82  6a01                 push 1
// 0059fa84  57                   push edi
// 0059fa85  ffd2                 call edx
// 0059fa87  8bf0                 mov esi, eax
// 0059fa89  33db                 xor ebx, ebx
// 0059fa8b  b81f000000           mov eax, 0x1f
// 0059fa90  56                   push esi
// 0059fa91  8bcf                 mov ecx, edi
// 0059fa93  891e                 mov dword ptr [esi], ebx
// 0059fa95  894604               mov dword ptr [esi + 4], eax
// 0059fa98  895e08               mov dword ptr [esi + 8], ebx
// 0059fa9b  c7460c3f000000       mov dword ptr [esi + 0xc], 0x3f
// 0059faa2  895e10               mov dword ptr [esi + 0x10], ebx
// 0059faa5  894614               mov dword ptr [esi + 0x14], eax
// 0059faa8  e8e3f8ffff           call 0x59f390
// 0059faad  55                   push ebp
// 0059faae  6a01                 push 1
// 0059fab0  56                   push esi
// 0059fab1  57                   push edi
// 0059fab2  e8b9fcffff           call 0x59f770
// 0059fab7  8be8                 mov ebp, eax
// 0059fab9  83c420               add esp, 0x20
// 0059fabc  3beb                 cmp ebp, ebx
// 0059fabe  7e14                 jle 0x59fad4
// 0059fac0  53                   push ebx
// 0059fac1  57                   push edi
// 0059fac2  8bc6                 mov eax, esi
// 0059fac4  e827feffff           call 0x59f8f0
// 0059fac9  43                   inc ebx
// 0059faca  83c408               add esp, 8
// 0059facd  83c620               add esi, 0x20
// 0059fad0  3bdd                 cmp ebx, ebp
// 0059fad2  7cec                 jl 0x59fac0
// 0059fad4  8b07                 mov eax, dword ptr [edi]
// 0059fad6  896f70               mov dword ptr [edi + 0x70], ebp
// 0059fad9  c7401460000000       mov dword ptr [eax + 0x14], 0x60
// 0059fae0  8b0f                 mov ecx, dword ptr [edi]
// 0059fae2  896918               mov dword ptr [ecx + 0x18], ebp
// 0059fae5  8b17                 mov edx, dword ptr [edi]
// 0059fae7  8b4204               mov eax, dword ptr [edx + 4]
// 0059faea  6a01                 push 1
// 0059faec  57                   push edi
// 0059faed  ffd0                 call eax
// 0059faef  83c408               add esp, 8
// 0059faf2  5e                   pop esi
// 0059faf3  5d                   pop ebp
// 0059faf4  5b                   pop ebx
// 0059faf5  c3                   ret 
// library jpeg-6b/jquant2.c (function _select_colors)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
