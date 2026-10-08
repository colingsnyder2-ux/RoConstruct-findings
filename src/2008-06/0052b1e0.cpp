// from server: 100% by auto
// roc 2008-06 0052b1e0  unit: seg_00520000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052b1e0
//
// 0052b1e0  51                   push ecx
// 0052b1e1  8b4610               mov eax, dword ptr [esi + 0x10]
// 0052b1e4  53                   push ebx
// 0052b1e5  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0052b1e8  55                   push ebp
// 0052b1e9  8b6e08               mov ebp, dword ptr [esi + 8]
// 0052b1ec  c1e507               shl ebp, 7
// 0052b1ef  57                   push edi
// 0052b1f0  0fafdd               imul ebx, ebp
// 0052b1f3  33ff                 xor edi, edi
// 0052b1f5  896c240c             mov dword ptr [esp + 0xc], ebp
// 0052b1f9  85c0                 test eax, eax
// 0052b1fb  7e77                 jle 0x52b274
// 0052b1fd  eb05                 jmp 0x52b204
// 0052b1ff  90                   nop 
// 0052b200  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0052b204  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0052b207  2bc7                 sub eax, edi
// 0052b209  3bc8                 cmp ecx, eax
// 0052b20b  7d02                 jge 0x52b20f
// 0052b20d  8bc1                 mov eax, ecx
// 0052b20f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0052b212  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0052b215  03cf                 add ecx, edi
// 0052b217  2bd1                 sub edx, ecx
// 0052b219  3bc2                 cmp eax, edx
// 0052b21b  7c02                 jl 0x52b21f
// 0052b21d  8bc2                 mov eax, edx
// 0052b21f  8b5604               mov edx, dword ptr [esi + 4]
// 0052b222  2bd1                 sub edx, ecx
// 0052b224  3bc2                 cmp eax, edx
// 0052b226  7c02                 jl 0x52b22a
// 0052b228  8bc2                 mov eax, edx
// 0052b22a  85c0                 test eax, eax
// 0052b22c  7e46                 jle 0x52b274
// 0052b22e  0fafc5               imul eax, ebp
// 0052b231  807c241800           cmp byte ptr [esp + 0x18], 0
// 0052b236  8be8                 mov ebp, eax
// 0052b238  55                   push ebp
// 0052b239  53                   push ebx
// 0052b23a  7416                 je 0x52b252
// 0052b23c  8b06                 mov eax, dword ptr [esi]
// 0052b23e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0052b241  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052b245  51                   push ecx
// 0052b246  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0052b249  8d5628               lea edx, [esi + 0x28]
// 0052b24c  52                   push edx
// 0052b24d  50                   push eax
// 0052b24e  ffd1                 call ecx
// 0052b250  eb13                 jmp 0x52b265
// 0052b252  8b16                 mov edx, dword ptr [esi]
// 0052b254  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 0052b257  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052b25b  8d4628               lea eax, [esi + 0x28]
// 0052b25e  51                   push ecx
// 0052b25f  50                   push eax
// 0052b260  8b00                 mov eax, dword ptr [eax]
// 0052b262  52                   push edx
// 0052b263  ffd0                 call eax
// 0052b265  037e14               add edi, dword ptr [esi + 0x14]
// 0052b268  8b4610               mov eax, dword ptr [esi + 0x10]
// 0052b26b  83c414               add esp, 0x14
// 0052b26e  03dd                 add ebx, ebp
// 0052b270  3bf8                 cmp edi, eax
// 0052b272  7c8c                 jl 0x52b200
// 0052b274  5f                   pop edi
// 0052b275  5d                   pop ebp
// 0052b276  5b                   pop ebx
// 0052b277  59                   pop ecx
// 0052b278  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _do_barray_io)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
