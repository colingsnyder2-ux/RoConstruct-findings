// roc 2010-06 007901f0  unit: RBX::GroupDragTool  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007901f0
//
// 007901f0  56                   push esi
// 007901f1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007901f5  57                   push edi
// 007901f6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007901fa  56                   push esi
// 007901fb  57                   push edi
// 007901fc  e8dffbffff           call 0x78fde0
// 00790201  83c408               add esp, 8
// 00790204  833e0c               cmp dword ptr [esi], 0xc
// 00790207  7526                 jne 0x79022f
// 00790209  8b4610               mov eax, dword ptr [esi + 0x10]
// 0079020c  3b4614               cmp eax, dword ptr [esi + 0x14]
// 0079020f  8b4608               mov eax, dword ptr [esi + 8]
// 00790212  7428                 je 0x79023c
// 00790214  0fb64f32             movzx ecx, byte ptr [edi + 0x32]
// 00790218  3bc1                 cmp eax, ecx
// 0079021a  7c13                 jl 0x79022f
// 0079021c  50                   push eax
// 0079021d  8bc6                 mov eax, esi
// 0079021f  8bcf                 mov ecx, edi
// 00790221  e82afeffff           call 0x790050
// 00790226  8b4608               mov eax, dword ptr [esi + 8]
// 00790229  83c404               add esp, 4
// 0079022c  5f                   pop edi
// 0079022d  5e                   pop esi
// 0079022e  c3                   ret 
// 0079022f  56                   push esi
// 00790230  57                   push edi
// 00790231  e83affffff           call 0x790170
// 00790236  8b4608               mov eax, dword ptr [esi + 8]
// 00790239  83c408               add esp, 8
// 0079023c  5f                   pop edi
// 0079023d  5e                   pop esi
// 0079023e  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_exp2anyreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
