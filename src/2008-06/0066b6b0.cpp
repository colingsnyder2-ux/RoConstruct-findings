// roc 2008-06 0066b6b0  unit: RBX::GroupDragTool  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b6b0
//
// 0066b6b0  55                   push ebp
// 0066b6b1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0066b6b5  837d000c             cmp dword ptr [ebp], 0xc
// 0066b6b9  56                   push esi
// 0066b6ba  8bf0                 mov esi, eax
// 0066b6bc  7440                 je 0x66b6fe
// 0066b6be  8b06                 mov eax, dword ptr [esi]
// 0066b6c0  0fb6484b             movzx ecx, byte ptr [eax + 0x4b]
// 0066b6c4  53                   push ebx
// 0066b6c5  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0066b6c8  43                   inc ebx
// 0066b6c9  3bd9                 cmp ebx, ecx
// 0066b6cb  57                   push edi
// 0066b6cc  7e1e                 jle 0x66b6ec
// 0066b6ce  81fbfa000000         cmp ebx, 0xfa
// 0066b6d4  7c11                 jl 0x66b6e7
// 0066b6d6  8b560c               mov edx, dword ptr [esi + 0xc]
// 0066b6d9  6888d08400           push 0x84d088
// 0066b6de  52                   push edx
// 0066b6df  e82c8bffff           call 0x664210
// 0066b6e4  83c408               add esp, 8
// 0066b6e7  8b06                 mov eax, dword ptr [esi]
// 0066b6e9  88584b               mov byte ptr [eax + 0x4b], bl
// 0066b6ec  ff4624               inc dword ptr [esi + 0x24]
// 0066b6ef  8b4624               mov eax, dword ptr [esi + 0x24]
// 0066b6f2  8d78ff               lea edi, [eax - 1]
// 0066b6f5  8bdd                 mov ebx, ebp
// 0066b6f7  e8a4feffff           call 0x66b5a0
// 0066b6fc  5f                   pop edi
// 0066b6fd  5b                   pop ebx
// 0066b6fe  5e                   pop esi
// 0066b6ff  5d                   pop ebp
// 0066b700  c3                   ret 
// library lua-5.1.4/lcode.c (function _discharge2anyreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
