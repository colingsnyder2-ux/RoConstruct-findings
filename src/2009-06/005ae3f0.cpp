// roc 2009-06 005ae3f0  unit: RBX::Mesh  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ae3f0
//
// 005ae3f0  55                   push ebp
// 005ae3f1  8bec                 mov ebp, esp
// 005ae3f3  83ec08               sub esp, 8
// 005ae3f6  56                   push esi
// 005ae3f7  894df8               mov dword ptr [ebp - 8], ecx
// 005ae3fa  8b4508               mov eax, dword ptr [ebp + 8]
// 005ae3fd  50                   push eax
// 005ae3fe  e86d360100           call 0x5c1a70
// 005ae403  83c404               add esp, 4
// 005ae406  8b08                 mov ecx, dword ptr [eax]
// 005ae408  894dfc               mov dword ptr [ebp - 4], ecx
// 005ae40b  8b55fc               mov edx, dword ptr [ebp - 4]
// 005ae40e  52                   push edx
// 005ae40f  e83c360100           call 0x5c1a50
// 005ae414  83c404               add esp, 4
// 005ae417  8bf0                 mov esi, eax
// 005ae419  8b4508               mov eax, dword ptr [ebp + 8]
// 005ae41c  50                   push eax
// 005ae41d  e84e360100           call 0x5c1a70
// 005ae422  83c404               add esp, 4
// 005ae425  8b0e                 mov ecx, dword ptr [esi]
// 005ae427  8908                 mov dword ptr [eax], ecx
// 005ae429  8b55fc               mov edx, dword ptr [ebp - 4]
// 005ae42c  52                   push edx
// 005ae42d  e81e360100           call 0x5c1a50
// 005ae432  83c404               add esp, 4
// 005ae435  8b00                 mov eax, dword ptr [eax]
// 005ae437  50                   push eax
// 005ae438  e8c3ecffff           call 0x5ad100
// 005ae43d  83c404               add esp, 4
// 005ae440  0fbe08               movsx ecx, byte ptr [eax]
// 005ae443  85c9                 test ecx, ecx
// 005ae445  751c                 jne 0x5ae463
// 005ae447  8b55fc               mov edx, dword ptr [ebp - 4]
// 005ae44a  52                   push edx
// 005ae44b  e800360100           call 0x5c1a50
// 005ae450  83c404               add esp, 4
// 005ae453  8b00                 mov eax, dword ptr [eax]
// 005ae455  50                   push eax
// 005ae456  e805360100           call 0x5c1a60
// 005ae45b  83c404               add esp, 4
// 005ae45e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ae461  8908                 mov dword ptr [eax], ecx
// 005ae463  8b5508               mov edx, dword ptr [ebp + 8]
// 005ae466  52                   push edx
// 005ae467  e8f4350100           call 0x5c1a60
// 005ae46c  83c404               add esp, 4
// 005ae46f  8bf0                 mov esi, eax
// 005ae471  8b45fc               mov eax, dword ptr [ebp - 4]
// 005ae474  50                   push eax
// 005ae475  e8e6350100           call 0x5c1a60
// 005ae47a  83c404               add esp, 4
// 005ae47d  8b0e                 mov ecx, dword ptr [esi]
// 005ae47f  8908                 mov dword ptr [eax], ecx
// 005ae481  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005ae484  e8172c0100           call 0x5c10a0
// 005ae489  8b5508               mov edx, dword ptr [ebp + 8]
// 005ae48c  3b10                 cmp edx, dword ptr [eax]
// 005ae48e  750f                 jne 0x5ae49f
// 005ae490  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005ae493  e8082c0100           call 0x5c10a0
// 005ae498  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae49b  8908                 mov dword ptr [eax], ecx
// 005ae49d  eb58                 jmp 0x5ae4f7
// 005ae49f  8b5508               mov edx, dword ptr [ebp + 8]
// 005ae4a2  52                   push edx
// 005ae4a3  e8b8350100           call 0x5c1a60
// 005ae4a8  83c404               add esp, 4
// 005ae4ab  8b00                 mov eax, dword ptr [eax]
// 005ae4ad  50                   push eax
// 005ae4ae  e89d350100           call 0x5c1a50
// 005ae4b3  83c404               add esp, 4
// 005ae4b6  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ae4b9  3b08                 cmp ecx, dword ptr [eax]
// 005ae4bb  751e                 jne 0x5ae4db
// 005ae4bd  8b5508               mov edx, dword ptr [ebp + 8]
// 005ae4c0  52                   push edx
// 005ae4c1  e89a350100           call 0x5c1a60
// 005ae4c6  83c404               add esp, 4
// 005ae4c9  8b00                 mov eax, dword ptr [eax]
// 005ae4cb  50                   push eax
// 005ae4cc  e87f350100           call 0x5c1a50
// 005ae4d1  83c404               add esp, 4
// 005ae4d4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae4d7  8908                 mov dword ptr [eax], ecx
// 005ae4d9  eb1c                 jmp 0x5ae4f7
// 005ae4db  8b5508               mov edx, dword ptr [ebp + 8]
// 005ae4de  52                   push edx
// 005ae4df  e87c350100           call 0x5c1a60
// 005ae4e4  83c404               add esp, 4
// 005ae4e7  8b00                 mov eax, dword ptr [eax]
// 005ae4e9  50                   push eax
// 005ae4ea  e881350100           call 0x5c1a70
// 005ae4ef  83c404               add esp, 4
// 005ae4f2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae4f5  8908                 mov dword ptr [eax], ecx
// 005ae4f7  8b55fc               mov edx, dword ptr [ebp - 4]
// 005ae4fa  52                   push edx
// 005ae4fb  e850350100           call 0x5c1a50
// 005ae500  83c404               add esp, 4
// 005ae503  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ae506  8908                 mov dword ptr [eax], ecx
// 005ae508  8b5508               mov edx, dword ptr [ebp + 8]
// 005ae50b  52                   push edx
// 005ae50c  e84f350100           call 0x5c1a60
// 005ae511  83c404               add esp, 4
// 005ae514  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae517  8908                 mov dword ptr [eax], ecx
// 005ae519  5e                   pop esi
// 005ae51a  8be5                 mov esp, ebp
// 005ae51c  5d                   pop ebp
// 005ae51d  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp