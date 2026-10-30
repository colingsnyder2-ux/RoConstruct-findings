// roc 2009-06 005bf9a0  unit: RBX::AggregatingSceneManager::Bucket  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bf9a0
//
// 005bf9a0  55                   push ebp
// 005bf9a1  8bec                 mov ebp, esp
// 005bf9a3  83ec4c               sub esp, 0x4c
// 005bf9a6  894db8               mov dword ptr [ebp - 0x48], ecx
// 005bf9a9  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005bf9ac  e8ef160000           call 0x5c10a0
// 005bf9b1  8b00                 mov eax, dword ptr [eax]
// 005bf9b3  8945f4               mov dword ptr [ebp - 0xc], eax
// 005bf9b6  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005bf9b9  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005bf9bc  8955f8               mov dword ptr [ebp - 8], edx
// 005bf9bf  c645ff01             mov byte ptr [ebp - 1], 1
// 005bf9c3  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005bf9c6  50                   push eax
// 005bf9c7  e834d7feff           call 0x5ad100
// 005bf9cc  83c404               add esp, 4
// 005bf9cf  0fbe08               movsx ecx, byte ptr [eax]
// 005bf9d2  85c9                 test ecx, ecx
// 005bf9d4  7562                 jne 0x5bfa38
// 005bf9d6  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005bf9d9  8955f8               mov dword ptr [ebp - 8], edx
// 005bf9dc  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005bf9df  50                   push eax
// 005bf9e0  e82bcdfeff           call 0x5ac710
// 005bf9e5  83c404               add esp, 4
// 005bf9e8  50                   push eax
// 005bf9e9  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005bf9ec  51                   push ecx
// 005bf9ed  e85e200000           call 0x5c1a50
// 005bf9f2  83c404               add esp, 4
// 005bf9f5  50                   push eax
// 005bf9f6  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005bf9f9  83c108               add ecx, 8
// 005bf9fc  e88f170000           call 0x5c1190
// 005bfa01  8845ff               mov byte ptr [ebp - 1], al
// 005bfa04  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 005bfa08  85d2                 test edx, edx
// 005bfa0a  7413                 je 0x5bfa1f
// 005bfa0c  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 005bfa0f  50                   push eax
// 005bfa10  e83b200000           call 0x5c1a50
// 005bfa15  83c404               add esp, 4
// 005bfa18  8b08                 mov ecx, dword ptr [eax]
// 005bfa1a  894db4               mov dword ptr [ebp - 0x4c], ecx
// 005bfa1d  eb11                 jmp 0x5bfa30
// 005bfa1f  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 005bfa22  52                   push edx
// 005bfa23  e848200000           call 0x5c1a70
// 005bfa28  83c404               add esp, 4
// 005bfa2b  8b00                 mov eax, dword ptr [eax]
// 005bfa2d  8945b4               mov dword ptr [ebp - 0x4c], eax
// 005bfa30  8b4db4               mov ecx, dword ptr [ebp - 0x4c]
// 005bfa33  894df4               mov dword ptr [ebp - 0xc], ecx
// 005bfa36  eb8b                 jmp 0x5bf9c3
// 005bfa38  33d2                 xor edx, edx
// 005bfa3a  7437                 je 0x5bfa73
// 005bfa3c  c645eb01             mov byte ptr [ebp - 0x15], 1
// 005bfa40  8d45eb               lea eax, [ebp - 0x15]
// 005bfa43  50                   push eax
// 005bfa44  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005bfa47  51                   push ecx
// 005bfa48  8b55f8               mov edx, dword ptr [ebp - 8]
// 005bfa4b  52                   push edx
// 005bfa4c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 005bfa50  50                   push eax
// 005bfa51  8d4de0               lea ecx, [ebp - 0x20]
// 005bfa54  51                   push ecx
// 005bfa55  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005bfa58  e8b3110000           call 0x5c0c10
// 005bfa5d  50                   push eax
// 005bfa5e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bfa61  e85a67ffff           call 0x5b61c0
// 005bfa66  8b4508               mov eax, dword ptr [ebp + 8]
// 005bfa69  e9ed000000           jmp 0x5bfb5b
// 005bfa6e  e9e8000000           jmp 0x5bfb5b
// 005bfa73  8b55b8               mov edx, dword ptr [ebp - 0x48]
// 005bfa76  52                   push edx
// 005bfa77  8b45f8               mov eax, dword ptr [ebp - 8]
// 005bfa7a  50                   push eax
// 005bfa7b  8d4dec               lea ecx, [ebp - 0x14]
// 005bfa7e  e86d1a0000           call 0x5c14f0
// 005bfa83  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 005bfa87  85c9                 test ecx, ecx
// 005bfa89  7502                 jne 0x5bfa8d
// 005bfa8b  eb55                 jmp 0x5bfae2
// 005bfa8d  8d55d8               lea edx, [ebp - 0x28]
// 005bfa90  52                   push edx
// 005bfa91  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005bfa94  e86749ffff           call 0x5b4400
// 005bfa99  50                   push eax
// 005bfa9a  8d4dec               lea ecx, [ebp - 0x14]
// 005bfa9d  e8fe190000           call 0x5c14a0
// 005bfaa2  0fb6c0               movzx eax, al
// 005bfaa5  85c0                 test eax, eax
// 005bfaa7  7431                 je 0x5bfada
// 005bfaa9  c645d701             mov byte ptr [ebp - 0x29], 1
// 005bfaad  8d4dd7               lea ecx, [ebp - 0x29]
// 005bfab0  51                   push ecx
// 005bfab1  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005bfab4  52                   push edx
// 005bfab5  8b45f8               mov eax, dword ptr [ebp - 8]
// 005bfab8  50                   push eax
// 005bfab9  6a01                 push 1
// 005bfabb  8d4dcc               lea ecx, [ebp - 0x34]
// 005bfabe  51                   push ecx
// 005bfabf  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005bfac2  e849110000           call 0x5c0c10
// 005bfac7  50                   push eax
// 005bfac8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bfacb  e8f066ffff           call 0x5b61c0
// 005bfad0  8b4508               mov eax, dword ptr [ebp + 8]
// 005bfad3  e983000000           jmp 0x5bfb5b
// 005bfad8  eb08                 jmp 0x5bfae2
// 005bfada  8d4dec               lea ecx, [ebp - 0x14]
// 005bfadd  e82e1a0000           call 0x5c1510
// 005bfae2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005bfae5  52                   push edx
// 005bfae6  e8651f0000           call 0x5c1a50
// 005bfaeb  83c404               add esp, 4
// 005bfaee  50                   push eax
// 005bfaef  8d4dec               lea ecx, [ebp - 0x14]
// 005bfaf2  e839c2feff           call 0x5abd30
// 005bfaf7  50                   push eax
// 005bfaf8  e813ccfeff           call 0x5ac710
// 005bfafd  83c404               add esp, 4
// 005bfb00  50                   push eax
// 005bfb01  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005bfb04  83c108               add ecx, 8
// 005bfb07  e884160000           call 0x5c1190
// 005bfb0c  0fb6c0               movzx eax, al
// 005bfb0f  85c0                 test eax, eax
// 005bfb11  7431                 je 0x5bfb44
// 005bfb13  c645cb01             mov byte ptr [ebp - 0x35], 1
// 005bfb17  8d4dcb               lea ecx, [ebp - 0x35]
// 005bfb1a  51                   push ecx
// 005bfb1b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005bfb1e  52                   push edx
// 005bfb1f  8b45f8               mov eax, dword ptr [ebp - 8]
// 005bfb22  50                   push eax
// 005bfb23  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 005bfb27  51                   push ecx
// 005bfb28  8d55c0               lea edx, [ebp - 0x40]
// 005bfb2b  52                   push edx
// 005bfb2c  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 005bfb2f  e8dc100000           call 0x5c0c10
// 005bfb34  50                   push eax
// 005bfb35  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bfb38  e88366ffff           call 0x5b61c0
// 005bfb3d  8b4508               mov eax, dword ptr [ebp + 8]
// 005bfb40  eb19                 jmp 0x5bfb5b
// 005bfb42  eb17                 jmp 0x5bfb5b
// 005bfb44  c645bf00             mov byte ptr [ebp - 0x41], 0
// 005bfb48  8d45bf               lea eax, [ebp - 0x41]
// 005bfb4b  50                   push eax
// 005bfb4c  8d4dec               lea ecx, [ebp - 0x14]
// 005bfb4f  51                   push ecx
// 005bfb50  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005bfb53  e86866ffff           call 0x5b61c0
// 005bfb58  8b4508               mov eax, dword ptr [ebp + 8]
// 005bfb5b  8be5                 mov esp, ebp
// 005bfb5d  5d                   pop ebp
// 005bfb5e  c20800               ret 8
// copied from an identical function in another client (function ?insert@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@HU?$less@H@std@@V?$allocator@H@2@$0A@@std@@@std@@_N@2@ABH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp