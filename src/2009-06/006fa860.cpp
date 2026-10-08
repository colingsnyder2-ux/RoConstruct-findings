// from server: 100% by auto
// roc 2009-06 006fa860  unit: RBX::GroupDragTool  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fa860
//
// 006fa860  56                   push esi
// 006fa861  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fa865  57                   push edi
// 006fa866  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006fa86a  56                   push esi
// 006fa86b  57                   push edi
// 006fa86c  e8dffbffff           call 0x6fa450
// 006fa871  83c408               add esp, 8
// 006fa874  833e0c               cmp dword ptr [esi], 0xc
// 006fa877  7526                 jne 0x6fa89f
// 006fa879  8b4610               mov eax, dword ptr [esi + 0x10]
// 006fa87c  3b4614               cmp eax, dword ptr [esi + 0x14]
// 006fa87f  8b4608               mov eax, dword ptr [esi + 8]
// 006fa882  7428                 je 0x6fa8ac
// 006fa884  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 006fa888  3bc1                 cmp eax, ecx
// 006fa88a  7c13                 jl 0x6fa89f
// 006fa88c  50                   push eax
// 006fa88d  8bc6                 mov eax, esi
// 006fa88f  8bcf                 mov ecx, edi
// 006fa891  e82afeffff           call 0x6fa6c0
// 006fa896  8b4608               mov eax, dword ptr [esi + 8]
// 006fa899  83c404               add esp, 4
// 006fa89c  5f                   pop edi
// 006fa89d  5e                   pop esi
// 006fa89e  c3                   ret 
// 006fa89f  56                   push esi
// 006fa8a0  57                   push edi
// 006fa8a1  e83affffff           call 0x6fa7e0
// 006fa8a6  8b4608               mov eax, dword ptr [esi + 8]
// 006fa8a9  83c408               add esp, 8
// 006fa8ac  5f                   pop edi
// 006fa8ad  5e                   pop esi
// 006fa8ae  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_exp2anyreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
