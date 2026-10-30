// roc 2009-06 005c3c30  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c3c30
//
// 005c3c30  55                   push ebp
// 005c3c31  8bec                 mov ebp, esp
// 005c3c33  83ec08               sub esp, 8
// 005c3c36  56                   push esi
// 005c3c37  894df8               mov dword ptr [ebp - 8], ecx
// 005c3c3a  8b4508               mov eax, dword ptr [ebp + 8]
// 005c3c3d  50                   push eax
// 005c3c3e  e82ddeffff           call 0x5c1a70
// 005c3c43  83c404               add esp, 4
// 005c3c46  8b08                 mov ecx, dword ptr [eax]
// 005c3c48  894dfc               mov dword ptr [ebp - 4], ecx
// 005c3c4b  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c3c4e  52                   push edx
// 005c3c4f  e8fcddffff           call 0x5c1a50
// 005c3c54  83c404               add esp, 4
// 005c3c57  8bf0                 mov esi, eax
// 005c3c59  8b4508               mov eax, dword ptr [ebp + 8]
// 005c3c5c  50                   push eax
// 005c3c5d  e80edeffff           call 0x5c1a70
// 005c3c62  83c404               add esp, 4
// 005c3c65  8b0e                 mov ecx, dword ptr [esi]
// 005c3c67  8908                 mov dword ptr [eax], ecx
// 005c3c69  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c3c6c  52                   push edx
// 005c3c6d  e8deddffff           call 0x5c1a50
// 005c3c72  83c404               add esp, 4
// 005c3c75  8b00                 mov eax, dword ptr [eax]
// 005c3c77  50                   push eax
// 005c3c78  e8c3ddffff           call 0x5c1a40
// 005c3c7d  83c404               add esp, 4
// 005c3c80  0fbe08               movsx ecx, byte ptr [eax]
// 005c3c83  85c9                 test ecx, ecx
// 005c3c85  751c                 jne 0x5c3ca3
// 005c3c87  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c3c8a  52                   push edx
// 005c3c8b  e8c0ddffff           call 0x5c1a50
// 005c3c90  83c404               add esp, 4
// 005c3c93  8b00                 mov eax, dword ptr [eax]
// 005c3c95  50                   push eax
// 005c3c96  e8c5ddffff           call 0x5c1a60
// 005c3c9b  83c404               add esp, 4
// 005c3c9e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c3ca1  8908                 mov dword ptr [eax], ecx
// 005c3ca3  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3ca6  52                   push edx
// 005c3ca7  e8b4ddffff           call 0x5c1a60
// 005c3cac  83c404               add esp, 4
// 005c3caf  8bf0                 mov esi, eax
// 005c3cb1  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c3cb4  50                   push eax
// 005c3cb5  e8a6ddffff           call 0x5c1a60
// 005c3cba  83c404               add esp, 4
// 005c3cbd  8b0e                 mov ecx, dword ptr [esi]
// 005c3cbf  8908                 mov dword ptr [eax], ecx
// 005c3cc1  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c3cc4  e8d7d3ffff           call 0x5c10a0
// 005c3cc9  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3ccc  3b10                 cmp edx, dword ptr [eax]
// 005c3cce  750f                 jne 0x5c3cdf
// 005c3cd0  8b4df8               mov ecx, dword ptr [ebp - 8]
// 005c3cd3  e8c8d3ffff           call 0x5c10a0
// 005c3cd8  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3cdb  8908                 mov dword ptr [eax], ecx
// 005c3cdd  eb58                 jmp 0x5c3d37
// 005c3cdf  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3ce2  52                   push edx
// 005c3ce3  e878ddffff           call 0x5c1a60
// 005c3ce8  83c404               add esp, 4
// 005c3ceb  8b00                 mov eax, dword ptr [eax]
// 005c3ced  50                   push eax
// 005c3cee  e85dddffff           call 0x5c1a50
// 005c3cf3  83c404               add esp, 4
// 005c3cf6  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c3cf9  3b08                 cmp ecx, dword ptr [eax]
// 005c3cfb  751e                 jne 0x5c3d1b
// 005c3cfd  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3d00  52                   push edx
// 005c3d01  e85addffff           call 0x5c1a60
// 005c3d06  83c404               add esp, 4
// 005c3d09  8b00                 mov eax, dword ptr [eax]
// 005c3d0b  50                   push eax
// 005c3d0c  e83fddffff           call 0x5c1a50
// 005c3d11  83c404               add esp, 4
// 005c3d14  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3d17  8908                 mov dword ptr [eax], ecx
// 005c3d19  eb1c                 jmp 0x5c3d37
// 005c3d1b  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3d1e  52                   push edx
// 005c3d1f  e83cddffff           call 0x5c1a60
// 005c3d24  83c404               add esp, 4
// 005c3d27  8b00                 mov eax, dword ptr [eax]
// 005c3d29  50                   push eax
// 005c3d2a  e841ddffff           call 0x5c1a70
// 005c3d2f  83c404               add esp, 4
// 005c3d32  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3d35  8908                 mov dword ptr [eax], ecx
// 005c3d37  8b55fc               mov edx, dword ptr [ebp - 4]
// 005c3d3a  52                   push edx
// 005c3d3b  e810ddffff           call 0x5c1a50
// 005c3d40  83c404               add esp, 4
// 005c3d43  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c3d46  8908                 mov dword ptr [eax], ecx
// 005c3d48  8b5508               mov edx, dword ptr [ebp + 8]
// 005c3d4b  52                   push edx
// 005c3d4c  e80fddffff           call 0x5c1a60
// 005c3d51  83c404               add esp, 4
// 005c3d54  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005c3d57  8908                 mov dword ptr [eax], ecx
// 005c3d59  5e                   pop esi
// 005c3d5a  8be5                 mov esp, ebp
// 005c3d5c  5d                   pop ebp
// 005c3d5d  c20400               ret 4
// copied from an identical function in another client (function ?_Lrotate@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp