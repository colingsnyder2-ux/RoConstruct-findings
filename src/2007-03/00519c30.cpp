// roc 2007-03 00519c30  unit: seg_00510000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519c30
//
// 00519c30  51                   push ecx
// 00519c31  8b4610               mov eax, dword ptr [esi + 0x10]
// 00519c34  53                   push ebx
// 00519c35  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00519c38  55                   push ebp
// 00519c39  8b6e08               mov ebp, dword ptr [esi + 8]
// 00519c3c  57                   push edi
// 00519c3d  0fafdd               imul ebx, ebp
// 00519c40  33ff                 xor edi, edi
// 00519c42  85c0                 test eax, eax
// 00519c44  896c240c             mov dword ptr [esp + 0xc], ebp
// 00519c48  7e7a                 jle 0x519cc4
// 00519c4a  eb08                 jmp 0x519c54
// 00519c4c  8d642400             lea esp, [esp]
// 00519c50  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00519c54  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00519c57  2bc7                 sub eax, edi
// 00519c59  3bc8                 cmp ecx, eax
// 00519c5b  7d02                 jge 0x519c5f
// 00519c5d  8bc1                 mov eax, ecx
// 00519c5f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00519c62  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00519c65  03cf                 add ecx, edi
// 00519c67  2bd1                 sub edx, ecx
// 00519c69  3bc2                 cmp eax, edx
// 00519c6b  7c02                 jl 0x519c6f
// 00519c6d  8bc2                 mov eax, edx
// 00519c6f  8b5604               mov edx, dword ptr [esi + 4]
// 00519c72  2bd1                 sub edx, ecx
// 00519c74  3bc2                 cmp eax, edx
// 00519c76  7c02                 jl 0x519c7a
// 00519c78  8bc2                 mov eax, edx
// 00519c7a  85c0                 test eax, eax
// 00519c7c  7e46                 jle 0x519cc4
// 00519c7e  0fafc5               imul eax, ebp
// 00519c81  807c241800           cmp byte ptr [esp + 0x18], 0
// 00519c86  8be8                 mov ebp, eax
// 00519c88  55                   push ebp
// 00519c89  53                   push ebx
// 00519c8a  7416                 je 0x519ca2
// 00519c8c  8b06                 mov eax, dword ptr [esi]
// 00519c8e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00519c91  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00519c95  51                   push ecx
// 00519c96  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00519c99  8d5628               lea edx, [esi + 0x28]
// 00519c9c  52                   push edx
// 00519c9d  50                   push eax
// 00519c9e  ffd1                 call ecx
// 00519ca0  eb13                 jmp 0x519cb5
// 00519ca2  8b16                 mov edx, dword ptr [esi]
// 00519ca4  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 00519ca7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00519cab  8d4628               lea eax, [esi + 0x28]
// 00519cae  51                   push ecx
// 00519caf  50                   push eax
// 00519cb0  8b00                 mov eax, dword ptr [eax]
// 00519cb2  52                   push edx
// 00519cb3  ffd0                 call eax
// 00519cb5  037e14               add edi, dword ptr [esi + 0x14]
// 00519cb8  8b4610               mov eax, dword ptr [esi + 0x10]
// 00519cbb  83c414               add esp, 0x14
// 00519cbe  03dd                 add ebx, ebp
// 00519cc0  3bf8                 cmp edi, eax
// 00519cc2  7c8c                 jl 0x519c50
// 00519cc4  5f                   pop edi
// 00519cc5  5d                   pop ebp
// 00519cc6  5b                   pop ebx
// 00519cc7  59                   pop ecx
// 00519cc8  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _do_sarray_io)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
