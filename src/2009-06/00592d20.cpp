// from server: 100% by auto
// roc 2009-06 00592d20  unit: seg_00590000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592d20
//
// 00592d20  51                   push ecx
// 00592d21  8b4610               mov eax, dword ptr [esi + 0x10]
// 00592d24  53                   push ebx
// 00592d25  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00592d28  55                   push ebp
// 00592d29  8b6e08               mov ebp, dword ptr [esi + 8]
// 00592d2c  57                   push edi
// 00592d2d  0fafdd               imul ebx, ebp
// 00592d30  33ff                 xor edi, edi
// 00592d32  896c240c             mov dword ptr [esp + 0xc], ebp
// 00592d36  85c0                 test eax, eax
// 00592d38  7e7a                 jle 0x592db4
// 00592d3a  eb08                 jmp 0x592d44
// 00592d3c  8d642400             lea esp, [esp]
// 00592d40  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00592d44  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00592d47  2bc7                 sub eax, edi
// 00592d49  3bc8                 cmp ecx, eax
// 00592d4b  7d02                 jge 0x592d4f
// 00592d4d  8bc1                 mov eax, ecx
// 00592d4f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00592d52  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00592d55  03cf                 add ecx, edi
// 00592d57  2bd1                 sub edx, ecx
// 00592d59  3bc2                 cmp eax, edx
// 00592d5b  7c02                 jl 0x592d5f
// 00592d5d  8bc2                 mov eax, edx
// 00592d5f  8b5604               mov edx, dword ptr [esi + 4]
// 00592d62  2bd1                 sub edx, ecx
// 00592d64  3bc2                 cmp eax, edx
// 00592d66  7c02                 jl 0x592d6a
// 00592d68  8bc2                 mov eax, edx
// 00592d6a  85c0                 test eax, eax
// 00592d6c  7e46                 jle 0x592db4
// 00592d6e  0fafc5               imul eax, ebp
// 00592d71  807c241800           cmp byte ptr [esp + 0x18], 0
// 00592d76  8be8                 mov ebp, eax
// 00592d78  55                   push ebp
// 00592d79  53                   push ebx
// 00592d7a  7416                 je 0x592d92
// 00592d7c  8b06                 mov eax, dword ptr [esi]
// 00592d7e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00592d81  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00592d85  51                   push ecx
// 00592d86  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00592d89  8d5628               lea edx, [esi + 0x28]
// 00592d8c  52                   push edx
// 00592d8d  50                   push eax
// 00592d8e  ffd1                 call ecx
// 00592d90  eb13                 jmp 0x592da5
// 00592d92  8b16                 mov edx, dword ptr [esi]
// 00592d94  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 00592d97  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00592d9b  8d4628               lea eax, [esi + 0x28]
// 00592d9e  51                   push ecx
// 00592d9f  50                   push eax
// 00592da0  8b00                 mov eax, dword ptr [eax]
// 00592da2  52                   push edx
// 00592da3  ffd0                 call eax
// 00592da5  037e14               add edi, dword ptr [esi + 0x14]
// 00592da8  8b4610               mov eax, dword ptr [esi + 0x10]
// 00592dab  83c414               add esp, 0x14
// 00592dae  03dd                 add ebx, ebp
// 00592db0  3bf8                 cmp edi, eax
// 00592db2  7c8c                 jl 0x592d40
// 00592db4  5f                   pop edi
// 00592db5  5d                   pop ebp
// 00592db6  5b                   pop ebx
// 00592db7  59                   pop ecx
// 00592db8  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _do_sarray_io)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
