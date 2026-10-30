// from server: 100% by auto
// roc 2010-06 00790450  unit: RBX::GroupDragTool  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790450
//
// 00790450  53                   push ebx
// 00790451  55                   push ebp
// 00790452  56                   push esi
// 00790453  8b742410             mov esi, dword ptr [esp + 0x10]
// 00790457  57                   push edi
// 00790458  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0079045c  57                   push edi
// 0079045d  56                   push esi
// 0079045e  e88dfdffff           call 0x7901f0
// 00790463  83c408               add esp, 8
// 00790466  833f0c               cmp dword ptr [edi], 0xc
// 00790469  7515                 jne 0x790480
// 0079046b  8b4708               mov eax, dword ptr [edi + 8]
// 0079046e  a900010000           test eax, 0x100
// 00790473  750b                 jne 0x790480
// 00790475  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00790479  3bc1                 cmp eax, ecx
// 0079047b  7c03                 jl 0x790480
// 0079047d  ff4e24               dec dword ptr [esi + 0x24]
// 00790480  8b16                 mov edx, dword ptr [esi]
// 00790482  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 00790485  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 00790489  8d5d02               lea ebx, [ebp + 2]
// 0079048c  3bd8                 cmp ebx, eax
// 0079048e  7e1e                 jle 0x7904ae
// 00790490  81fbfa000000         cmp ebx, 0xfa
// 00790496  7c11                 jl 0x7904a9
// 00790498  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0079049b  68143ea500           push 0xa53e14
// 007904a0  51                   push ecx
// 007904a1  e8ea20ffff           call 0x782590
// 007904a6  83c408               add esp, 8
// 007904a9  8b16                 mov edx, dword ptr [esi]
// 007904ab  885a4b               mov byte ptr [edx + 0x4b], bl
// 007904ae  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007904b2  83462402             add dword ptr [esi + 0x24], 2
// 007904b6  53                   push ebx
// 007904b7  56                   push esi
// 007904b8  e8a3fdffff           call 0x790260
// 007904bd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007904c0  8b5108               mov edx, dword ptr [ecx + 8]
// 007904c3  8b4f08               mov ecx, dword ptr [edi + 8]
// 007904c6  c1e109               shl ecx, 9
// 007904c9  0bc8                 or ecx, eax
// 007904cb  c1e108               shl ecx, 8
// 007904ce  0bcd                 or ecx, ebp
// 007904d0  c1e106               shl ecx, 6
// 007904d3  52                   push edx
// 007904d4  83c90b               or ecx, 0xb
// 007904d7  51                   push ecx
// 007904d8  e8e3f5ffff           call 0x78fac0
// 007904dd  83c410               add esp, 0x10
// 007904e0  833b0c               cmp dword ptr [ebx], 0xc
// 007904e3  7516                 jne 0x7904fb
// 007904e5  8b5b08               mov ebx, dword ptr [ebx + 8]
// 007904e8  f7c300010000         test ebx, 0x100
// 007904ee  750b                 jne 0x7904fb
// 007904f0  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 007904f4  3bda                 cmp ebx, edx
// 007904f6  7c03                 jl 0x7904fb
// 007904f8  ff4e24               dec dword ptr [esi + 0x24]
// 007904fb  896f08               mov dword ptr [edi + 8], ebp
// 007904fe  c7070c000000         mov dword ptr [edi], 0xc
// 00790504  5f                   pop edi
// 00790505  5e                   pop esi
// 00790506  5d                   pop ebp
// 00790507  5b                   pop ebx
// 00790508  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_self)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
