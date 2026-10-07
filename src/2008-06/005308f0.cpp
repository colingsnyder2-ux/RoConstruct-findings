// roc 2008-06 005308f0  unit: seg_00530000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005308f0
//
// 005308f0  83ec0c               sub esp, 0xc
// 005308f3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005308f6  8b4604               mov eax, dword ptr [esi + 4]
// 005308f9  8b10                 mov edx, dword ptr [eax]
// 005308fb  53                   push ebx
// 005308fc  55                   push ebp
// 005308fd  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 00530903  03c9                 add ecx, ecx
// 00530905  57                   push edi
// 00530906  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 0053090c  03c9                 add ecx, ecx
// 0053090e  03c9                 add ecx, ecx
// 00530910  51                   push ecx
// 00530911  6a01                 push 1
// 00530913  56                   push esi
// 00530914  897c2420             mov dword ptr [esp + 0x20], edi
// 00530918  ffd2                 call edx
// 0053091a  894738               mov dword ptr [edi + 0x38], eax
// 0053091d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00530920  8d1488               lea edx, [eax + ecx*4]
// 00530923  89573c               mov dword ptr [edi + 0x3c], edx
// 00530926  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0053092c  33db                 xor ebx, ebx
// 0053092e  83c40c               add esp, 0xc
// 00530931  395e24               cmp dword ptr [esi + 0x24], ebx
// 00530934  7e5b                 jle 0x530991
// 00530936  83c504               add ebp, 4
// 00530939  896c240c             mov dword ptr [esp + 0xc], ebp
// 0053093d  8d680c               lea ebp, [eax + 0xc]
// 00530940  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00530943  0faf4500             imul eax, dword ptr [ebp]
// 00530947  99                   cdq 
// 00530948  f7be18010000         idiv dword ptr [esi + 0x118]
// 0053094e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00530952  0faff8               imul edi, eax
// 00530955  8d0cfd00000000       lea ecx, [edi*8]
// 0053095c  51                   push ecx
// 0053095d  89442414             mov dword ptr [esp + 0x14], eax
// 00530961  8b4604               mov eax, dword ptr [esi + 4]
// 00530964  8b10                 mov edx, dword ptr [eax]
// 00530966  6a01                 push 1
// 00530968  56                   push esi
// 00530969  ffd2                 call edx
// 0053096b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053096f  8d0488               lea eax, [eax + ecx*4]
// 00530972  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00530976  8b5138               mov edx, dword ptr [ecx + 0x38]
// 00530979  89049a               mov dword ptr [edx + ebx*4], eax
// 0053097c  8b493c               mov ecx, dword ptr [ecx + 0x3c]
// 0053097f  8d04b8               lea eax, [eax + edi*4]
// 00530982  890499               mov dword ptr [ecx + ebx*4], eax
// 00530985  43                   inc ebx
// 00530986  83c40c               add esp, 0xc
// 00530989  83c554               add ebp, 0x54
// 0053098c  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 0053098f  7caf                 jl 0x530940
// 00530991  5f                   pop edi
// 00530992  5d                   pop ebp
// 00530993  5b                   pop ebx
// 00530994  83c40c               add esp, 0xc
// 00530997  c3                   ret 
// library jpeg-6b/jdmainct.c (function _alloc_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
