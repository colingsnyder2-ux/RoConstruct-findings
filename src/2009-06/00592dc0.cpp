// from server: 100% by auto
// roc 2009-06 00592dc0  unit: seg_00590000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00592dc0
//
// 00592dc0  51                   push ecx
// 00592dc1  8b4610               mov eax, dword ptr [esi + 0x10]
// 00592dc4  53                   push ebx
// 00592dc5  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00592dc8  55                   push ebp
// 00592dc9  8b6e08               mov ebp, dword ptr [esi + 8]
// 00592dcc  c1e507               shl ebp, 7
// 00592dcf  57                   push edi
// 00592dd0  0fafdd               imul ebx, ebp
// 00592dd3  33ff                 xor edi, edi
// 00592dd5  896c240c             mov dword ptr [esp + 0xc], ebp
// 00592dd9  85c0                 test eax, eax
// 00592ddb  7e77                 jle 0x592e54
// 00592ddd  eb05                 jmp 0x592de4
// 00592ddf  90                   nop 
// 00592de0  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00592de4  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00592de7  2bc7                 sub eax, edi
// 00592de9  3bc8                 cmp ecx, eax
// 00592deb  7d02                 jge 0x592def
// 00592ded  8bc1                 mov eax, ecx
// 00592def  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00592df2  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00592df5  03cf                 add ecx, edi
// 00592df7  2bd1                 sub edx, ecx
// 00592df9  3bc2                 cmp eax, edx
// 00592dfb  7c02                 jl 0x592dff
// 00592dfd  8bc2                 mov eax, edx
// 00592dff  8b5604               mov edx, dword ptr [esi + 4]
// 00592e02  2bd1                 sub edx, ecx
// 00592e04  3bc2                 cmp eax, edx
// 00592e06  7c02                 jl 0x592e0a
// 00592e08  8bc2                 mov eax, edx
// 00592e0a  85c0                 test eax, eax
// 00592e0c  7e46                 jle 0x592e54
// 00592e0e  0fafc5               imul eax, ebp
// 00592e11  807c241800           cmp byte ptr [esp + 0x18], 0
// 00592e16  8be8                 mov ebp, eax
// 00592e18  55                   push ebp
// 00592e19  53                   push ebx
// 00592e1a  7416                 je 0x592e32
// 00592e1c  8b06                 mov eax, dword ptr [esi]
// 00592e1e  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00592e21  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00592e25  51                   push ecx
// 00592e26  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00592e29  8d5628               lea edx, [esi + 0x28]
// 00592e2c  52                   push edx
// 00592e2d  50                   push eax
// 00592e2e  ffd1                 call ecx
// 00592e30  eb13                 jmp 0x592e45
// 00592e32  8b16                 mov edx, dword ptr [esi]
// 00592e34  8b0cba               mov ecx, dword ptr [edx + edi*4]
// 00592e37  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00592e3b  8d4628               lea eax, [esi + 0x28]
// 00592e3e  51                   push ecx
// 00592e3f  50                   push eax
// 00592e40  8b00                 mov eax, dword ptr [eax]
// 00592e42  52                   push edx
// 00592e43  ffd0                 call eax
// 00592e45  037e14               add edi, dword ptr [esi + 0x14]
// 00592e48  8b4610               mov eax, dword ptr [esi + 0x10]
// 00592e4b  83c414               add esp, 0x14
// 00592e4e  03dd                 add ebx, ebp
// 00592e50  3bf8                 cmp edi, eax
// 00592e52  7c8c                 jl 0x592de0
// 00592e54  5f                   pop edi
// 00592e55  5d                   pop ebp
// 00592e56  5b                   pop ebx
// 00592e57  59                   pop ecx
// 00592e58  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _do_barray_io)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
