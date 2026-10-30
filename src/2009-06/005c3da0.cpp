// roc 2009-06 005c3da0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c3da0
//
// 005c3da0  55                   push ebp
// 005c3da1  8bec                 mov ebp, esp
// 005c3da3  83ec08               sub esp, 8
// 005c3da6  56                   push esi
// 005c3da7  894df8               mov dword ptr [ebp - 8], ecx
// 005c3daa  8b4508               mov eax, dword ptr [ebp + 8]
// 005c3dad  50                   push eax
// 005c3dae  e89ddcffff           call 0x5c1a50
// 005c3db3  83c404               add esp, 4
// 005c3db6  8b08                 mov ecx, dword ptr [eax]
// 005c3db8  894dfc               mov dword ptr [ebp - 4], ecx
// 005c3dbb  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c3dbe  52                   push edx
// 005c3dbf  e8acdcffff           call 0x5c1a70
// 005c3dc4  83c404               add esp, 4
// 005c3dc7  8bf0                 mov esi, eax
// 005c3dc9  8b4508               mov eax, dword ptr [ebp + 8]
// 005c3dcc  50                   push eax
// 005c3dcd  e87edcffff           call 0x5c1a50
// 005c3dd2  83c404               add esp, 4
// 005c3dd5  8b0e                 mov ecx, dword ptr [esi]
// 005c3dd7  8908                 mov dword ptr [eax], ecx
// 005c3dd9  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c3ddc  52                   push edx
// 005c3ddd  e88edcffff           call 0x5c1a70
// 005c3de2  83c404               add esp, 4
// 005c3de5  8b00                 mov eax, dword ptr [eax]
// 005c3de7  50                   push eax
// 005c3de8  e853dcffff           call 0x5c1a40
// 005c3ded  83c404               add esp, 4
// 005c3df0  0fbe08               movsx ecx, byte ptr [eax]
// 005c3df3  85c9                 test ecx, ecx
// 005c3df5  751c                 jne 0x5c3e13
// 005c3df7  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c3dfa  52                   push edx
// 005c3dfb  e870dcffff           call 0x5c1a70
// 005c3e00  83c404               add esp, 4
// 005c3e03  8b00                 mov eax, dword ptr [eax]
// 005c3e05  50                   push eax
// 005c3e06  e855dcffff           call 0x5c1a60
// 005c3e0b  83c404               add esp, 4
// 005c3e0e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c3e11  8908                 mov dword ptr [eax], ecx
// 005c3e13  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3e16  52                   push edx
// 005c3e17  e844dcffff           call 0x5c1a60
// 005c3e1c  83c404               add esp, 4
// 005c3e1f  8bf0                 mov esi, eax
// 005c3e21  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c3e24  50                   push eax
// 005c3e25  e836dcffff           call 0x5c1a60
// 005c3e2a  83c404               add esp, 4
// 005c3e2d  8b0e                 mov ecx, dword ptr [esi]
// 005c3e2f  8908                 mov dword ptr [eax], ecx
// 005c3e31  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c3e34  e867d2ffff           call 0x5c10a0
// 005c3e39  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3e3c  3b10                 cmp edx, dword ptr [eax]
// 005c3e3e  750f                 jne 0x5c3e4f
// 005c3e40  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c3e43  e858d2ffff           call 0x5c10a0
// 005c3e48  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3e4b  8908                 mov dword ptr [eax], ecx
// 005c3e4d  eb58                 jmp 0x5c3ea7
// 005c3e4f  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3e52  52                   push edx
// 005c3e53  e808dcffff           call 0x5c1a60
// 005c3e58  83c404               add esp, 4
// 005c3e5b  8b00                 mov eax, dword ptr [eax]
// 005c3e5d  50                   push eax
// 005c3e5e  e80ddcffff           call 0x5c1a70
// 005c3e63  83c404               add esp, 4
// 005c3e66  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c3e69  3b08                 cmp ecx, dword ptr [eax]
// 005c3e6b  751e                 jne 0x5c3e8b
// 005c3e6d  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3e70  52                   push edx
// 005c3e71  e8eadbffff           call 0x5c1a60
// 005c3e76  83c404               add esp, 4
// 005c3e79  8b00                 mov eax, dword ptr [eax]
// 005c3e7b  50                   push eax
// 005c3e7c  e8efdbffff           call 0x5c1a70
// 005c3e81  83c404               add esp, 4
// 005c3e84  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3e87  8908                 mov dword ptr [eax], ecx
// 005c3e89  eb1c                 jmp 0x5c3ea7
// 005c3e8b  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3e8e  52                   push edx
// 005c3e8f  e8ccdbffff           call 0x5c1a60
// 005c3e94  83c404               add esp, 4
// 005c3e97  8b00                 mov eax, dword ptr [eax]
// 005c3e99  50                   push eax
// 005c3e9a  e8b1dbffff           call 0x5c1a50
// 005c3e9f  83c404               add esp, 4
// 005c3ea2  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3ea5  8908                 mov dword ptr [eax], ecx
// 005c3ea7  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c3eaa  52                   push edx
// 005c3eab  e8c0dbffff           call 0x5c1a70
// 005c3eb0  83c404               add esp, 4
// 005c3eb3  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c3eb6  8908                 mov dword ptr [eax], ecx
// 005c3eb8  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3ebb  52                   push edx
// 005c3ebc  e89fdbffff           call 0x5c1a60
// 005c3ec1  83c404               add esp, 4
// 005c3ec4  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3ec7  8908                 mov dword ptr [eax], ecx
// 005c3ec9  5e                   pop esi
// 005c3eca  8be5                 mov esp, ebp
// 005c3ecc  5d                   pop ebp
// 005c3ecd  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp