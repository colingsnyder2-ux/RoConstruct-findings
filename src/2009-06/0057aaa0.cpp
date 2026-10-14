// roc 2009-06 0057aaa0  unit: G3D::TextInput::WrongSymbol  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057aaa0
//
// 0057aaa0  33c0                 xor eax, eax
// 0057aaa2  807c240427           cmp byte ptr [esp + 4], 0x27
// 0057aaa7  53                   push ebx
// 0057aaa8  0f95c0               setne al
// 0057aaab  55                   push ebp
// 0057aaac  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057aab0  56                   push esi
// 0057aab1  57                   push edi
// 0057aab2  8bf1                 mov esi, ecx
// 0057aab4  c7452400000000       mov dword ptr [ebp + 0x24], 0
// 0057aabb  894528               mov dword ptr [ebp + 0x28], eax
// 0057aabe  bb01000000           mov ebx, 1
// 0057aac3  8b7e24               mov edi, dword ptr [esi + 0x24]
// 0057aac6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057aac9  3bc7                 cmp eax, edi
// 0057aacb  0f83f7000000         jae 0x57abc8
// 0057aad1  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057aad4  8a0c02               mov cl, byte ptr [edx + eax]
// 0057aad7  40                   inc eax
// 0057aad8  89462c               mov dword ptr [esi + 0x2c], eax
// 0057aadb  80f90a               cmp cl, 0xa
// 0057aade  7508                 jne 0x57aae8
// 0057aae0  015e30               add dword ptr [esi + 0x30], ebx
// 0057aae3  895e34               mov dword ptr [esi + 0x34], ebx
// 0057aae6  eb03                 jmp 0x57aaeb
// 0057aae8  015e34               add dword ptr [esi + 0x34], ebx
// 0057aaeb  0fb6c9               movzx ecx, cl
// 0057aaee  83f9ff               cmp ecx, -1
// 0057aaf1  0f84d1000000         je 0x57abc8
// 0057aaf7  807e3a00             cmp byte ptr [esi + 0x3a], 0
// 0057aafb  0f84b0000000         je 0x57abb1
// 0057ab01  83f95c               cmp ecx, 0x5c
// 0057ab04  0f85a7000000         jne 0x57abb1
// 0057ab0a  3bc7                 cmp eax, edi
// 0057ab0c  7205                 jb 0x57ab13
// 0057ab0e  83c8ff               or eax, 0xffffffff
// 0057ab11  eb1a                 jmp 0x57ab2d
// 0057ab13  8a1410               mov dl, byte ptr [eax + edx]
// 0057ab16  40                   inc eax
// 0057ab17  89462c               mov dword ptr [esi + 0x2c], eax
// 0057ab1a  80fa0a               cmp dl, 0xa
// 0057ab1d  7508                 jne 0x57ab27
// 0057ab1f  015e30               add dword ptr [esi + 0x30], ebx
// 0057ab22  895e34               mov dword ptr [esi + 0x34], ebx
// 0057ab25  eb03                 jmp 0x57ab2a
// 0057ab27  015e34               add dword ptr [esi + 0x34], ebx
// 0057ab2a  0fb6c2               movzx eax, dl
// 0057ab2d  8d48de               lea ecx, [eax - 0x22]
// 0057ab30  83f952               cmp ecx, 0x52
// 0057ab33  774a                 ja 0x57ab7f
// 0057ab35  0fb689e8ab5700       movzx ecx, byte ptr [ecx + 0x57abe8]
// 0057ab3c  ff248dd0ab5700       jmp dword ptr [ecx*4 + 0x57abd0]
// 0057ab43  6a0d                 push 0xd
// 0057ab45  8bcd                 mov ecx, ebp
// 0057ab47  ff1558e58900         call dword ptr [0x89e558]
// 0057ab4d  e971ffffff           jmp 0x57aac3
// 0057ab52  6a0a                 push 0xa
// 0057ab54  8bcd                 mov ecx, ebp
// 0057ab56  ff1558e58900         call dword ptr [0x89e558]
// 0057ab5c  e962ffffff           jmp 0x57aac3
// 0057ab61  6a09                 push 9
// 0057ab63  8bcd                 mov ecx, ebp
// 0057ab65  ff1558e58900         call dword ptr [0x89e558]
// 0057ab6b  e953ffffff           jmp 0x57aac3
// 0057ab70  6a00                 push 0
// 0057ab72  8bcd                 mov ecx, ebp
// 0057ab74  ff1558e58900         call dword ptr [0x89e558]
// 0057ab7a  e944ffffff           jmp 0x57aac3
// 0057ab7f  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 0057ab82  0fbed1               movsx edx, cl
// 0057ab85  3bc2                 cmp eax, edx
// 0057ab87  7504                 jne 0x57ab8d
// 0057ab89  84c9                 test cl, cl
// 0057ab8b  7516                 jne 0x57aba3
// 0057ab8d  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 0057ab90  0fbed1               movsx edx, cl
// 0057ab93  3bc2                 cmp eax, edx
// 0057ab95  0f8528ffffff         jne 0x57aac3
// 0057ab9b  84c9                 test cl, cl
// 0057ab9d  0f8420ffffff         je 0x57aac3
// 0057aba3  50                   push eax
// 0057aba4  8bcd                 mov ecx, ebp
// 0057aba6  ff1558e58900         call dword ptr [0x89e558]
// 0057abac  e912ffffff           jmp 0x57aac3
// 0057abb1  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 0057abb6  3bc8                 cmp ecx, eax
// 0057abb8  740e                 je 0x57abc8
// 0057abba  51                   push ecx
// 0057abbb  8bcd                 mov ecx, ebp
// 0057abbd  ff1558e58900         call dword ptr [0x89e558]
// 0057abc3  e9fbfeffff           jmp 0x57aac3
// 0057abc8  5f                   pop edi
// 0057abc9  5e                   pop esi
// 0057abca  5d                   pop ebp
// 0057abcb  5b                   pop ebx
// 0057abcc  c20800               ret 8
// 0057abcf  90                   nop 
// 0057abd0  a3ab570070           mov dword ptr [0x700057ab], eax
// 0057abd5  ab                   stosd dword ptr es:[edi], eax
// 0057abd6  57                   push edi
// 0057abd7  0052ab               add byte ptr [edx - 0x55], dl
// 0057abda  57                   push edi
// 0057abdb  0043ab               add byte ptr [ebx - 0x55], al
// 0057abde  57                   push edi
// 0057abdf  0061ab               add byte ptr [ecx - 0x55], ah
// 0057abe2  57                   push edi
// 0057abe3  007fab               add byte ptr [edi - 0x55], bh
// 0057abe6  57                   push edi
// 0057abe7  0000                 add byte ptr [eax], al
// 0057abe9  0505050500           add eax, 0x50505
// 0057abee  0505050505           add eax, 0x5050505
// 0057abf3  0505050105           add eax, 0x5010505
// 0057abf8  0505050505           add eax, 0x5050505
// 0057abfd  0505050505           add eax, 0x5050505
// 0057ac02  0505050505           add eax, 0x5050505
// 0057ac07  0505050505           add eax, 0x5050505
// 0057ac0c  0505050505           add eax, 0x5050505
// 0057ac11  0505050505           add eax, 0x5050505
// 0057ac16  0505050505           add eax, 0x5050505
// 0057ac1b  0505050505           add eax, 0x5050505
// 0057ac20  0505000505           add eax, 0x5050005
// 0057ac25  0505050505           add eax, 0x5050505
// 0057ac2a  0505050505           add eax, 0x5050505
// 0057ac2f  0505050505           add eax, 0x5050505
// 0057ac34  020505050305         add al, byte ptr [0x5030505]
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?parseQuotedString@TextInput@G3D@@AAEXEAAVToken@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
