// roc 2007-08 0051f9b0  unit: seg_00510000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f9b0
//
// 0051f9b0  51                   push ecx
// 0051f9b1  8b4610               mov eax, dword ptr [esi + 0x10]
// 0051f9b4  53                   push ebx
// 0051f9b5  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0051f9b8  55                   push ebp
// 0051f9b9  8b6e08               mov ebp, dword ptr [esi + 8]
// 0051f9bc  c1e507               shl ebp, 7
// 0051f9bf  57                   push edi
// 0051f9c0  0fafdd               imul ebx, ebp
// 0051f9c3  33ff                 xor edi, edi
// 0051f9c5  85c0                 test eax, eax
// 0051f9c7  896c240c             mov dword ptr [esp + 0xc], ebp
// 0051f9cb  7e77                 jle 0x51fa44
// 0051f9cd  eb05                 jmp 0x51f9d4
// 0051f9cf  90                   nop 
// 0051f9d0  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0051f9d4  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0051f9d7  2bc7                 sub eax, edi
// 0051f9d9  3bc8                 cmp ecx, eax
// 0051f9db  7d02                 jge 0x51f9df
// 0051f9dd  8bc1                 mov eax, ecx
// 0051f9df  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0051f9e2  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0051f9e5  03cf                 add ecx, edi
// 0051f9e7  2bd1                 sub edx, ecx
// 0051f9e9  3bc2                 cmp eax, edx
// 0051f9eb  7c02                 jl 0x51f9ef
// 0051f9ed  8bc2                 mov eax, edx
// 0051f9ef  8b5604               mov edx, dword ptr [esi + 4]
// 0051f9f2  2bd1                 sub edx, ecx
// 0051f9f4  3bc2                 cmp eax, edx
// 0051f9f6  7c02                 jl 0x51f9fa
// 0051f9f8  8bc2                 mov eax, edx
// 0051f9fa  85c0                 test eax, eax
// 0051f9fc  7e46                 jle 0x51fa44
// 0051f9fe  0fafc5               imul eax, ebp
// 0051fa01  807c241800           cmp byte ptr [esp + 0x18], 0
// 0051fa06  8be8                 mov ebp, eax
// 0051fa08  55                   push ebp
// 0051fa09  53                   push ebx
// 0051fa0a  7416                 je 0x51fa22
// 0051fa0c  8b06                 mov eax, dword ptr [esi]
// 0051fa0e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0051fa11  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051fa15  51                   push ecx
// 0051fa16  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0051fa19  8d5628               lea edx, [esi + 0x28]
// 0051fa1c  52                   push edx
// 0051fa1d  50                   push eax
// 0051fa1e  ffd1                 call ecx
// 0051fa20  eb13                 jmp 0x51fa35
// 0051fa22  8b16                 mov edx, dword ptr [esi]
// 0051fa24  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 0051fa27  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051fa2b  8d4628               lea eax, [esi + 0x28]
// 0051fa2e  51                   push ecx
// 0051fa2f  50                   push eax
// 0051fa30  8b00                 mov eax, dword ptr [eax]
// 0051fa32  52                   push edx
// 0051fa33  ffd0                 call eax
// 0051fa35  037e14               add edi, dword ptr [esi + 0x14]
// 0051fa38  8b4610               mov eax, dword ptr [esi + 0x10]
// 0051fa3b  83c414               add esp, 0x14
// 0051fa3e  03dd                 add ebx, ebp
// 0051fa40  3bf8                 cmp edi, eax
// 0051fa42  7c8c                 jl 0x51f9d0
// 0051fa44  5f                   pop edi
// 0051fa45  5d                   pop ebp
// 0051fa46  5b                   pop ebx
// 0051fa47  59                   pop ecx
// 0051fa48  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _do_barray_io)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
