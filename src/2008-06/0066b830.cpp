// roc 2008-06 0066b830  unit: RBX::GroupDragTool  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b830
//
// 0066b830  53                   push ebx
// 0066b831  56                   push esi
// 0066b832  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066b836  57                   push edi
// 0066b837  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0066b83b  57                   push edi
// 0066b83c  56                   push esi
// 0066b83d  e85efcffff           call 0x66b4a0
// 0066b842  83c408               add esp, 8
// 0066b845  833f0c               cmp dword ptr [edi], 0xc
// 0066b848  7515                 jne 0x66b85f
// 0066b84a  8b4708               mov eax, dword ptr [edi + 8]
// 0066b84d  a900010000           test eax, 0x100
// 0066b852  750b                 jne 0x66b85f
// 0066b854  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0066b858  3bc1                 cmp eax, ecx
// 0066b85a  7c03                 jl 0x66b85f
// 0066b85c  ff4e24               dec dword ptr [esi + 0x24]
// 0066b85f  8b16                 mov edx, dword ptr [esi]
// 0066b861  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0066b864  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0066b868  43                   inc ebx
// 0066b869  3bd8                 cmp ebx, eax
// 0066b86b  7e1e                 jle 0x66b88b
// 0066b86d  81fbfa000000         cmp ebx, 0xfa
// 0066b873  7c11                 jl 0x66b886
// 0066b875  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066b878  6888d08400           push 0x84d088
// 0066b87d  51                   push ecx
// 0066b87e  e88d89ffff           call 0x664210
// 0066b883  83c408               add esp, 8
// 0066b886  8b16                 mov edx, dword ptr [esi]
// 0066b888  885a4b               mov byte ptr [edx + 0x4b], bl
// 0066b88b  ff4624               inc dword ptr [esi + 0x24]
// 0066b88e  8b4624               mov eax, dword ptr [esi + 0x24]
// 0066b891  48                   dec eax
// 0066b892  50                   push eax
// 0066b893  8bc7                 mov eax, edi
// 0066b895  8bce                 mov ecx, esi
// 0066b897  e874feffff           call 0x66b710
// 0066b89c  83c404               add esp, 4
// 0066b89f  5f                   pop edi
// 0066b8a0  5e                   pop esi
// 0066b8a1  5b                   pop ebx
// 0066b8a2  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_exp2nextreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
