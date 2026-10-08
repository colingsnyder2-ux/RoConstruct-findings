// from server: 100% by auto
// roc 2009-06 0059d930  unit: seg_00590000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059d930
//
// 0059d930  53                   push ebx
// 0059d931  56                   push esi
// 0059d932  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059d936  8b4604               mov eax, dword ptr [esi + 4]
// 0059d939  8b08                 mov ecx, dword ptr [eax]
// 0059d93b  6a40                 push 0x40
// 0059d93d  6a01                 push 1
// 0059d93f  56                   push esi
// 0059d940  ffd1                 call ecx
// 0059d942  898698010000         mov dword ptr [esi + 0x198], eax
// 0059d948  c700d0d65900         mov dword ptr [eax], 0x59d6d0
// 0059d94e  33db                 xor ebx, ebx
// 0059d950  89582c               mov dword ptr [eax + 0x2c], ebx
// 0059d953  895830               mov dword ptr [eax + 0x30], ebx
// 0059d956  895834               mov dword ptr [eax + 0x34], ebx
// 0059d959  895838               mov dword ptr [eax + 0x38], ebx
// 0059d95c  8b4624               mov eax, dword ptr [esi + 0x24]
// 0059d95f  8b5604               mov edx, dword ptr [esi + 4]
// 0059d962  8b0a                 mov ecx, dword ptr [edx]
// 0059d964  c1e008               shl eax, 8
// 0059d967  50                   push eax
// 0059d968  6a01                 push 1
// 0059d96a  56                   push esi
// 0059d96b  ffd1                 call ecx
// 0059d96d  83c418               add esp, 0x18
// 0059d970  395e24               cmp dword ptr [esi + 0x24], ebx
// 0059d973  89868c000000         mov dword ptr [esi + 0x8c], eax
// 0059d979  8bd0                 mov edx, eax
// 0059d97b  7e1c                 jle 0x59d999
// 0059d97d  57                   push edi
// 0059d97e  8bff                 mov edi, edi
// 0059d980  83c8ff               or eax, 0xffffffff
// 0059d983  8bfa                 mov edi, edx
// 0059d985  b940000000           mov ecx, 0x40
// 0059d98a  43                   inc ebx
// 0059d98b  f3ab                 rep stosd dword ptr es:[edi], eax
// 0059d98d  81c200010000         add edx, 0x100
// 0059d993  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 0059d996  7ce8                 jl 0x59d980
// 0059d998  5f                   pop edi
// 0059d999  5e                   pop esi
// 0059d99a  5b                   pop ebx
// 0059d99b  c3                   ret 
// library jpeg-6b/jdphuff.c (function _jinit_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
