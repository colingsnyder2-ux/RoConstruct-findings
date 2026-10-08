// from server: 100% by auto
// roc 2008-06 0066b8b0  unit: RBX::GroupDragTool  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b8b0
//
// 0066b8b0  56                   push esi
// 0066b8b1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066b8b5  57                   push edi
// 0066b8b6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066b8ba  56                   push esi
// 0066b8bb  57                   push edi
// 0066b8bc  e8dffbffff           call 0x66b4a0
// 0066b8c1  83c408               add esp, 8
// 0066b8c4  833e0c               cmp dword ptr [esi], 0xc
// 0066b8c7  7526                 jne 0x66b8ef
// 0066b8c9  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066b8cc  3b4614               cmp eax, dword ptr [esi + 0x14]
// 0066b8cf  8b4608               mov eax, dword ptr [esi + 8]
// 0066b8d2  7428                 je 0x66b8fc
// 0066b8d4  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 0066b8d8  3bc1                 cmp eax, ecx
// 0066b8da  7c13                 jl 0x66b8ef
// 0066b8dc  50                   push eax
// 0066b8dd  8bc6                 mov eax, esi
// 0066b8df  8bcf                 mov ecx, edi
// 0066b8e1  e82afeffff           call 0x66b710
// 0066b8e6  8b4608               mov eax, dword ptr [esi + 8]
// 0066b8e9  83c404               add esp, 4
// 0066b8ec  5f                   pop edi
// 0066b8ed  5e                   pop esi
// 0066b8ee  c3                   ret 
// 0066b8ef  56                   push esi
// 0066b8f0  57                   push edi
// 0066b8f1  e83affffff           call 0x66b830
// 0066b8f6  8b4608               mov eax, dword ptr [esi + 8]
// 0066b8f9  83c408               add esp, 8
// 0066b8fc  5f                   pop edi
// 0066b8fd  5e                   pop esi
// 0066b8fe  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_exp2anyreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
