// roc 2011-06 00847b60  unit: CRobloxTreeCtrl  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847b60
//
// 00847b60  83ec78               sub esp, 0x78
// 00847b63  56                   push esi
// 00847b64  57                   push edi
// 00847b65  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00847b6c  8bf1                 mov esi, ecx
// 00847b6e  85ff                 test edi, edi
// 00847b70  750a                 jne 0x847b7c
// 00847b72  5f                   pop edi
// 00847b73  33c0                 xor eax, eax
// 00847b75  5e                   pop esi
// 00847b76  83c478               add esp, 0x78
// 00847b79  c20c00               ret 0xc
// 00847b7c  837e0400             cmp dword ptr [esi + 4], 0
// 00847b80  752d                 jne 0x847baf
// 00847b82  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00847b89  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00847b90  8b7634               mov esi, dword ptr [esi + 0x34]
// 00847b93  6a00                 push 0
// 00847b95  50                   push eax
// 00847b96  51                   push ecx
// 00847b97  6a00                 push 0
// 00847b99  6a00                 push 0
// 00847b9b  6a00                 push 0
// 00847b9d  6a08                 push 8
// 00847b9f  57                   push edi
// 00847ba0  8bce                 mov ecx, esi
// 00847ba2  e83b2efcff           call 0x80a9e2
// 00847ba7  5f                   pop edi
// 00847ba8  5e                   pop esi
// 00847ba9  83c478               add esp, 0x78
// 00847bac  c20c00               ret 0xc
// 00847baf  8b4634               mov eax, dword ptr [esi + 0x34]
// 00847bb2  8b5020               mov edx, dword ptr [eax + 0x20]
// 00847bb5  55                   push ebp
// 00847bb6  6a00                 push 0
// 00847bb8  6a09                 push 9
// 00847bba  680a110000           push 0x110a
// 00847bbf  52                   push edx
// 00847bc0  ff15c019a400         call dword ptr [0xa419c0]
// 00847bc6  8be8                 mov ebp, eax
// 00847bc8  33c0                 xor eax, eax
// 00847bca  3bef                 cmp ebp, edi
// 00847bcc  0f94c0               sete al
// 00847bcf  89442410             mov dword ptr [esp + 0x10], eax
// 00847bd3  85ed                 test ebp, ebp
// 00847bd5  7417                 je 0x847bee
// 00847bd7  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847bda  6a02                 push 2
// 00847bdc  55                   push ebp
// 00847bdd  e8764c1800           call 0x9cc858
// 00847be2  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00847bea  a802                 test al, 2
// 00847bec  7508                 jne 0x847bf6
// 00847bee  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00847bf6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847bf9  53                   push ebx
// 00847bfa  6a02                 push 2
// 00847bfc  57                   push edi
// 00847bfd  e8564c1800           call 0x9cc858
// 00847c02  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 00847c09  8bf8                 mov edi, eax
// 00847c0b  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00847c12  83e0fe               and eax, 0xfffffffe
// 00847c15  d1ef                 shr edi, 1
// 00847c17  83e701               and edi, 1
// 00847c1a  89442410             mov dword ptr [esp + 0x10], eax
// 00847c1e  83e3fe               and ebx, 0xfffffffe
// 00847c21  e89a940000           call 0x8510c0
// 00847c26  8bc8                 mov ecx, eax
// 00847c28  e8b39d0000           call 0x8519e0
// 00847c2d  f684249400000001     test byte ptr [esp + 0x94], 1
// 00847c35  0fb6c0               movzx eax, al
// 00847c38  8944241c             mov dword ptr [esp + 0x1c], eax
// 00847c3c  0f8456010000         je 0x847d98
// 00847c42  f684249000000001     test byte ptr [esp + 0x90], 1
// 00847c4a  0f84e9000000         je 0x847d39
// 00847c50  85c0                 test eax, eax
// 00847c52  745e                 je 0x847cb2
// 00847c54  837c241400           cmp dword ptr [esp + 0x14], 0
// 00847c59  751b                 jne 0x847c76
// 00847c5b  85ed                 test ebp, ebp
// 00847c5d  7417                 je 0x847c76
// 00847c5f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847c62  6a00                 push 0
// 00847c64  e897f6ffff           call 0x847300
// 00847c69  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847c6c  6a02                 push 2
// 00847c6e  6a02                 push 2
// 00847c70  55                   push ebp
// 00847c71  e8aaf6ffff           call 0x847320
// 00847c76  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00847c7d  51                   push ecx
// 00847c7e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847c81  e87af6ffff           call 0x847300
// 00847c86  85c0                 test eax, eax
// 00847c88  0f8494010000         je 0x847e22
// 00847c8e  837c241400           cmp dword ptr [esp + 0x14], 0
// 00847c93  7567                 jne 0x847cfc
// 00847c95  85ed                 test ebp, ebp
// 00847c97  7463                 je 0x847cfc
// 00847c99  8b542418             mov edx, dword ptr [esp + 0x18]
// 00847c9d  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847ca0  f7da                 neg edx
// 00847ca2  1bd2                 sbb edx, edx
// 00847ca4  6a02                 push 2
// 00847ca6  83e202               and edx, 2
// 00847ca9  52                   push edx
// 00847caa  55                   push ebp
// 00847cab  e870f6ffff           call 0x847320
// 00847cb0  eb4a                 jmp 0x847cfc
// 00847cb2  837c241400           cmp dword ptr [esp + 0x14], 0
// 00847cb7  752b                 jne 0x847ce4
// 00847cb9  837c241800           cmp dword ptr [esp + 0x18], 0
// 00847cbe  7424                 je 0x847ce4
// 00847cc0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847cc3  6a00                 push 0
// 00847cc5  e836f6ffff           call 0x847300
// 00847cca  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847ccd  6a02                 push 2
// 00847ccf  6a02                 push 2
// 00847cd1  55                   push ebp
// 00847cd2  e849f6ffff           call 0x847320
// 00847cd7  8b4634               mov eax, dword ptr [esi + 0x34]
// 00847cda  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00847cdd  51                   push ecx
// 00847cde  ff152c1ba400         call dword ptr [0xa41b2c]
// 00847ce4  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 00847ceb  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847cee  52                   push edx
// 00847cef  e80cf6ffff           call 0x847300
// 00847cf4  85c0                 test eax, eax
// 00847cf6  0f8426010000         je 0x847e22
// 00847cfc  f684249400000002     test byte ptr [esp + 0x94], 2
// 00847d04  7425                 je 0x847d2b
// 00847d06  f684249000000002     test byte ptr [esp + 0x90], 2
// 00847d0e  0f8484000000         je 0x847d98
// 00847d14  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00847d19  757d                 jne 0x847d98
// 00847d1b  837c241400           cmp dword ptr [esp + 0x14], 0
// 00847d20  746e                 je 0x847d90
// 00847d22  837c241800           cmp dword ptr [esp + 0x18], 0
// 00847d27  746f                 je 0x847d98
// 00847d29  eb65                 jmp 0x847d90
// 00847d2b  85ff                 test edi, edi
// 00847d2d  7569                 jne 0x847d98
// 00847d2f  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 00847d34  83cb02               or ebx, 2
// 00847d37  eb5f                 jmp 0x847d98
// 00847d39  837c241400           cmp dword ptr [esp + 0x14], 0
// 00847d3e  7458                 je 0x847d98
// 00847d40  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847d43  6a00                 push 0
// 00847d45  e8b6f5ffff           call 0x847300
// 00847d4a  f684249400000002     test byte ptr [esp + 0x94], 2
// 00847d52  751a                 jne 0x847d6e
// 00847d54  85ff                 test edi, edi
// 00847d56  7440                 je 0x847d98
// 00847d58  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00847d5f  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847d62  6a02                 push 2
// 00847d64  6a02                 push 2
// 00847d66  50                   push eax
// 00847d67  e8b4f5ffff           call 0x847320
// 00847d6c  eb2a                 jmp 0x847d98
// 00847d6e  f684249000000002     test byte ptr [esp + 0x90], 2
// 00847d76  7420                 je 0x847d98
// 00847d78  85ff                 test edi, edi
// 00847d7a  7414                 je 0x847d90
// 00847d7c  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00847d83  6a02                 push 2
// 00847d85  6a02                 push 2
// 00847d87  51                   push ecx
// 00847d88  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847d8b  e890f5ffff           call 0x847320
// 00847d90  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 00847d95  83e3fd               and ebx, 0xfffffffd
// 00847d98  85db                 test ebx, ebx
// 00847d9a  0f84c8000000         je 0x847e68
// 00847da0  f6c302               test bl, 2
// 00847da3  0f84b4000000         je 0x847e5d
// 00847da9  8b4634               mov eax, dword ptr [esi + 0x34]
// 00847dac  8b5020               mov edx, dword ptr [eax + 0x20]
// 00847daf  89542420             mov dword ptr [esp + 0x20], edx
// 00847db3  8b4020               mov eax, dword ptr [eax + 0x20]
// 00847db6  50                   push eax
// 00847db7  ff15f41aa400         call dword ptr [0xa41af4]
// 00847dbd  89442424             mov dword ptr [esp + 0x24], eax
// 00847dc1  33c0                 xor eax, eax
// 00847dc3  f644241002           test byte ptr [esp + 0x10], 2
// 00847dc8  c74424286ffeffff     mov dword ptr [esp + 0x28], 0xfffffe6f
// 00847dd0  89442458             mov dword ptr [esp + 0x58], eax
// 00847dd4  89442430             mov dword ptr [esp + 0x30], eax
// 00847dd8  8944245c             mov dword ptr [esp + 0x5c], eax
// 00847ddc  89442434             mov dword ptr [esp + 0x34], eax
// 00847de0  8d7c2458             lea edi, [esp + 0x58]
// 00847de4  7504                 jne 0x847dea
// 00847de6  8d7c2430             lea edi, [esp + 0x30]
// 00847dea  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00847df1  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847df4  55                   push ebp
// 00847df5  c70714000000         mov dword ptr [edi], 0x14
// 00847dfb  896f04               mov dword ptr [edi + 4], ebp
// 00847dfe  e8092cfcff           call 0x80aa0c
// 00847e03  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00847e07  8b16                 mov edx, dword ptr [esi]
// 00847e09  8b524c               mov edx, dword ptr [edx + 0x4c]
// 00847e0c  894724               mov dword ptr [edi + 0x24], eax
// 00847e0f  8d442420             lea eax, [esp + 0x20]
// 00847e13  894f08               mov dword ptr [edi + 8], ecx
// 00847e16  50                   push eax
// 00847e17  8bce                 mov ecx, esi
// 00847e19  895f0c               mov dword ptr [edi + 0xc], ebx
// 00847e1c  ffd2                 call edx
// 00847e1e  85c0                 test eax, eax
// 00847e20  740c                 je 0x847e2e
// 00847e22  5b                   pop ebx
// 00847e23  5d                   pop ebp
// 00847e24  5f                   pop edi
// 00847e25  33c0                 xor eax, eax
// 00847e27  5e                   pop esi
// 00847e28  83c478               add esp, 0x78
// 00847e2b  c20c00               ret 0xc
// 00847e2e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00847e32  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847e35  53                   push ebx
// 00847e36  50                   push eax
// 00847e37  55                   push ebp
// 00847e38  e8e3f4ffff           call 0x847320
// 00847e3d  8b16                 mov edx, dword ptr [esi]
// 00847e3f  8b524c               mov edx, dword ptr [edx + 0x4c]
// 00847e42  8d442420             lea eax, [esp + 0x20]
// 00847e46  50                   push eax
// 00847e47  8bce                 mov ecx, esi
// 00847e49  c744242c6efeffff     mov dword ptr [esp + 0x2c], 0xfffffe6e
// 00847e51  ffd2                 call edx
// 00847e53  83642410fd           and dword ptr [esp + 0x10], 0xfffffffd
// 00847e58  83e3fd               and ebx, 0xfffffffd
// 00847e5b  eb07                 jmp 0x847e64
// 00847e5d  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00847e64  85db                 test ebx, ebx
// 00847e66  750f                 jne 0x847e77
// 00847e68  5b                   pop ebx
// 00847e69  5d                   pop ebp
// 00847e6a  5f                   pop edi
// 00847e6b  b801000000           mov eax, 1
// 00847e70  5e                   pop esi
// 00847e71  83c478               add esp, 0x78
// 00847e74  c20c00               ret 0xc
// 00847e77  8b442410             mov eax, dword ptr [esp + 0x10]
// 00847e7b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847e7e  53                   push ebx
// 00847e7f  50                   push eax
// 00847e80  55                   push ebp
// 00847e81  e89af4ffff           call 0x847320
// 00847e86  5b                   pop ebx
// 00847e87  5d                   pop ebp
// 00847e88  5f                   pop edi
// 00847e89  5e                   pop esi
// 00847e8a  83c478               add esp, 0x78
// 00847e8d  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SetItemState@CXTTreeBase@@QAEHPAU_TREEITEM@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
