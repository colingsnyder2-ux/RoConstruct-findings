// roc 2010-06 0055ce00  unit: G3D::TextInput::WrongSymbol  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055ce00
//
// 0055ce00  33c0                 xor eax, eax
// 0055ce02  807c240427           cmp byte ptr [esp + 4], 0x27
// 0055ce07  53                   push ebx
// 0055ce08  0f95c0               setne al
// 0055ce0b  55                   push ebp
// 0055ce0c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0055ce10  56                   push esi
// 0055ce11  57                   push edi
// 0055ce12  8bf1                 mov esi, ecx
// 0055ce14  c7452400000000       mov dword ptr [ebp + 0x24], 0
// 0055ce1b  894528               mov dword ptr [ebp + 0x28], eax
// 0055ce1e  bb01000000           mov ebx, 1
// 0055ce23  8b7e24               mov edi, dword ptr [esi + 0x24]
// 0055ce26  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0055ce29  3bc7                 cmp eax, edi
// 0055ce2b  0f83f7000000         jae 0x55cf28
// 0055ce31  8b5620               mov edx, dword ptr [esi + 0x20]
// 0055ce34  8a0c02               mov cl, byte ptr [edx + eax]
// 0055ce37  40                   inc eax
// 0055ce38  89462c               mov dword ptr [esi + 0x2c], eax
// 0055ce3b  80f90a               cmp cl, 0xa
// 0055ce3e  7508                 jne 0x55ce48
// 0055ce40  015e30               add dword ptr [esi + 0x30], ebx
// 0055ce43  895e34               mov dword ptr [esi + 0x34], ebx
// 0055ce46  eb03                 jmp 0x55ce4b
// 0055ce48  015e34               add dword ptr [esi + 0x34], ebx
// 0055ce4b  0fb6c9               movzx ecx, cl
// 0055ce4e  83f9ff               cmp ecx, -1
// 0055ce51  0f84d1000000         je 0x55cf28
// 0055ce57  807e3a00             cmp byte ptr [esi + 0x3a], 0
// 0055ce5b  0f84b0000000         je 0x55cf11
// 0055ce61  83f95c               cmp ecx, 0x5c
// 0055ce64  0f85a7000000         jne 0x55cf11
// 0055ce6a  3bc7                 cmp eax, edi
// 0055ce6c  7205                 jb 0x55ce73
// 0055ce6e  83c8ff               or eax, 0xffffffff
// 0055ce71  eb1a                 jmp 0x55ce8d
// 0055ce73  8a1410               mov dl, byte ptr [eax + edx]
// 0055ce76  40                   inc eax
// 0055ce77  89462c               mov dword ptr [esi + 0x2c], eax
// 0055ce7a  80fa0a               cmp dl, 0xa
// 0055ce7d  7508                 jne 0x55ce87
// 0055ce7f  015e30               add dword ptr [esi + 0x30], ebx
// 0055ce82  895e34               mov dword ptr [esi + 0x34], ebx
// 0055ce85  eb03                 jmp 0x55ce8a
// 0055ce87  015e34               add dword ptr [esi + 0x34], ebx
// 0055ce8a  0fb6c2               movzx eax, dl
// 0055ce8d  8d48de               lea ecx, [eax - 0x22]
// 0055ce90  83f952               cmp ecx, 0x52
// 0055ce93  774a                 ja 0x55cedf
// 0055ce95  0fb68948cf5500       movzx ecx, byte ptr [ecx + 0x55cf48]
// 0055ce9c  ff248d30cf5500       jmp dword ptr [ecx*4 + 0x55cf30]
// 0055cea3  6a0d                 push 0xd
// 0055cea5  8bcd                 mov ecx, ebp
// 0055cea7  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055cead  e971ffffff           jmp 0x55ce23
// 0055ceb2  6a0a                 push 0xa
// 0055ceb4  8bcd                 mov ecx, ebp
// 0055ceb6  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055cebc  e962ffffff           jmp 0x55ce23
// 0055cec1  6a09                 push 9
// 0055cec3  8bcd                 mov ecx, ebp
// 0055cec5  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055cecb  e953ffffff           jmp 0x55ce23
// 0055ced0  6a00                 push 0
// 0055ced2  8bcd                 mov ecx, ebp
// 0055ced4  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055ceda  e944ffffff           jmp 0x55ce23
// 0055cedf  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 0055cee2  0fbed1               movsx edx, cl
// 0055cee5  3bc2                 cmp eax, edx
// 0055cee7  7504                 jne 0x55ceed
// 0055cee9  84c9                 test cl, cl
// 0055ceeb  7516                 jne 0x55cf03
// 0055ceed  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 0055cef0  0fbed1               movsx edx, cl
// 0055cef3  3bc2                 cmp eax, edx
// 0055cef5  0f8528ffffff         jne 0x55ce23
// 0055cefb  84c9                 test cl, cl
// 0055cefd  0f8420ffffff         je 0x55ce23
// 0055cf03  50                   push eax
// 0055cf04  8bcd                 mov ecx, ebp
// 0055cf06  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055cf0c  e912ffffff           jmp 0x55ce23
// 0055cf11  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 0055cf16  3bc8                 cmp ecx, eax
// 0055cf18  740e                 je 0x55cf28
// 0055cf1a  51                   push ecx
// 0055cf1b  8bcd                 mov ecx, ebp
// 0055cf1d  ff15eca69e00         call dword ptr [0x9ea6ec]
// 0055cf23  e9fbfeffff           jmp 0x55ce23
// 0055cf28  5f                   pop edi
// 0055cf29  5e                   pop esi
// 0055cf2a  5d                   pop ebp
// 0055cf2b  5b                   pop ebx
// 0055cf2c  c20800               ret 8
// 0055cf2f  90                   nop 
// 0055cf30  03cf                 add ecx, edi
// 0055cf32  55                   push ebp
// 0055cf33  00d0                 add al, dl
// 0055cf35  ce                   into 
// 0055cf36  55                   push ebp
// 0055cf37  00b2ce5500a3         add byte ptr [edx - 0x5cffaa32], dh
// 0055cf3d  ce                   into 
// 0055cf3e  55                   push ebp
// 0055cf3f  00c1                 add cl, al
// 0055cf41  ce                   into 
// 0055cf42  55                   push ebp
// 0055cf43  00df                 add bh, bl
// 0055cf45  ce                   into 
// 0055cf46  55                   push ebp
// 0055cf47  0000                 add byte ptr [eax], al
// 0055cf49  0505050500           add eax, 0x50505
// 0055cf4e  0505050505           add eax, 0x5050505
// 0055cf53  0505050105           add eax, 0x5010505
// 0055cf58  0505050505           add eax, 0x5050505
// 0055cf5d  0505050505           add eax, 0x5050505
// 0055cf62  0505050505           add eax, 0x5050505
// 0055cf67  0505050505           add eax, 0x5050505
// 0055cf6c  0505050505           add eax, 0x5050505
// 0055cf71  0505050505           add eax, 0x5050505
// 0055cf76  0505050505           add eax, 0x5050505
// 0055cf7b  0505050505           add eax, 0x5050505
// 0055cf80  0505000505           add eax, 0x5050005
// 0055cf85  0505050505           add eax, 0x5050505
// 0055cf8a  0505050505           add eax, 0x5050505
// 0055cf8f  0505050505           add eax, 0x5050505
// 0055cf94  020505050305         add al, byte ptr [0x5030505]
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?parseQuotedString@TextInput@G3D@@AAEXEAAVToken@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
