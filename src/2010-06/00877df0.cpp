// roc 2010-06 00877df0  unit: CXTPImageEditorPicture  size: 712 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00877df0
//
// 00877df0  6aff                 push -1
// 00877df2  68d8a19b00           push 0x9ba1d8
// 00877df7  64a100000000         mov eax, dword ptr fs:[0]
// 00877dfd  50                   push eax
// 00877dfe  83ec2c               sub esp, 0x2c
// 00877e01  53                   push ebx
// 00877e02  55                   push ebp
// 00877e03  56                   push esi
// 00877e04  57                   push edi
// 00877e05  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00877e0a  33c4                 xor eax, esp
// 00877e0c  50                   push eax
// 00877e0d  8d442440             lea eax, [esp + 0x40]
// 00877e11  64a300000000         mov dword ptr fs:[0], eax
// 00877e17  8bf1                 mov esi, ecx
// 00877e19  e872d5ffff           call 0x875390
// 00877e1e  83f805               cmp eax, 5
// 00877e21  0f875c020000         ja 0x878083
// 00877e27  ff2485a0808700       jmp dword ptr [eax*4 + 0x8780a0]
// 00877e2e  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00877e31  6a0c                 push 0xc
// 00877e33  894678               mov dword ptr [esi + 0x78], eax
// 00877e36  e865fbf2ff           call 0x7a79a0
// 00877e3b  33ed                 xor ebp, ebp
// 00877e3d  83c404               add esp, 4
// 00877e40  3bc5                 cmp eax, ebp
// 00877e42  740e                 je 0x877e52
// 00877e44  896804               mov dword ptr [eax + 4], ebp
// 00877e47  c700fccca600         mov dword ptr [eax], 0xa6ccfc
// 00877e4d  896808               mov dword ptr [eax + 8], ebp
// 00877e50  eb02                 jmp 0x877e54
// 00877e52  33c0                 xor eax, eax
// 00877e54  55                   push ebp
// 00877e55  68fffeff00           push 0xfffeff
// 00877e5a  68fffeff00           push 0xfffeff
// 00877e5f  83ec08               sub esp, 8
// 00877e62  89467c               mov dword ptr [esi + 0x7c], eax
// 00877e65  8bc4                 mov eax, esp
// 00877e67  8928                 mov dword ptr [eax], ebp
// 00877e69  896804               mov dword ptr [eax + 4], ebp
// 00877e6c  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00877e6f  8b5654               mov edx, dword ptr [esi + 0x54]
// 00877e72  8b4678               mov eax, dword ptr [esi + 0x78]
// 00877e75  89642464             mov dword ptr [esp + 0x64], esp
// 00877e79  51                   push ecx
// 00877e7a  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00877e7d  52                   push edx
// 00877e7e  50                   push eax
// 00877e7f  51                   push ecx
// 00877e80  e83bdeffff           call 0x875cc0
// 00877e85  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00877e88  83c424               add esp, 0x24
// 00877e8b  3bc5                 cmp eax, ebp
// 00877e8d  7504                 jne 0x877e93
// 00877e8f  33c0                 xor eax, eax
// 00877e91  eb03                 jmp 0x877e96
// 00877e93  8b4004               mov eax, dword ptr [eax + 4]
// 00877e96  8b566c               mov edx, dword ptr [esi + 0x6c]
// 00877e99  50                   push eax
// 00877e9a  52                   push edx
// 00877e9b  e894501000           call 0x97cf34
// 00877ea0  89442450             mov dword ptr [esp + 0x50], eax
// 00877ea4  8d4668               lea eax, [esi + 0x68]
// 00877ea7  3bc5                 cmp eax, ebp
// 00877ea9  7504                 jne 0x877eaf
// 00877eab  33d2                 xor edx, edx
// 00877ead  eb03                 jmp 0x877eb2
// 00877eaf  8b5004               mov edx, dword ptr [eax + 4]
// 00877eb2  8bce                 mov ecx, esi
// 00877eb4  e857d9ffff           call 0x875810
// 00877eb9  50                   push eax
// 00877eba  52                   push edx
// 00877ebb  8d4c2434             lea ecx, [esp + 0x34]
// 00877ebf  e83c79f8ff           call 0x7ff800
// 00877ec4  8b442458             mov eax, dword ptr [esp + 0x58]
// 00877ec8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00877ecc  50                   push eax
// 00877ecd  51                   push ecx
// 00877ece  8d54241c             lea edx, [esp + 0x1c]
// 00877ed2  52                   push edx
// 00877ed3  8bce                 mov ecx, esi
// 00877ed5  896c2454             mov dword ptr [esp + 0x54], ebp
// 00877ed9  e8c2ddffff           call 0x875ca0
// 00877ede  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00877ee2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00877ee6  57                   push edi
// 00877ee7  53                   push ebx
// 00877ee8  e8b3dcffff           call 0x875ba0
// 00877eed  6a01                 push 1
// 00877eef  50                   push eax
// 00877ef0  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00877ef3  57                   push edi
// 00877ef4  53                   push ebx
// 00877ef5  50                   push eax
// 00877ef6  ff15eca09e00         call dword ptr [0x9ea0ec]
// 00877efc  8b442450             mov eax, dword ptr [esp + 0x50]
// 00877f00  3bc5                 cmp eax, ebp
// 00877f02  7504                 jne 0x877f08
// 00877f04  33c0                 xor eax, eax
// 00877f06  eb03                 jmp 0x877f0b
// 00877f08  8b4004               mov eax, dword ptr [eax + 4]
// 00877f0b  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00877f0e  50                   push eax
// 00877f0f  51                   push ecx
// 00877f10  e81f501000           call 0x97cf34
// 00877f15  8b4678               mov eax, dword ptr [esi + 0x78]
// 00877f18  3bc5                 cmp eax, ebp
// 00877f1a  7411                 je 0x877f2d
// 00877f1c  396808               cmp dword ptr [eax + 8], ebp
// 00877f1f  740c                 je 0x877f2d
// 00877f21  8b567c               mov edx, dword ptr [esi + 0x7c]
// 00877f24  50                   push eax
// 00877f25  52                   push edx
// 00877f26  8bce                 mov ecx, esi
// 00877f28  e813dfffff           call 0x875e40
// 00877f2d  8bce                 mov ecx, esi
// 00877f2f  e83cfeffff           call 0x877d70
// 00877f34  8d4c242c             lea ecx, [esp + 0x2c]
// 00877f38  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00877f40  e84b79f8ff           call 0x7ff890
// 00877f45  e939010000           jmp 0x878083
// 00877f4a  8b442458             mov eax, dword ptr [esp + 0x58]
// 00877f4e  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00877f52  50                   push eax
// 00877f53  51                   push ecx
// 00877f54  8d542424             lea edx, [esp + 0x24]
// 00877f58  52                   push edx
// 00877f59  8bce                 mov ecx, esi
// 00877f5b  e840ddffff           call 0x875ca0
// 00877f60  8b4804               mov ecx, dword ptr [eax + 4]
// 00877f63  8b10                 mov edx, dword ptr [eax]
// 00877f65  51                   push ecx
// 00877f66  52                   push edx
// 00877f67  8bce                 mov ecx, esi
// 00877f69  e832dcffff           call 0x875ba0
// 00877f6e  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00877f71  50                   push eax
// 00877f72  81c164080000         add ecx, 0x864
// 00877f78  e8d3e1ffff           call 0x876150
// 00877f7d  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00877f80  8d8164080000         lea eax, [ecx + 0x864]
// 00877f86  50                   push eax
// 00877f87  e894eaffff           call 0x876a20
// 00877f8c  8b4664               mov eax, dword ptr [esi + 0x64]
// 00877f8f  8b885c0a0000         mov ecx, dword ptr [eax + 0xa5c]
// 00877f95  8988580a0000         mov dword ptr [eax + 0xa58], ecx
// 00877f9b  e9e3000000           jmp 0x878083
// 00877fa0  8b567c               mov edx, dword ptr [esi + 0x7c]
// 00877fa3  6a0c                 push 0xc
// 00877fa5  895678               mov dword ptr [esi + 0x78], edx
// 00877fa8  e8f3f9f2ff           call 0x7a79a0
// 00877fad  33ed                 xor ebp, ebp
// 00877faf  83c404               add esp, 4
// 00877fb2  3bc5                 cmp eax, ebp
// 00877fb4  740e                 je 0x877fc4
// 00877fb6  896804               mov dword ptr [eax + 4], ebp
// 00877fb9  c700fccca600         mov dword ptr [eax], 0xa6ccfc
// 00877fbf  896808               mov dword ptr [eax + 8], ebp
// 00877fc2  eb02                 jmp 0x877fc6
// 00877fc4  33c0                 xor eax, eax
// 00877fc6  55                   push ebp
// 00877fc7  68fffeff00           push 0xfffeff
// 00877fcc  68fffeff00           push 0xfffeff
// 00877fd1  83ec08               sub esp, 8
// 00877fd4  89467c               mov dword ptr [esi + 0x7c], eax
// 00877fd7  8bc4                 mov eax, esp
// 00877fd9  8928                 mov dword ptr [eax], ebp
// 00877fdb  896804               mov dword ptr [eax + 4], ebp
// 00877fde  8b4658               mov eax, dword ptr [esi + 0x58]
// 00877fe1  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00877fe4  8b5678               mov edx, dword ptr [esi + 0x78]
// 00877fe7  89642428             mov dword ptr [esp + 0x28], esp
// 00877feb  50                   push eax
// 00877fec  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00877fef  51                   push ecx
// 00877ff0  52                   push edx
// 00877ff1  50                   push eax
// 00877ff2  e8c9dcffff           call 0x875cc0
// 00877ff7  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00877ffb  8b542478             mov edx, dword ptr [esp + 0x78]
// 00877fff  83c424               add esp, 0x24
// 00878002  51                   push ecx
// 00878003  52                   push edx
// 00878004  8d44242c             lea eax, [esp + 0x2c]
// 00878008  50                   push eax
// 00878009  8bce                 mov ecx, esi
// 0087800b  e890dcffff           call 0x875ca0
// 00878010  8b4804               mov ecx, dword ptr [eax + 4]
// 00878013  8b10                 mov edx, dword ptr [eax]
// 00878015  51                   push ecx
// 00878016  52                   push edx
// 00878017  8bce                 mov ecx, esi
// 00878019  e882dbffff           call 0x875ba0
// 0087801e  8bce                 mov ecx, esi
// 00878020  8bd0                 mov edx, eax
// 00878022  e8e9d7ffff           call 0x875810
// 00878027  3bc2                 cmp eax, edx
// 00878029  7409                 je 0x878034
// 0087802b  8bce                 mov ecx, esi
// 0087802d  e8ded7ffff           call 0x875810
// 00878032  eb05                 jmp 0x878039
// 00878034  b8fffeff00           mov eax, 0xfffeff
// 00878039  8b5620               mov edx, dword ptr [esi + 0x20]
// 0087803c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00878040  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 00878046  8b442454             mov eax, dword ptr [esp + 0x54]
// 0087804a  52                   push edx
// 0087804b  c786c000000001000000 mov dword ptr [esi + 0xc0], 1
// 00878055  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 0087805b  898ebc000000         mov dword ptr [esi + 0xbc], ecx
// 00878061  ff1580bc9e00         call dword ptr [0x9ebc80]
// 00878067  50                   push eax
// 00878068  e8fdfbf2ff           call 0x7a7c6a
// 0087806d  8b442458             mov eax, dword ptr [esp + 0x58]
// 00878071  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00878075  8b542450             mov edx, dword ptr [esp + 0x50]
// 00878079  50                   push eax
// 0087807a  51                   push ecx
// 0087807b  52                   push edx
// 0087807c  8bce                 mov ecx, esi
// 0087807e  e8bdeeffff           call 0x876f40
// 00878083  8bce                 mov ecx, esi
// 00878085  e8e6fef2ff           call 0x7a7f70
// 0087808a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087808e  64890d00000000       mov dword ptr fs:[0], ecx
// 00878095  59                   pop ecx
// 00878096  5f                   pop edi
// 00878097  5e                   pop esi
// 00878098  5d                   pop ebp
// 00878099  5b                   pop ebx
// 0087809a  83c438               add esp, 0x38
// 0087809d  c20c00               ret 0xc
// 008780a0  a07f87002e           mov al, byte ptr [0x2e00877f]
// 008780a5  7e87                 jle 0x87802e
// 008780a7  004a7f               add byte ptr [edx + 0x7f], cl
// 008780aa  8700                 xchg dword ptr [eax], eax
// 008780ac  a07f8700a0           mov al, byte ptr [0xa000877f]
// 008780b1  7f87                 jg 0x87803a
// copied from an identical function in another client (function ?OnLButtonDown@CXTPImageEditorPicture@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp