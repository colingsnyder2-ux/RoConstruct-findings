// roc 2009-12 005fb030  unit: G3D::TextInput::WrongSymbol  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fb030
//
// 005fb030  33c0                 xor eax, eax
// 005fb032  807c240427           cmp byte ptr [esp + 4], 0x27
// 005fb037  53                   push ebx
// 005fb038  0f95c0               setne al
// 005fb03b  55                   push ebp
// 005fb03c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005fb040  56                   push esi
// 005fb041  57                   push edi
// 005fb042  8bf1                 mov esi, ecx
// 005fb044  c7452400000000       mov dword ptr [ebp + 0x24], 0
// 005fb04b  894528               mov dword ptr [ebp + 0x28], eax
// 005fb04e  bb01000000           mov ebx, 1
// 005fb053  8b7e24               mov edi, dword ptr [esi + 0x24]
// 005fb056  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb059  3bc7                 cmp eax, edi
// 005fb05b  0f83f7000000         jae 0x5fb158
// 005fb061  8b5620               mov edx, dword ptr [esi + 0x20]
// 005fb064  8a0c02               mov cl, byte ptr [edx + eax]
// 005fb067  40                   inc eax
// 005fb068  89462c               mov dword ptr [esi + 0x2c], eax
// 005fb06b  80f90a               cmp cl, 0xa
// 005fb06e  7508                 jne 0x5fb078
// 005fb070  015e30               add dword ptr [esi + 0x30], ebx
// 005fb073  895e34               mov dword ptr [esi + 0x34], ebx
// 005fb076  eb03                 jmp 0x5fb07b
// 005fb078  015e34               add dword ptr [esi + 0x34], ebx
// 005fb07b  0fb6c9               movzx ecx, cl
// 005fb07e  83f9ff               cmp ecx, -1
// 005fb081  0f84d1000000         je 0x5fb158
// 005fb087  807e3a00             cmp byte ptr [esi + 0x3a], 0
// 005fb08b  0f84b0000000         je 0x5fb141
// 005fb091  83f95c               cmp ecx, 0x5c
// 005fb094  0f85a7000000         jne 0x5fb141
// 005fb09a  3bc7                 cmp eax, edi
// 005fb09c  7205                 jb 0x5fb0a3
// 005fb09e  83c8ff               or eax, 0xffffffff
// 005fb0a1  eb1a                 jmp 0x5fb0bd
// 005fb0a3  8a1410               mov dl, byte ptr [eax + edx]
// 005fb0a6  40                   inc eax
// 005fb0a7  89462c               mov dword ptr [esi + 0x2c], eax
// 005fb0aa  80fa0a               cmp dl, 0xa
// 005fb0ad  7508                 jne 0x5fb0b7
// 005fb0af  015e30               add dword ptr [esi + 0x30], ebx
// 005fb0b2  895e34               mov dword ptr [esi + 0x34], ebx
// 005fb0b5  eb03                 jmp 0x5fb0ba
// 005fb0b7  015e34               add dword ptr [esi + 0x34], ebx
// 005fb0ba  0fb6c2               movzx eax, dl
// 005fb0bd  8d48de               lea ecx, [eax - 0x22]
// 005fb0c0  83f952               cmp ecx, 0x52
// 005fb0c3  774a                 ja 0x5fb10f
// 005fb0c5  0fb68978b15f00       movzx ecx, byte ptr [ecx + 0x5fb178]
// 005fb0cc  ff248d60b15f00       jmp dword ptr [ecx*4 + 0x5fb160]
// 005fb0d3  6a0d                 push 0xd
// 005fb0d5  8bcd                 mov ecx, ebp
// 005fb0d7  ff154cb59800         call dword ptr [0x98b54c]
// 005fb0dd  e971ffffff           jmp 0x5fb053
// 005fb0e2  6a0a                 push 0xa
// 005fb0e4  8bcd                 mov ecx, ebp
// 005fb0e6  ff154cb59800         call dword ptr [0x98b54c]
// 005fb0ec  e962ffffff           jmp 0x5fb053
// 005fb0f1  6a09                 push 9
// 005fb0f3  8bcd                 mov ecx, ebp
// 005fb0f5  ff154cb59800         call dword ptr [0x98b54c]
// 005fb0fb  e953ffffff           jmp 0x5fb053
// 005fb100  6a00                 push 0
// 005fb102  8bcd                 mov ecx, ebp
// 005fb104  ff154cb59800         call dword ptr [0x98b54c]
// 005fb10a  e944ffffff           jmp 0x5fb053
// 005fb10f  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 005fb112  0fbed1               movsx edx, cl
// 005fb115  3bc2                 cmp eax, edx
// 005fb117  7504                 jne 0x5fb11d
// 005fb119  84c9                 test cl, cl
// 005fb11b  7516                 jne 0x5fb133
// 005fb11d  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 005fb120  0fbed1               movsx edx, cl
// 005fb123  3bc2                 cmp eax, edx
// 005fb125  0f8528ffffff         jne 0x5fb053
// 005fb12b  84c9                 test cl, cl
// 005fb12d  0f8420ffffff         je 0x5fb053
// 005fb133  50                   push eax
// 005fb134  8bcd                 mov ecx, ebp
// 005fb136  ff154cb59800         call dword ptr [0x98b54c]
// 005fb13c  e912ffffff           jmp 0x5fb053
// 005fb141  0fb6442414           movzx eax, byte ptr [esp + 0x14]
// 005fb146  3bc8                 cmp ecx, eax
// 005fb148  740e                 je 0x5fb158
// 005fb14a  51                   push ecx
// 005fb14b  8bcd                 mov ecx, ebp
// 005fb14d  ff154cb59800         call dword ptr [0x98b54c]
// 005fb153  e9fbfeffff           jmp 0x5fb053
// 005fb158  5f                   pop edi
// 005fb159  5e                   pop esi
// 005fb15a  5d                   pop ebp
// 005fb15b  5b                   pop ebx
// 005fb15c  c20800               ret 8
// 005fb15f  90                   nop 
// 005fb160  33b15f0000b1         xor esi, dword ptr [ecx - 0x4effffa1]
// 005fb166  5f                   pop edi
// 005fb167  00e2                 add dl, ah
// 005fb169  b05f                 mov al, 0x5f
// 005fb16b  00d3                 add bl, dl
// 005fb16d  b05f                 mov al, 0x5f
// 005fb16f  00f1                 add cl, dh
// 005fb171  b05f                 mov al, 0x5f
// 005fb173  000f                 add byte ptr [edi], cl
// 005fb175  b15f                 mov cl, 0x5f
// 005fb177  0000                 add byte ptr [eax], al
// 005fb179  0505050500           add eax, 0x50505
// 005fb17e  0505050505           add eax, 0x5050505
// 005fb183  0505050105           add eax, 0x5010505
// 005fb188  0505050505           add eax, 0x5050505
// 005fb18d  0505050505           add eax, 0x5050505
// 005fb192  0505050505           add eax, 0x5050505
// 005fb197  0505050505           add eax, 0x5050505
// 005fb19c  0505050505           add eax, 0x5050505
// 005fb1a1  0505050505           add eax, 0x5050505
// 005fb1a6  0505050505           add eax, 0x5050505
// 005fb1ab  0505050505           add eax, 0x5050505
// 005fb1b0  0505000505           add eax, 0x5050005
// 005fb1b5  0505050505           add eax, 0x5050505
// 005fb1ba  0505050505           add eax, 0x5050505
// 005fb1bf  0505050505           add eax, 0x5050505
// 005fb1c4  020505050305         add al, byte ptr [0x5030505]
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?parseQuotedString@TextInput@G3D@@AAEXEAAVToken@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
