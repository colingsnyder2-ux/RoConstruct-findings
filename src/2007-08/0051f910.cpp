// from server: 100% by auto
// roc 2007-08 0051f910  unit: seg_00510000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f910
//
// 0051f910  51                   push ecx
// 0051f911  8b4610               mov eax, dword ptr [esi + 0x10]
// 0051f914  53                   push ebx
// 0051f915  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0051f918  55                   push ebp
// 0051f919  8b6e08               mov ebp, dword ptr [esi + 8]
// 0051f91c  57                   push edi
// 0051f91d  0fafdd               imul ebx, ebp
// 0051f920  33ff                 xor edi, edi
// 0051f922  85c0                 test eax, eax
// 0051f924  896c240c             mov dword ptr [esp + 0xc], ebp
// 0051f928  7e7a                 jle 0x51f9a4
// 0051f92a  eb08                 jmp 0x51f934
// 0051f92c  8d642400             lea esp, [esp]
// 0051f930  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0051f934  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0051f937  2bc7                 sub eax, edi
// 0051f939  3bc8                 cmp ecx, eax
// 0051f93b  7d02                 jge 0x51f93f
// 0051f93d  8bc1                 mov eax, ecx
// 0051f93f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0051f942  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0051f945  03cf                 add ecx, edi
// 0051f947  2bd1                 sub edx, ecx
// 0051f949  3bc2                 cmp eax, edx
// 0051f94b  7c02                 jl 0x51f94f
// 0051f94d  8bc2                 mov eax, edx
// 0051f94f  8b5604               mov edx, dword ptr [esi + 4]
// 0051f952  2bd1                 sub edx, ecx
// 0051f954  3bc2                 cmp eax, edx
// 0051f956  7c02                 jl 0x51f95a
// 0051f958  8bc2                 mov eax, edx
// 0051f95a  85c0                 test eax, eax
// 0051f95c  7e46                 jle 0x51f9a4
// 0051f95e  0fafc5               imul eax, ebp
// 0051f961  807c241800           cmp byte ptr [esp + 0x18], 0
// 0051f966  8be8                 mov ebp, eax
// 0051f968  55                   push ebp
// 0051f969  53                   push ebx
// 0051f96a  7416                 je 0x51f982
// 0051f96c  8b06                 mov eax, dword ptr [esi]
// 0051f96e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0051f971  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051f975  51                   push ecx
// 0051f976  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0051f979  8d5628               lea edx, [esi + 0x28]
// 0051f97c  52                   push edx
// 0051f97d  50                   push eax
// 0051f97e  ffd1                 call ecx
// 0051f980  eb13                 jmp 0x51f995
// 0051f982  8b16                 mov edx, dword ptr [esi]
// 0051f984  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 0051f987  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051f98b  8d4628               lea eax, [esi + 0x28]
// 0051f98e  51                   push ecx
// 0051f98f  50                   push eax
// 0051f990  8b00                 mov eax, dword ptr [eax]
// 0051f992  52                   push edx
// 0051f993  ffd0                 call eax
// 0051f995  037e14               add edi, dword ptr [esi + 0x14]
// 0051f998  8b4610               mov eax, dword ptr [esi + 0x10]
// 0051f99b  83c414               add esp, 0x14
// 0051f99e  03dd                 add ebx, ebp
// 0051f9a0  3bf8                 cmp edi, eax
// 0051f9a2  7c8c                 jl 0x51f930
// 0051f9a4  5f                   pop edi
// 0051f9a5  5d                   pop ebp
// 0051f9a6  5b                   pop ebx
// 0051f9a7  59                   pop ecx
// 0051f9a8  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _do_sarray_io)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
