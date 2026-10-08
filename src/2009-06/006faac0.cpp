// from server: 100% by auto
// roc 2009-06 006faac0  unit: RBX::GroupDragTool  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006faac0
//
// 006faac0  53                   push ebx
// 006faac1  55                   push ebp
// 006faac2  56                   push esi
// 006faac3  8b742410             mov esi, dword ptr [esp + 0x10]
// 006faac7  57                   push edi
// 006faac8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006faacc  57                   push edi
// 006faacd  56                   push esi
// 006faace  e88dfdffff           call 0x6fa860
// 006faad3  83c408               add esp, 8
// 006faad6  833f0c               cmp dword ptr [edi], 0xc
// 006faad9  7515                 jne 0x6faaf0
// 006faadb  8b4708               mov eax, dword ptr [edi + 8]
// 006faade  a900010000           test eax, 0x100
// 006faae3  750b                 jne 0x6faaf0
// 006faae5  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006faae9  3bc1                 cmp eax, ecx
// 006faaeb  7c03                 jl 0x6faaf0
// 006faaed  ff4e24               dec dword ptr [esi + 0x24]
// 006faaf0  8b16                 mov edx, dword ptr [esi]
// 006faaf2  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 006faaf5  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 006faaf9  8d5d02               lea ebx, [ebp + 2]
// 006faafc  3bd8                 cmp ebx, eax
// 006faafe  7e1e                 jle 0x6fab1e
// 006fab00  81fbfa000000         cmp ebx, 0xfa
// 006fab06  7c11                 jl 0x6fab19
// 006fab08  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fab0b  683cea8e00           push 0x8eea3c
// 006fab10  51                   push ecx
// 006fab11  e8da67ffff           call 0x6f12f0
// 006fab16  83c408               add esp, 8
// 006fab19  8b16                 mov edx, dword ptr [esi]
// 006fab1b  885a4b               mov byte ptr [edx + 0x4b], bl
// 006fab1e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006fab22  83462402             add dword ptr [esi + 0x24], 2
// 006fab26  53                   push ebx
// 006fab27  56                   push esi
// 006fab28  e8a3fdffff           call 0x6fa8d0
// 006fab2d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006fab30  8b5108               mov edx, dword ptr [ecx + 8]
// 006fab33  8b4f08               mov ecx, dword ptr [edi + 8]
// 006fab36  c1e109               shl ecx, 9
// 006fab39  0bc8                 or ecx, eax
// 006fab3b  c1e108               shl ecx, 8
// 006fab3e  0bcd                 or ecx, ebp
// 006fab40  c1e106               shl ecx, 6
// 006fab43  52                   push edx
// 006fab44  83c90b               or ecx, 0xb
// 006fab47  51                   push ecx
// 006fab48  e8e3f5ffff           call 0x6fa130
// 006fab4d  83c410               add esp, 0x10
// 006fab50  833b0c               cmp dword ptr [ebx], 0xc
// 006fab53  7516                 jne 0x6fab6b
// 006fab55  8b5b08               mov ebx, dword ptr [ebx + 8]
// 006fab58  f7c300010000         test ebx, 0x100
// 006fab5e  750b                 jne 0x6fab6b
// 006fab60  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006fab64  3bda                 cmp ebx, edx
// 006fab66  7c03                 jl 0x6fab6b
// 006fab68  ff4e24               dec dword ptr [esi + 0x24]
// 006fab6b  896f08               mov dword ptr [edi + 8], ebp
// 006fab6e  c7070c000000         mov dword ptr [edi], 0xc
// 006fab74  5f                   pop edi
// 006fab75  5e                   pop esi
// 006fab76  5d                   pop ebp
// 006fab77  5b                   pop ebx
// 006fab78  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_self)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
