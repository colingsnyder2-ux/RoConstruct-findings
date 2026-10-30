// roc 2009-12 008c3c50  unit: CXTPImageEditorPicture  size: 712 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c3c50
//
// 008c3c50  6aff                 push -1
// 008c3c52  6808429600           push 0x964208
// 008c3c57  64a100000000         mov eax, dword ptr fs:[0]
// 008c3c5d  50                   push eax
// 008c3c5e  83ec2c               sub esp, 0x2c
// 008c3c61  53                   push ebx
// 008c3c62  55                   push ebp
// 008c3c63  56                   push esi
// 008c3c64  57                   push edi
// 008c3c65  a10052b600           mov eax, dword ptr [0xb65200]
// 008c3c6a  33c4                 xor eax, esp
// 008c3c6c  50                   push eax
// 008c3c6d  8d442440             lea eax, [esp + 0x40]
// 008c3c71  64a300000000         mov dword ptr fs:[0], eax
// 008c3c77  8bf1                 mov esi, ecx
// 008c3c79  e812d5ffff           call 0x8c1190
// 008c3c7e  83f805               cmp eax, 5
// 008c3c81  0f875c020000         ja 0x8c3ee3
// 008c3c87  ff2485003f8c00       jmp dword ptr [eax*4 + 0x8c3f00]
// 008c3c8e  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c3c91  6a0c                 push 0xc
// 008c3c93  894678               mov dword ptr [esi + 0x78], eax
// 008c3c96  e8c5fbf2ff           call 0x7f3860
// 008c3c9b  33ed                 xor ebp, ebp
// 008c3c9d  83c404               add esp, 4
// 008c3ca0  3bc5                 cmp eax, ebp
// 008c3ca2  740e                 je 0x8c3cb2
// 008c3ca4  896804               mov dword ptr [eax + 4], ebp
// 008c3ca7  c700148aa000         mov dword ptr [eax], 0xa08a14
// 008c3cad  896808               mov dword ptr [eax + 8], ebp
// 008c3cb0  eb02                 jmp 0x8c3cb4
// 008c3cb2  33c0                 xor eax, eax
// 008c3cb4  55                   push ebp
// 008c3cb5  68fffeff00           push 0xfffeff
// 008c3cba  68fffeff00           push 0xfffeff
// 008c3cbf  83ec08               sub esp, 8
// 008c3cc2  89467c               mov dword ptr [esi + 0x7c], eax
// 008c3cc5  8bc4                 mov eax, esp
// 008c3cc7  8928                 mov dword ptr [eax], ebp
// 008c3cc9  896804               mov dword ptr [eax + 4], ebp
// 008c3ccc  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c3ccf  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c3cd2  8b4678               mov eax, dword ptr [esi + 0x78]
// 008c3cd5  89642464             mov dword ptr [esp + 0x64], esp
// 008c3cd9  51                   push ecx
// 008c3cda  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008c3cdd  52                   push edx
// 008c3cde  50                   push eax
// 008c3cdf  51                   push ecx
// 008c3ce0  e8bbddffff           call 0x8c1aa0
// 008c3ce5  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c3ce8  83c424               add esp, 0x24
// 008c3ceb  3bc5                 cmp eax, ebp
// 008c3ced  7504                 jne 0x8c3cf3
// 008c3cef  33c0                 xor eax, eax
// 008c3cf1  eb03                 jmp 0x8c3cf6
// 008c3cf3  8b4004               mov eax, dword ptr [eax + 4]
// 008c3cf6  8b566c               mov edx, dword ptr [esi + 0x6c]
// 008c3cf9  50                   push eax
// 008c3cfa  52                   push edx
// 008c3cfb  e8f8280600           call 0x9265f8
// 008c3d00  89442450             mov dword ptr [esp + 0x50], eax
// 008c3d04  8d4668               lea eax, [esi + 0x68]
// 008c3d07  3bc5                 cmp eax, ebp
// 008c3d09  7504                 jne 0x8c3d0f
// 008c3d0b  33d2                 xor edx, edx
// 008c3d0d  eb03                 jmp 0x8c3d12
// 008c3d0f  8b5004               mov edx, dword ptr [eax + 4]
// 008c3d12  8bce                 mov ecx, esi
// 008c3d14  e8d7d8ffff           call 0x8c15f0
// 008c3d19  50                   push eax
// 008c3d1a  52                   push edx
// 008c3d1b  8d4c2434             lea ecx, [esp + 0x34]
// 008c3d1f  e89c7af8ff           call 0x84b7c0
// 008c3d24  8b442458             mov eax, dword ptr [esp + 0x58]
// 008c3d28  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008c3d2c  50                   push eax
// 008c3d2d  51                   push ecx
// 008c3d2e  8d54241c             lea edx, [esp + 0x1c]
// 008c3d32  52                   push edx
// 008c3d33  8bce                 mov ecx, esi
// 008c3d35  896c2454             mov dword ptr [esp + 0x54], ebp
// 008c3d39  e842ddffff           call 0x8c1a80
// 008c3d3e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008c3d42  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008c3d46  57                   push edi
// 008c3d47  53                   push ebx
// 008c3d48  e833dcffff           call 0x8c1980
// 008c3d4d  6a01                 push 1
// 008c3d4f  50                   push eax
// 008c3d50  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008c3d53  57                   push edi
// 008c3d54  53                   push ebx
// 008c3d55  50                   push eax
// 008c3d56  ff15a4b09800         call dword ptr [0x98b0a4]
// 008c3d5c  8b442450             mov eax, dword ptr [esp + 0x50]
// 008c3d60  3bc5                 cmp eax, ebp
// 008c3d62  7504                 jne 0x8c3d68
// 008c3d64  33c0                 xor eax, eax
// 008c3d66  eb03                 jmp 0x8c3d6b
// 008c3d68  8b4004               mov eax, dword ptr [eax + 4]
// 008c3d6b  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008c3d6e  50                   push eax
// 008c3d6f  51                   push ecx
// 008c3d70  e883280600           call 0x9265f8
// 008c3d75  8b4678               mov eax, dword ptr [esi + 0x78]
// 008c3d78  3bc5                 cmp eax, ebp
// 008c3d7a  7411                 je 0x8c3d8d
// 008c3d7c  396808               cmp dword ptr [eax + 8], ebp
// 008c3d7f  740c                 je 0x8c3d8d
// 008c3d81  8b567c               mov edx, dword ptr [esi + 0x7c]
// 008c3d84  50                   push eax
// 008c3d85  52                   push edx
// 008c3d86  8bce                 mov ecx, esi
// 008c3d88  e893deffff           call 0x8c1c20
// 008c3d8d  8bce                 mov ecx, esi
// 008c3d8f  e83cfeffff           call 0x8c3bd0
// 008c3d94  8d4c242c             lea ecx, [esp + 0x2c]
// 008c3d98  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008c3da0  e8ab7af8ff           call 0x84b850
// 008c3da5  e939010000           jmp 0x8c3ee3
// 008c3daa  8b442458             mov eax, dword ptr [esp + 0x58]
// 008c3dae  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008c3db2  50                   push eax
// 008c3db3  51                   push ecx
// 008c3db4  8d542424             lea edx, [esp + 0x24]
// 008c3db8  52                   push edx
// 008c3db9  8bce                 mov ecx, esi
// 008c3dbb  e8c0dcffff           call 0x8c1a80
// 008c3dc0  8b4804               mov ecx, dword ptr [eax + 4]
// 008c3dc3  8b10                 mov edx, dword ptr [eax]
// 008c3dc5  51                   push ecx
// 008c3dc6  52                   push edx
// 008c3dc7  8bce                 mov ecx, esi
// 008c3dc9  e8b2dbffff           call 0x8c1980
// 008c3dce  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008c3dd1  50                   push eax
// 008c3dd2  81c164080000         add ecx, 0x864
// 008c3dd8  e853e1ffff           call 0x8c1f30
// 008c3ddd  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008c3de0  8d8164080000         lea eax, [ecx + 0x864]
// 008c3de6  50                   push eax
// 008c3de7  e8f4e9ffff           call 0x8c27e0
// 008c3dec  8b4664               mov eax, dword ptr [esi + 0x64]
// 008c3def  8b885c0a0000         mov ecx, dword ptr [eax + 0xa5c]
// 008c3df5  8988580a0000         mov dword ptr [eax + 0xa58], ecx
// 008c3dfb  e9e3000000           jmp 0x8c3ee3
// 008c3e00  8b567c               mov edx, dword ptr [esi + 0x7c]
// 008c3e03  6a0c                 push 0xc
// 008c3e05  895678               mov dword ptr [esi + 0x78], edx
// 008c3e08  e853faf2ff           call 0x7f3860
// 008c3e0d  33ed                 xor ebp, ebp
// 008c3e0f  83c404               add esp, 4
// 008c3e12  3bc5                 cmp eax, ebp
// 008c3e14  740e                 je 0x8c3e24
// 008c3e16  896804               mov dword ptr [eax + 4], ebp
// 008c3e19  c700148aa000         mov dword ptr [eax], 0xa08a14
// 008c3e1f  896808               mov dword ptr [eax + 8], ebp
// 008c3e22  eb02                 jmp 0x8c3e26
// 008c3e24  33c0                 xor eax, eax
// 008c3e26  55                   push ebp
// 008c3e27  68fffeff00           push 0xfffeff
// 008c3e2c  68fffeff00           push 0xfffeff
// 008c3e31  83ec08               sub esp, 8
// 008c3e34  89467c               mov dword ptr [esi + 0x7c], eax
// 008c3e37  8bc4                 mov eax, esp
// 008c3e39  8928                 mov dword ptr [eax], ebp
// 008c3e3b  896804               mov dword ptr [eax + 4], ebp
// 008c3e3e  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c3e41  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c3e44  8b5678               mov edx, dword ptr [esi + 0x78]
// 008c3e47  89642428             mov dword ptr [esp + 0x28], esp
// 008c3e4b  50                   push eax
// 008c3e4c  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c3e4f  51                   push ecx
// 008c3e50  52                   push edx
// 008c3e51  50                   push eax
// 008c3e52  e849dcffff           call 0x8c1aa0
// 008c3e57  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008c3e5b  8b542478             mov edx, dword ptr [esp + 0x78]
// 008c3e5f  83c424               add esp, 0x24
// 008c3e62  51                   push ecx
// 008c3e63  52                   push edx
// 008c3e64  8d44242c             lea eax, [esp + 0x2c]
// 008c3e68  50                   push eax
// 008c3e69  8bce                 mov ecx, esi
// 008c3e6b  e810dcffff           call 0x8c1a80
// 008c3e70  8b4804               mov ecx, dword ptr [eax + 4]
// 008c3e73  8b10                 mov edx, dword ptr [eax]
// 008c3e75  51                   push ecx
// 008c3e76  52                   push edx
// 008c3e77  8bce                 mov ecx, esi
// 008c3e79  e802dbffff           call 0x8c1980
// 008c3e7e  8bce                 mov ecx, esi
// 008c3e80  8bd0                 mov edx, eax
// 008c3e82  e869d7ffff           call 0x8c15f0
// 008c3e87  3bc2                 cmp eax, edx
// 008c3e89  7409                 je 0x8c3e94
// 008c3e8b  8bce                 mov ecx, esi
// 008c3e8d  e85ed7ffff           call 0x8c15f0
// 008c3e92  eb05                 jmp 0x8c3e99
// 008c3e94  b8fffeff00           mov eax, 0xfffeff
// 008c3e99  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c3e9c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008c3ea0  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 008c3ea6  8b442454             mov eax, dword ptr [esp + 0x54]
// 008c3eaa  52                   push edx
// 008c3eab  c786c000000001000000 mov dword ptr [esi + 0xc0], 1
// 008c3eb5  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 008c3ebb  898ebc000000         mov dword ptr [esi + 0xbc], ecx
// 008c3ec1  ff152ccc9800         call dword ptr [0x98cc2c]
// 008c3ec7  50                   push eax
// 008c3ec8  e85dfcf2ff           call 0x7f3b2a
// 008c3ecd  8b442458             mov eax, dword ptr [esp + 0x58]
// 008c3ed1  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008c3ed5  8b542450             mov edx, dword ptr [esp + 0x50]
// 008c3ed9  50                   push eax
// 008c3eda  51                   push ecx
// 008c3edb  52                   push edx
// 008c3edc  8bce                 mov ecx, esi
// 008c3ede  e88deeffff           call 0x8c2d70
// 008c3ee3  8bce                 mov ecx, esi
// 008c3ee5  e846fff2ff           call 0x7f3e30
// 008c3eea  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008c3eee  64890d00000000       mov dword ptr fs:[0], ecx
// 008c3ef5  59                   pop ecx
// 008c3ef6  5f                   pop edi
// 008c3ef7  5e                   pop esi
// 008c3ef8  5d                   pop ebp
// 008c3ef9  5b                   pop ebx
// 008c3efa  83c438               add esp, 0x38
// 008c3efd  c20c00               ret 0xc
// 008c3f00  003e                 add byte ptr [esi], bh
// 008c3f02  8c00                 mov word ptr [eax], es
// copied from an identical function in another client (function ?OnLButtonDown@CXTPImageEditorPicture@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp