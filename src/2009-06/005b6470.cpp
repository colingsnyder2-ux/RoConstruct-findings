// roc 2009-06 005b6470  unit: seg_005b0000  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005b6470
//
// 005b6470  55                   push ebp
// 005b6471  8bec                 mov ebp, esp
// 005b6473  83ec08               sub esp, 8
// 005b6476  56                   push esi
// 005b6477  894df8               mov dword ptr [ebp - 8], ecx
// 005b647a  8b4508               mov eax, dword ptr [ebp + 8]
// 005b647d  50                   push eax
// 005b647e  e8cdb50000           call 0x5c1a50
// 005b6483  83c404               add esp, 4
// 005b6486  8b08                 mov ecx, dword ptr [eax]
// 005b6488  894dfc               mov dword ptr [ebp - 4], ecx
// 005b648b  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b648e  52                   push edx
// 005b648f  e8dcb50000           call 0x5c1a70
// 005b6494  83c404               add esp, 4
// 005b6497  8bf0                 mov esi, eax
// 005b6499  8b4508               mov eax, dword ptr [ebp + 8]
// 005b649c  50                   push eax
// 005b649d  e8aeb50000           call 0x5c1a50
// 005b64a2  83c404               add esp, 4
// 005b64a5  8b0e                 mov ecx, dword ptr [esi]
// 005b64a7  8908                 mov dword ptr [eax], ecx
// 005b64a9  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b64ac  52                   push edx
// 005b64ad  e8beb50000           call 0x5c1a70
// 005b64b2  83c404               add esp, 4
// 005b64b5  8b00                 mov eax, dword ptr [eax]
// 005b64b7  50                   push eax
// 005b64b8  e823efffff           call 0x5b53e0
// 005b64bd  83c404               add esp, 4
// 005b64c0  0fbe08               movsx ecx, byte ptr [eax]
// 005b64c3  85c9                 test ecx, ecx
// 005b64c5  751c                 jne 0x5b64e3
// 005b64c7  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b64ca  52                   push edx
// 005b64cb  e8a0b50000           call 0x5c1a70
// 005b64d0  83c404               add esp, 4
// 005b64d3  8b00                 mov eax, dword ptr [eax]
// 005b64d5  50                   push eax
// 005b64d6  e885b50000           call 0x5c1a60
// 005b64db  83c404               add esp, 4
// 005b64de  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b64e1  8908                 mov dword ptr [eax], ecx
// 005b64e3  8b5508               mov edx, dword ptr [ebp + 8]
// 005b64e6  52                   push edx
// 005b64e7  e874b50000           call 0x5c1a60
// 005b64ec  83c404               add esp, 4
// 005b64ef  8bf0                 mov esi, eax
// 005b64f1  8b45fc               mov eax, dword ptr [ebp - 4]
// 005b64f4  50                   push eax
// 005b64f5  e866b50000           call 0x5c1a60
// 005b64fa  83c404               add esp, 4
// 005b64fd  8b0e                 mov ecx, dword ptr [esi]
// 005b64ff  8908                 mov dword ptr [eax], ecx
// 005b6501  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005b6504  e897ab0000           call 0x5c10a0
// 005b6509  8b5508               mov edx, dword ptr [ebp + 8]
// 005b650c  3b10                 cmp edx, dword ptr [eax]
// 005b650e  750f                 jne 0x5b651f
// 005b6510  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005b6513  e888ab0000           call 0x5c10a0
// 005b6518  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b651b  8908                 mov dword ptr [eax], ecx
// 005b651d  eb58                 jmp 0x5b6577
// 005b651f  8b5508               mov edx, dword ptr [ebp + 8]
// 005b6522  52                   push edx
// 005b6523  e838b50000           call 0x5c1a60
// 005b6528  83c404               add esp, 4
// 005b652b  8b00                 mov eax, dword ptr [eax]
// 005b652d  50                   push eax
// 005b652e  e83db50000           call 0x5c1a70
// 005b6533  83c404               add esp, 4
// 005b6536  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b6539  3b08                 cmp ecx, dword ptr [eax]
// 005b653b  751e                 jne 0x5b655b
// 005b653d  8b5508               mov edx, dword ptr [ebp + 8]
// 005b6540  52                   push edx
// 005b6541  e81ab50000           call 0x5c1a60
// 005b6546  83c404               add esp, 4
// 005b6549  8b00                 mov eax, dword ptr [eax]
// 005b654b  50                   push eax
// 005b654c  e81fb50000           call 0x5c1a70
// 005b6551  83c404               add esp, 4
// 005b6554  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b6557  8908                 mov dword ptr [eax], ecx
// 005b6559  eb1c                 jmp 0x5b6577
// 005b655b  8b5508               mov edx, dword ptr [ebp + 8]
// 005b655e  52                   push edx
// 005b655f  e8fcb40000           call 0x5c1a60
// 005b6564  83c404               add esp, 4
// 005b6567  8b00                 mov eax, dword ptr [eax]
// 005b6569  50                   push eax
// 005b656a  e8e1b40000           call 0x5c1a50
// 005b656f  83c404               add esp, 4
// 005b6572  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b6575  8908                 mov dword ptr [eax], ecx
// 005b6577  8b55fc               mov edx, dword ptr [ebp - 4]
// 005b657a  52                   push edx
// 005b657b  e8f0b40000           call 0x5c1a70
// 005b6580  83c404               add esp, 4
// 005b6583  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005b6586  8908                 mov dword ptr [eax], ecx
// 005b6588  8b5508               mov edx, dword ptr [ebp + 8]
// 005b658b  52                   push edx
// 005b658c  e8cfb40000           call 0x5c1a60
// 005b6591  83c404               add esp, 4
// 005b6594  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005b6597  8908                 mov dword ptr [eax], ecx
// 005b6599  5e                   pop esi
// 005b659a  8be5                 mov esp, ebp
// 005b659c  5d                   pop ebp
// 005b659d  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp