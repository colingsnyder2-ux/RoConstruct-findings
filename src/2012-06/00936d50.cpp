// roc 2012-06 00936d50  unit: seg_00930000  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936d50
//
// 00936d50  53                   push ebx
// 00936d51  55                   push ebp
// 00936d52  56                   push esi
// 00936d53  8b742418             mov esi, dword ptr [esp + 0x18]
// 00936d57  57                   push edi
// 00936d58  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00936d5c  8b4720               mov eax, dword ptr [edi + 0x20]
// 00936d5f  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00936d63  7406                 je 0x936d6b
// 00936d65  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00936d69  7402                 je 0x936d6d
// 00936d6b  33c0                 xor eax, eax
// 00936d6d  e8cefcffff           call 0x936a40
// 00936d72  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936d76  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00936d79  89442414             mov dword ptr [esp + 0x14], eax
// 00936d7d  7519                 jne 0x936d98
// 00936d7f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00936d82  8b06                 mov eax, dword ptr [esi]
// 00936d84  51                   push ecx
// 00936d85  8b4e04               mov ecx, dword ptr [esi + 4]
// 00936d88  6a04                 push 4
// 00936d8a  8d54241c             lea edx, [esp + 0x1c]
// 00936d8e  52                   push edx
// 00936d8f  50                   push eax
// 00936d90  ffd1                 call ecx
// 00936d92  83c410               add esp, 0x10
// 00936d95  894610               mov dword ptr [esi + 0x10], eax
// 00936d98  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936d9c  8b5740               mov edx, dword ptr [edi + 0x40]
// 00936d9f  89542414             mov dword ptr [esp + 0x14], edx
// 00936da3  7519                 jne 0x936dbe
// 00936da5  8b4608               mov eax, dword ptr [esi + 8]
// 00936da8  8b16                 mov edx, dword ptr [esi]
// 00936daa  50                   push eax
// 00936dab  8b4604               mov eax, dword ptr [esi + 4]
// 00936dae  6a04                 push 4
// 00936db0  8d4c241c             lea ecx, [esp + 0x1c]
// 00936db4  51                   push ecx
// 00936db5  52                   push edx
// 00936db6  ffd0                 call eax
// 00936db8  83c410               add esp, 0x10
// 00936dbb  894610               mov dword ptr [esi + 0x10], eax
// 00936dbe  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936dc2  8a4f48               mov cl, byte ptr [edi + 0x48]
// 00936dc5  884c2414             mov byte ptr [esp + 0x14], cl
// 00936dc9  7519                 jne 0x936de4
// 00936dcb  8b5608               mov edx, dword ptr [esi + 8]
// 00936dce  8b0e                 mov ecx, dword ptr [esi]
// 00936dd0  52                   push edx
// 00936dd1  8b5604               mov edx, dword ptr [esi + 4]
// 00936dd4  6a01                 push 1
// 00936dd6  8d44241c             lea eax, [esp + 0x1c]
// 00936dda  50                   push eax
// 00936ddb  51                   push ecx
// 00936ddc  ffd2                 call edx
// 00936dde  83c410               add esp, 0x10
// 00936de1  894610               mov dword ptr [esi + 0x10], eax
// 00936de4  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936de8  8a4749               mov al, byte ptr [edi + 0x49]
// 00936deb  88442414             mov byte ptr [esp + 0x14], al
// 00936def  7519                 jne 0x936e0a
// 00936df1  8b4e08               mov ecx, dword ptr [esi + 8]
// 00936df4  8b06                 mov eax, dword ptr [esi]
// 00936df6  51                   push ecx
// 00936df7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00936dfa  6a01                 push 1
// 00936dfc  8d54241c             lea edx, [esp + 0x1c]
// 00936e00  52                   push edx
// 00936e01  50                   push eax
// 00936e02  ffd1                 call ecx
// 00936e04  83c410               add esp, 0x10
// 00936e07  894610               mov dword ptr [esi + 0x10], eax
// 00936e0a  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936e0e  8a574a               mov dl, byte ptr [edi + 0x4a]
// 00936e11  88542414             mov byte ptr [esp + 0x14], dl
// 00936e15  7519                 jne 0x936e30
// 00936e17  8b4608               mov eax, dword ptr [esi + 8]
// 00936e1a  8b16                 mov edx, dword ptr [esi]
// 00936e1c  50                   push eax
// 00936e1d  8b4604               mov eax, dword ptr [esi + 4]
// 00936e20  6a01                 push 1
// 00936e22  8d4c241c             lea ecx, [esp + 0x1c]
// 00936e26  51                   push ecx
// 00936e27  52                   push edx
// 00936e28  ffd0                 call eax
// 00936e2a  83c410               add esp, 0x10
// 00936e2d  894610               mov dword ptr [esi + 0x10], eax
// 00936e30  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936e34  8a4f4b               mov cl, byte ptr [edi + 0x4b]
// 00936e37  884c2414             mov byte ptr [esp + 0x14], cl
// 00936e3b  7519                 jne 0x936e56
// 00936e3d  8b5608               mov edx, dword ptr [esi + 8]
// 00936e40  8b0e                 mov ecx, dword ptr [esi]
// 00936e42  52                   push edx
// 00936e43  8b5604               mov edx, dword ptr [esi + 4]
// 00936e46  6a01                 push 1
// 00936e48  8d44241c             lea eax, [esp + 0x1c]
// 00936e4c  50                   push eax
// 00936e4d  51                   push ecx
// 00936e4e  ffd2                 call edx
// 00936e50  83c410               add esp, 0x10
// 00936e53  894610               mov dword ptr [esi + 0x10], eax
// 00936e56  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936e5a  8b5f2c               mov ebx, dword ptr [edi + 0x2c]
// 00936e5d  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00936e60  895c2414             mov dword ptr [esp + 0x14], ebx
// 00936e64  7538                 jne 0x936e9e
// 00936e66  8b4608               mov eax, dword ptr [esi + 8]
// 00936e69  8b16                 mov edx, dword ptr [esi]
// 00936e6b  50                   push eax
// 00936e6c  8b4604               mov eax, dword ptr [esi + 4]
// 00936e6f  6a04                 push 4
// 00936e71  8d4c241c             lea ecx, [esp + 0x1c]
// 00936e75  51                   push ecx
// 00936e76  52                   push edx
// 00936e77  ffd0                 call eax
// 00936e79  83c410               add esp, 0x10
// 00936e7c  894610               mov dword ptr [esi + 0x10], eax
// 00936e7f  85c0                 test eax, eax
// 00936e81  751b                 jne 0x936e9e
// 00936e83  8b4e08               mov ecx, dword ptr [esi + 8]
// 00936e86  8b06                 mov eax, dword ptr [esi]
// 00936e88  51                   push ecx
// 00936e89  8b4e04               mov ecx, dword ptr [esi + 4]
// 00936e8c  8d149d00000000       lea edx, [ebx*4]
// 00936e93  52                   push edx
// 00936e94  55                   push ebp
// 00936e95  50                   push eax
// 00936e96  ffd1                 call ecx
// 00936e98  83c410               add esp, 0x10
// 00936e9b  894610               mov dword ptr [esi + 0x10], eax
// 00936e9e  57                   push edi
// 00936e9f  8bc6                 mov eax, esi
// 00936ea1  e81afcffff           call 0x936ac0
// 00936ea6  57                   push edi
// 00936ea7  8bc6                 mov eax, esi
// 00936ea9  e852fdffff           call 0x936c00
// 00936eae  83c408               add esp, 8
// 00936eb1  5f                   pop edi
// 00936eb2  5e                   pop esi
// 00936eb3  5d                   pop ebp
// 00936eb4  5b                   pop ebx
// 00936eb5  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpFunction)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
