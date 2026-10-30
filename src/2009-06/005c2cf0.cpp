// roc 2009-06 005c2cf0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c2cf0
//
// 005c2cf0  55                   push ebp
// 005c2cf1  8bec                 mov ebp, esp
// 005c2cf3  83ec08               sub esp, 8
// 005c2cf6  56                   push esi
// 005c2cf7  894df8               mov dword ptr [ebp - 8], ecx
// 005c2cfa  8b4508               mov eax, dword ptr [ebp + 8]
// 005c2cfd  50                   push eax
// 005c2cfe  e84dedffff           call 0x5c1a50
// 005c2d03  83c404               add esp, 4
// 005c2d06  8b08                 mov ecx, dword ptr [eax]
// 005c2d08  894dfc               mov dword ptr [ebp - 4], ecx
// 005c2d0b  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c2d0e  52                   push edx
// 005c2d0f  e85cedffff           call 0x5c1a70
// 005c2d14  83c404               add esp, 4
// 005c2d17  8bf0                 mov esi, eax
// 005c2d19  8b4508               mov eax, dword ptr [ebp + 8]
// 005c2d1c  50                   push eax
// 005c2d1d  e82eedffff           call 0x5c1a50
// 005c2d22  83c404               add esp, 4
// 005c2d25  8b0e                 mov ecx, dword ptr [esi]
// 005c2d27  8908                 mov dword ptr [eax], ecx
// 005c2d29  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c2d2c  52                   push edx
// 005c2d2d  e83eedffff           call 0x5c1a70
// 005c2d32  83c404               add esp, 4
// 005c2d35  8b00                 mov eax, dword ptr [eax]
// 005c2d37  50                   push eax
// 005c2d38  e8c3a3feff           call 0x5ad100
// 005c2d3d  83c404               add esp, 4
// 005c2d40  0fbe08               movsx ecx, byte ptr [eax]
// 005c2d43  85c9                 test ecx, ecx
// 005c2d45  751c                 jne 0x5c2d63
// 005c2d47  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c2d4a  52                   push edx
// 005c2d4b  e820edffff           call 0x5c1a70
// 005c2d50  83c404               add esp, 4
// 005c2d53  8b00                 mov eax, dword ptr [eax]
// 005c2d55  50                   push eax
// 005c2d56  e805edffff           call 0x5c1a60
// 005c2d5b  83c404               add esp, 4
// 005c2d5e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c2d61  8908                 mov dword ptr [eax], ecx
// 005c2d63  8b5508               mov edx, dword ptr [ebp + 8]
// 005c2d66  52                   push edx
// 005c2d67  e8f4ecffff           call 0x5c1a60
// 005c2d6c  83c404               add esp, 4
// 005c2d6f  8bf0                 mov esi, eax
// 005c2d71  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c2d74  50                   push eax
// 005c2d75  e8e6ecffff           call 0x5c1a60
// 005c2d7a  83c404               add esp, 4
// 005c2d7d  8b0e                 mov ecx, dword ptr [esi]
// 005c2d7f  8908                 mov dword ptr [eax], ecx
// 005c2d81  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c2d84  e817e3ffff           call 0x5c10a0
// 005c2d89  8b5508               mov edx, dword ptr [ebp + 8]
// 005c2d8c  3b10                 cmp edx, dword ptr [eax]
// 005c2d8e  750f                 jne 0x5c2d9f
// 005c2d90  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c2d93  e808e3ffff           call 0x5c10a0
// 005c2d98  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2d9b  8908                 mov dword ptr [eax], ecx
// 005c2d9d  eb58                 jmp 0x5c2df7
// 005c2d9f  8b5508               mov edx, dword ptr [ebp + 8]
// 005c2da2  52                   push edx
// 005c2da3  e8b8ecffff           call 0x5c1a60
// 005c2da8  83c404               add esp, 4
// 005c2dab  8b00                 mov eax, dword ptr [eax]
// 005c2dad  50                   push eax
// 005c2dae  e8bdecffff           call 0x5c1a70
// 005c2db3  83c404               add esp, 4
// 005c2db6  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c2db9  3b08                 cmp ecx, dword ptr [eax]
// 005c2dbb  751e                 jne 0x5c2ddb
// 005c2dbd  8b5508               mov edx, dword ptr [ebp + 8]
// 005c2dc0  52                   push edx
// 005c2dc1  e89aecffff           call 0x5c1a60
// 005c2dc6  83c404               add esp, 4
// 005c2dc9  8b00                 mov eax, dword ptr [eax]
// 005c2dcb  50                   push eax
// 005c2dcc  e89fecffff           call 0x5c1a70
// 005c2dd1  83c404               add esp, 4
// 005c2dd4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2dd7  8908                 mov dword ptr [eax], ecx
// 005c2dd9  eb1c                 jmp 0x5c2df7
// 005c2ddb  8b5508               mov edx, dword ptr [ebp + 8]
// 005c2dde  52                   push edx
// 005c2ddf  e87cecffff           call 0x5c1a60
// 005c2de4  83c404               add esp, 4
// 005c2de7  8b00                 mov eax, dword ptr [eax]
// 005c2de9  50                   push eax
// 005c2dea  e861ecffff           call 0x5c1a50
// 005c2def  83c404               add esp, 4
// 005c2df2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2df5  8908                 mov dword ptr [eax], ecx
// 005c2df7  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c2dfa  52                   push edx
// 005c2dfb  e870ecffff           call 0x5c1a70
// 005c2e00  83c404               add esp, 4
// 005c2e03  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c2e06  8908                 mov dword ptr [eax], ecx
// 005c2e08  8b5508               mov edx, dword ptr [ebp + 8]
// 005c2e0b  52                   push edx
// 005c2e0c  e84fecffff           call 0x5c1a60
// 005c2e11  83c404               add esp, 4
// 005c2e14  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c2e17  8908                 mov dword ptr [eax], ecx
// 005c2e19  5e                   pop esi
// 005c2e1a  8be5                 mov esp, ebp
// 005c2e1c  5d                   pop ebp
// 005c2e1d  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp