// from server: 100% by auto
// roc 2009-06 006f9da0  unit: RBX::GroupDragTool  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9da0
//
// 006f9da0  51                   push ecx
// 006f9da1  53                   push ebx
// 006f9da2  55                   push ebp
// 006f9da3  56                   push esi
// 006f9da4  57                   push edi
// 006f9da5  8bd8                 mov ebx, eax
// 006f9da7  8b5304               mov edx, dword ptr [ebx + 4]
// 006f9daa  8b4310               mov eax, dword ptr [ebx + 0x10]
// 006f9dad  51                   push ecx
// 006f9dae  52                   push edx
// 006f9daf  50                   push eax
// 006f9db0  8944241c             mov dword ptr [esp + 0x1c], eax
// 006f9db4  e8d725ffff           call 0x6ec390
// 006f9db9  8b3b                 mov edi, dword ptr [ebx]
// 006f9dbb  8b6f28               mov ebp, dword ptr [edi + 0x28]
// 006f9dbe  b903000000           mov ecx, 3
// 006f9dc3  83c40c               add esp, 0xc
// 006f9dc6  8d7728               lea esi, [edi + 0x28]
// 006f9dc9  394808               cmp dword ptr [eax + 8], ecx
// 006f9dcc  750e                 jne 0x6f9ddc
// 006f9dce  dd00                 fld qword ptr [eax]
// 006f9dd0  5f                   pop edi
// 006f9dd1  5e                   pop esi
// 006f9dd2  5d                   pop ebp
// 006f9dd3  5b                   pop ebx
// 006f9dd4  83c404               add esp, 4
// 006f9dd7  e9e4000200           jmp 0x719ec0
// 006f9ddc  db4328               fild dword ptr [ebx + 0x28]
// 006f9ddf  83c328               add ebx, 0x28
// 006f9de2  894808               mov dword ptr [eax + 8], ecx
// 006f9de5  dd18                 fstp qword ptr [eax]
// 006f9de7  8b03                 mov eax, dword ptr [ebx]
// 006f9de9  40                   inc eax
// 006f9dea  3b06                 cmp eax, dword ptr [esi]
// 006f9dec  7e21                 jle 0x6f9e0f
// 006f9dee  8b4f08               mov ecx, dword ptr [edi + 8]
// 006f9df1  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f9df5  689cde8e00           push 0x8ede9c
// 006f9dfa  68ffff0300           push 0x3ffff
// 006f9dff  6a10                 push 0x10
// 006f9e01  56                   push esi
// 006f9e02  51                   push ecx
// 006f9e03  52                   push edx
// 006f9e04  e8a739ffff           call 0x6ed7b0
// 006f9e09  83c418               add esp, 0x18
// 006f9e0c  894708               mov dword ptr [edi + 8], eax
// 006f9e0f  3b2e                 cmp ebp, dword ptr [esi]
// 006f9e11  7d1c                 jge 0x6f9e2f
// 006f9e13  8bc5                 mov eax, ebp
// 006f9e15  c1e004               shl eax, 4
// 006f9e18  33c9                 xor ecx, ecx
// 006f9e1a  8d9b00000000         lea ebx, [ebx]
// 006f9e20  8b5708               mov edx, dword ptr [edi + 8]
// 006f9e23  894c1008             mov dword ptr [eax + edx + 8], ecx
// 006f9e27  45                   inc ebp
// 006f9e28  83c010               add eax, 0x10
// 006f9e2b  3b2e                 cmp ebp, dword ptr [esi]
// 006f9e2d  7cf1                 jl 0x6f9e20
// 006f9e2f  8b03                 mov eax, dword ptr [ebx]
// 006f9e31  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f9e35  8b11                 mov edx, dword ptr [ecx]
// 006f9e37  c1e004               shl eax, 4
// 006f9e3a  034708               add eax, dword ptr [edi + 8]
// 006f9e3d  8910                 mov dword ptr [eax], edx
// 006f9e3f  8b5104               mov edx, dword ptr [ecx + 4]
// 006f9e42  895004               mov dword ptr [eax + 4], edx
// 006f9e45  8b5108               mov edx, dword ptr [ecx + 8]
// 006f9e48  895008               mov dword ptr [eax + 8], edx
// 006f9e4b  b804000000           mov eax, 4
// 006f9e50  394108               cmp dword ptr [ecx + 8], eax
// 006f9e53  7c1c                 jl 0x6f9e71
// 006f9e55  8b09                 mov ecx, dword ptr [ecx]
// 006f9e57  f6410503             test byte ptr [ecx + 5], 3
// 006f9e5b  7414                 je 0x6f9e71
// 006f9e5d  844705               test byte ptr [edi + 5], al
// 006f9e60  740f                 je 0x6f9e71
// 006f9e62  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f9e66  51                   push ecx
// 006f9e67  57                   push edi
// 006f9e68  50                   push eax
// 006f9e69  e842fefeff           call 0x6e9cb0
// 006f9e6e  83c40c               add esp, 0xc
// 006f9e71  8b03                 mov eax, dword ptr [ebx]
// 006f9e73  5f                   pop edi
// 006f9e74  5e                   pop esi
// 006f9e75  8d4801               lea ecx, [eax + 1]
// 006f9e78  5d                   pop ebp
// 006f9e79  890b                 mov dword ptr [ebx], ecx
// 006f9e7b  5b                   pop ebx
// 006f9e7c  59                   pop ecx
// 006f9e7d  c3                   ret 
// library lua-5.1.4/lcode.c (function _addk)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
