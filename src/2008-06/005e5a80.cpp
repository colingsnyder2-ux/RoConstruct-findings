// roc 2008-06 005e5a80  unit: RBX::JointsService  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5a80
//
// 005e5a80  83ec0c               sub esp, 0xc
// 005e5a83  53                   push ebx
// 005e5a84  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 005e5a87  55                   push ebp
// 005e5a88  56                   push esi
// 005e5a89  8d7104               lea esi, [ecx + 4]
// 005e5a8c  57                   push edi
// 005e5a8d  894c2410             mov dword ptr [esp + 0x10], ecx
// 005e5a91  395e0c               cmp dword ptr [esi + 0xc], ebx
// 005e5a94  7606                 jbe 0x5e5a9c
// 005e5a96  ff1590288000         call dword ptr [0x802890]
// 005e5a9c  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005e5a9f  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005e5aa2  7606                 jbe 0x5e5aaa
// 005e5aa4  ff1590288000         call dword ptr [0x802890]
// 005e5aaa  8b2e                 mov ebp, dword ptr [esi]
// 005e5aac  897c2418             mov dword ptr [esp + 0x18], edi
// 005e5ab0  3bfb                 cmp edi, ebx
// 005e5ab2  740f                 je 0x5e5ac3
// 005e5ab4  8b07                 mov eax, dword ptr [edi]
// 005e5ab6  3b442420             cmp eax, dword ptr [esp + 0x20]
// 005e5aba  7407                 je 0x5e5ac3
// 005e5abc  83c704               add edi, 4
// 005e5abf  3bfb                 cmp edi, ebx
// 005e5ac1  75f1                 jne 0x5e5ab4
// 005e5ac3  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 005e5ac6  395e0c               cmp dword ptr [esi + 0xc], ebx
// 005e5ac9  7606                 jbe 0x5e5ad1
// 005e5acb  ff1590288000         call dword ptr [0x802890]
// 005e5ad1  8b06                 mov eax, dword ptr [esi]
// 005e5ad3  85ed                 test ebp, ebp
// 005e5ad5  7404                 je 0x5e5adb
// 005e5ad7  3be8                 cmp ebp, eax
// 005e5ad9  7406                 je 0x5e5ae1
// 005e5adb  ff1590288000         call dword ptr [0x802890]
// 005e5ae1  3bfb                 cmp edi, ebx
// 005e5ae3  745a                 je 0x5e5b3f
// 005e5ae5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e5ae9  8b13                 mov edx, dword ptr [ebx]
// 005e5aeb  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e5aef  8b5208               mov edx, dword ptr [edx + 8]
// 005e5af2  50                   push eax
// 005e5af3  8bcb                 mov ecx, ebx
// 005e5af5  ffd2                 call edx
// 005e5af7  837b1c00             cmp dword ptr [ebx + 0x1c], 0
// 005e5afb  7434                 je 0x5e5b31
// 005e5afd  8b460c               mov eax, dword ptr [esi + 0xc]
// 005e5b00  89442420             mov dword ptr [esp + 0x20], eax
// 005e5b04  3b4610               cmp eax, dword ptr [esi + 0x10]
// 005e5b07  7606                 jbe 0x5e5b0f
// 005e5b09  ff1590288000         call dword ptr [0x802890]
// 005e5b0f  8b06                 mov eax, dword ptr [esi]
// 005e5b11  85ed                 test ebp, ebp
// 005e5b13  7404                 je 0x5e5b19
// 005e5b15  3be8                 cmp ebp, eax
// 005e5b17  7406                 je 0x5e5b1f
// 005e5b19  ff1590288000         call dword ptr [0x802890]
// 005e5b1f  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 005e5b22  8bc7                 mov eax, edi
// 005e5b24  2b442420             sub eax, dword ptr [esp + 0x20]
// 005e5b28  c1f802               sar eax, 2
// 005e5b2b  50                   push eax
// 005e5b2c  e80face3ff           call 0x420740
// 005e5b31  57                   push edi
// 005e5b32  55                   push ebp
// 005e5b33  8d4c241c             lea ecx, [esp + 0x1c]
// 005e5b37  51                   push ecx
// 005e5b38  8bce                 mov ecx, esi
// 005e5b3a  e8f13ce7ff           call 0x459830
// 005e5b3f  5f                   pop edi
// 005e5b40  5e                   pop esi
// 005e5b41  5d                   pop ebp
// 005e5b42  5b                   pop ebx
// 005e5b43  83c40c               add esp, 0xc
// 005e5b46  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?removeListener@?$Notifier@VRunService@RBX@@VHeartbeat@2@@RBX@@QBEXPAV?$Listener@VRunService@RBX@@VHeartbeat@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
