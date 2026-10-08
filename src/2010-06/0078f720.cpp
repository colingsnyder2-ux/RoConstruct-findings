// from server: 100% by auto
// roc 2010-06 0078f720  unit: RBX::GroupDragTool  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f720
//
// 0078f720  51                   push ecx
// 0078f721  53                   push ebx
// 0078f722  55                   push ebp
// 0078f723  56                   push esi
// 0078f724  57                   push edi
// 0078f725  8bd8                 mov ebx, eax
// 0078f727  8b5304               mov edx, dword ptr [ebx + 4]
// 0078f72a  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0078f72d  51                   push ecx
// 0078f72e  52                   push edx
// 0078f72f  50                   push eax
// 0078f730  8944241c             mov dword ptr [esp + 0x1c], eax
// 0078f734  e8f7defeff           call 0x77d630
// 0078f739  8b3b                 mov edi, dword ptr [ebx]
// 0078f73b  8b6f28               mov ebp, dword ptr [edi + 0x28]
// 0078f73e  b903000000           mov ecx, 3
// 0078f743  83c40c               add esp, 0xc
// 0078f746  8d7728               lea esi, [edi + 0x28]
// 0078f749  394808               cmp dword ptr [eax + 8], ecx
// 0078f74c  750e                 jne 0x78f75c
// 0078f74e  dd00                 fld qword ptr [eax]
// 0078f750  5f                   pop edi
// 0078f751  5e                   pop esi
// 0078f752  5d                   pop ebp
// 0078f753  5b                   pop ebx
// 0078f754  83c404               add esp, 4
// 0078f757  e9d4960100           jmp 0x7a8e30
// 0078f75c  db4328               fild dword ptr [ebx + 0x28]
// 0078f75f  83c328               add ebx, 0x28
// 0078f762  894808               mov dword ptr [eax + 8], ecx
// 0078f765  dd18                 fstp qword ptr [eax]
// 0078f767  8b03                 mov eax, dword ptr [ebx]
// 0078f769  40                   inc eax
// 0078f76a  3b06                 cmp eax, dword ptr [esi]
// 0078f76c  7e21                 jle 0x78f78f
// 0078f76e  8b4f08               mov ecx, dword ptr [edi + 8]
// 0078f771  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078f775  681c31a500           push 0xa5311c
// 0078f77a  68ffff0300           push 0x3ffff
// 0078f77f  6a10                 push 0x10
// 0078f781  56                   push esi
// 0078f782  51                   push ecx
// 0078f783  52                   push edx
// 0078f784  e8c7f2feff           call 0x77ea50
// 0078f789  83c418               add esp, 0x18
// 0078f78c  894708               mov dword ptr [edi + 8], eax
// 0078f78f  3b2e                 cmp ebp, dword ptr [esi]
// 0078f791  7d1c                 jge 0x78f7af
// 0078f793  8bc5                 mov eax, ebp
// 0078f795  c1e004               shl eax, 4
// 0078f798  33c9                 xor ecx, ecx
// 0078f79a  8d9b00000000         lea ebx, [ebx]
// 0078f7a0  8b5708               mov edx, dword ptr [edi + 8]
// 0078f7a3  894c1008             mov dword ptr [eax + edx + 8], ecx
// 0078f7a7  45                   inc ebp
// 0078f7a8  83c010               add eax, 0x10
// 0078f7ab  3b2e                 cmp ebp, dword ptr [esi]
// 0078f7ad  7cf1                 jl 0x78f7a0
// 0078f7af  8b03                 mov eax, dword ptr [ebx]
// 0078f7b1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078f7b5  8b11                 mov edx, dword ptr [ecx]
// 0078f7b7  c1e004               shl eax, 4
// 0078f7ba  034708               add eax, dword ptr [edi + 8]
// 0078f7bd  8910                 mov dword ptr [eax], edx
// 0078f7bf  8b5104               mov edx, dword ptr [ecx + 4]
// 0078f7c2  895004               mov dword ptr [eax + 4], edx
// 0078f7c5  8b5108               mov edx, dword ptr [ecx + 8]
// 0078f7c8  895008               mov dword ptr [eax + 8], edx
// 0078f7cb  b804000000           mov eax, 4
// 0078f7d0  394108               cmp dword ptr [ecx + 8], eax
// 0078f7d3  7c1c                 jl 0x78f7f1
// 0078f7d5  8b09                 mov ecx, dword ptr [ecx]
// 0078f7d7  f6410503             test byte ptr [ecx + 5], 3
// 0078f7db  7414                 je 0x78f7f1
// 0078f7dd  844705               test byte ptr [edi + 5], al
// 0078f7e0  740f                 je 0x78f7f1
// 0078f7e2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0078f7e6  51                   push ecx
// 0078f7e7  57                   push edi
// 0078f7e8  50                   push eax
// 0078f7e9  e862b7feff           call 0x77af50
// 0078f7ee  83c40c               add esp, 0xc
// 0078f7f1  8b03                 mov eax, dword ptr [ebx]
// 0078f7f3  5f                   pop edi
// 0078f7f4  5e                   pop esi
// 0078f7f5  8d4801               lea ecx, [eax + 1]
// 0078f7f8  5d                   pop ebp
// 0078f7f9  890b                 mov dword ptr [ebx], ecx
// 0078f7fb  5b                   pop ebx
// 0078f7fc  59                   pop ecx
// 0078f7fd  c3                   ret 
// library lua-5.1.4/lcode.c (function _addk)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
