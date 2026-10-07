// roc 2008-06 0066bb10  unit: RBX::GroupDragTool  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066bb10
//
// 0066bb10  53                   push ebx
// 0066bb11  55                   push ebp
// 0066bb12  56                   push esi
// 0066bb13  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066bb17  57                   push edi
// 0066bb18  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0066bb1c  57                   push edi
// 0066bb1d  56                   push esi
// 0066bb1e  e88dfdffff           call 0x66b8b0
// 0066bb23  83c408               add esp, 8
// 0066bb26  833f0c               cmp dword ptr [edi], 0xc
// 0066bb29  7515                 jne 0x66bb40
// 0066bb2b  8b4708               mov eax, dword ptr [edi + 8]
// 0066bb2e  a900010000           test eax, 0x100
// 0066bb33  750b                 jne 0x66bb40
// 0066bb35  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0066bb39  3bc1                 cmp eax, ecx
// 0066bb3b  7c03                 jl 0x66bb40
// 0066bb3d  ff4e24               dec dword ptr [esi + 0x24]
// 0066bb40  8b16                 mov edx, dword ptr [esi]
// 0066bb42  8b6e24               mov ebp, dword ptr [esi + 0x24]
// 0066bb45  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0066bb49  8d5d02               lea ebx, [ebp + 2]
// 0066bb4c  3bd8                 cmp ebx, eax
// 0066bb4e  7e1e                 jle 0x66bb6e
// 0066bb50  81fbfa000000         cmp ebx, 0xfa
// 0066bb56  7c11                 jl 0x66bb69
// 0066bb58  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066bb5b  6888d08400           push 0x84d088
// 0066bb60  51                   push ecx
// 0066bb61  e8aa86ffff           call 0x664210
// 0066bb66  83c408               add esp, 8
// 0066bb69  8b16                 mov edx, dword ptr [esi]
// 0066bb6b  885a4b               mov byte ptr [edx + 0x4b], bl
// 0066bb6e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066bb72  83462402             add dword ptr [esi + 0x24], 2
// 0066bb76  53                   push ebx
// 0066bb77  56                   push esi
// 0066bb78  e8a3fdffff           call 0x66b920
// 0066bb7d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066bb80  8b5108               mov edx, dword ptr [ecx + 8]
// 0066bb83  8b4f08               mov ecx, dword ptr [edi + 8]
// 0066bb86  c1e109               shl ecx, 9
// 0066bb89  0bc8                 or ecx, eax
// 0066bb8b  c1e108               shl ecx, 8
// 0066bb8e  0bcd                 or ecx, ebp
// 0066bb90  c1e106               shl ecx, 6
// 0066bb93  52                   push edx
// 0066bb94  83c90b               or ecx, 0xb
// 0066bb97  51                   push ecx
// 0066bb98  e8f3f5ffff           call 0x66b190
// 0066bb9d  83c410               add esp, 0x10
// 0066bba0  833b0c               cmp dword ptr [ebx], 0xc
// 0066bba3  7516                 jne 0x66bbbb
// 0066bba5  8b5b08               mov ebx, dword ptr [ebx + 8]
// 0066bba8  f7c300010000         test ebx, 0x100
// 0066bbae  750b                 jne 0x66bbbb
// 0066bbb0  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 0066bbb4  3bda                 cmp ebx, edx
// 0066bbb6  7c03                 jl 0x66bbbb
// 0066bbb8  ff4e24               dec dword ptr [esi + 0x24]
// 0066bbbb  896f08               mov dword ptr [edi + 8], ebp
// 0066bbbe  c7070c000000         mov dword ptr [edi], 0xc
// 0066bbc4  5f                   pop edi
// 0066bbc5  5e                   pop esi
// 0066bbc6  5d                   pop ebp
// 0066bbc7  5b                   pop ebx
// 0066bbc8  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_self)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
