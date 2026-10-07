// roc 2010-06 00790170  unit: RBX::GroupDragTool  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790170
//
// 00790170  53                   push ebx
// 00790171  56                   push esi
// 00790172  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00790176  57                   push edi
// 00790177  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079017b  57                   push edi
// 0079017c  56                   push esi
// 0079017d  e85efcffff           call 0x78fde0
// 00790182  83c408               add esp, 8
// 00790185  833f0c               cmp dword ptr [edi], 0xc
// 00790188  7515                 jne 0x79019f
// 0079018a  8b4708               mov eax, dword ptr [edi + 8]
// 0079018d  a900010000           test eax, 0x100
// 00790192  750b                 jne 0x79019f
// 00790194  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00790198  3bc1                 cmp eax, ecx
// 0079019a  7c03                 jl 0x79019f
// 0079019c  ff4e24               dec dword ptr [esi + 0x24]
// 0079019f  8b16                 mov edx, dword ptr [esi]
// 007901a1  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 007901a4  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 007901a8  43                   inc ebx
// 007901a9  3bd8                 cmp ebx, eax
// 007901ab  7e1e                 jle 0x7901cb
// 007901ad  81fbfa000000         cmp ebx, 0xfa
// 007901b3  7c11                 jl 0x7901c6
// 007901b5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007901b8  68143ea500           push 0xa53e14
// 007901bd  51                   push ecx
// 007901be  e8cd23ffff           call 0x782590
// 007901c3  83c408               add esp, 8
// 007901c6  8b16                 mov edx, dword ptr [esi]
// 007901c8  885a4b               mov byte ptr [edx + 0x4b], bl
// 007901cb  ff4624               inc dword ptr [esi + 0x24]
// 007901ce  8b4624               mov eax, dword ptr [esi + 0x24]
// 007901d1  48                   dec eax
// 007901d2  50                   push eax
// 007901d3  8bc7                 mov eax, edi
// 007901d5  8bce                 mov ecx, esi
// 007901d7  e874feffff           call 0x790050
// 007901dc  83c404               add esp, 4
// 007901df  5f                   pop edi
// 007901e0  5e                   pop esi
// 007901e1  5b                   pop ebx
// 007901e2  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_exp2nextreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
