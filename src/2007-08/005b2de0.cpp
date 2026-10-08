// roc 2007-08 005b2de0  unit: RBX::JointsService  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2de0
//
// 005b2de0  83ec10               sub esp, 0x10
// 005b2de3  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005b2de6  394108               cmp dword ptr [ecx + 8], eax
// 005b2de9  55                   push ebp
// 005b2dea  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005b2df0  56                   push esi
// 005b2df1  8d7104               lea esi, [ecx + 4]
// 005b2df4  894c240c             mov dword ptr [esp + 0xc], ecx
// 005b2df8  89442408             mov dword ptr [esp + 8], eax
// 005b2dfc  7602                 jbe 0x5b2e00
// 005b2dfe  ffd5                 call ebp
// 005b2e00  53                   push ebx
// 005b2e01  8b5e08               mov ebx, dword ptr [esi + 8]
// 005b2e04  395e04               cmp dword ptr [esi + 4], ebx
// 005b2e07  57                   push edi
// 005b2e08  7602                 jbe 0x5b2e0c
// 005b2e0a  ffd5                 call ebp
// 005b2e0c  8b7e04               mov edi, dword ptr [esi + 4]
// 005b2e0f  3b7e08               cmp edi, dword ptr [esi + 8]
// 005b2e12  7602                 jbe 0x5b2e16
// 005b2e14  ffd5                 call ebp
// 005b2e16  3bfb                 cmp edi, ebx
// 005b2e18  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005b2e1c  8bc6                 mov eax, esi
// 005b2e1e  897c241c             mov dword ptr [esp + 0x1c], edi
// 005b2e22  740b                 je 0x5b2e2f
// 005b2e24  392f                 cmp dword ptr [edi], ebp
// 005b2e26  7407                 je 0x5b2e2f
// 005b2e28  83c704               add edi, 4
// 005b2e2b  3bfb                 cmp edi, ebx
// 005b2e2d  75f5                 jne 0x5b2e24
// 005b2e2f  85c0                 test eax, eax
// 005b2e31  7404                 je 0x5b2e37
// 005b2e33  3bc6                 cmp eax, esi
// 005b2e35  7406                 je 0x5b2e3d
// 005b2e37  ff15d8e67700         call dword ptr [0x77e6d8]
// 005b2e3d  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 005b2e41  5f                   pop edi
// 005b2e42  5b                   pop ebx
// 005b2e43  7518                 jne 0x5b2e5d
// 005b2e45  8d44241c             lea eax, [esp + 0x1c]
// 005b2e49  50                   push eax
// 005b2e4a  8bce                 mov ecx, esi
// 005b2e4c  e81f120000           call 0x5b4070
// 005b2e51  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b2e55  8b11                 mov edx, dword ptr [ecx]
// 005b2e57  8b4204               mov eax, dword ptr [edx + 4]
// 005b2e5a  55                   push ebp
// 005b2e5b  ffd0                 call eax
// 005b2e5d  5e                   pop esi
// 005b2e5e  5d                   pop ebp
// 005b2e5f  83c410               add esp, 0x10
// 005b2e62  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?addListener@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@QBEXPAV?$Listener@VRunService@RBX@@VHeartbeat@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
