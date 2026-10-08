// roc 2009-12 004dbeb0  unit: G3D::Shader  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dbeb0
//
// 004dbeb0  83ec10               sub esp, 0x10
// 004dbeb3  53                   push ebx
// 004dbeb4  56                   push esi
// 004dbeb5  8bd9                 mov ebx, ecx
// 004dbeb7  8b4364               mov eax, dword ptr [ebx + 0x64]
// 004dbeba  57                   push edi
// 004dbebb  33f6                 xor esi, esi
// 004dbebd  50                   push eax
// 004dbebe  8974241c             mov dword ptr [esp + 0x1c], esi
// 004dbec2  ff1530dab700         call dword ptr [0xb7da30]
// 004dbec8  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 004dbecb  89433c               mov dword ptr [ebx + 0x3c], eax
// 004dbece  837b3410             cmp dword ptr [ebx + 0x34], 0x10
// 004dbed2  894c2410             mov dword ptr [esp + 0x10], ecx
// 004dbed6  7209                 jb 0x4dbee1
// 004dbed8  8b5320               mov edx, dword ptr [ebx + 0x20]
// 004dbedb  8954240c             mov dword ptr [esp + 0xc], edx
// 004dbedf  eb07                 jmp 0x4dbee8
// 004dbee1  8d4b20               lea ecx, [ebx + 0x20]
// 004dbee4  894c240c             mov dword ptr [esp + 0xc], ecx
// 004dbee8  8d542410             lea edx, [esp + 0x10]
// 004dbeec  52                   push edx
// 004dbeed  8d4c2410             lea ecx, [esp + 0x10]
// 004dbef1  51                   push ecx
// 004dbef2  6a01                 push 1
// 004dbef4  50                   push eax
// 004dbef5  ff1534dab700         call dword ptr [0xb7da34]
// 004dbefb  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 004dbefe  52                   push edx
// 004dbeff  ff1538dab700         call dword ptr [0xb7da38]
// 004dbf05  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 004dbf08  8d442418             lea eax, [esp + 0x18]
// 004dbf0c  50                   push eax
// 004dbf0d  68818b0000           push 0x8b81
// 004dbf12  51                   push ecx
// 004dbf13  ff1588dab700         call dword ptr [0xb7da88]
// 004dbf19  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 004dbf1c  8d542414             lea edx, [esp + 0x14]
// 004dbf20  52                   push edx
// 004dbf21  68848b0000           push 0x8b84
// 004dbf26  50                   push eax
// 004dbf27  ff1588dab700         call dword ptr [0xb7da88]
// 004dbf2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004dbf31  51                   push ecx
// 004dbf32  ff1578b79800         call dword ptr [0x98b778]
// 004dbf38  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 004dbf3b  83c404               add esp, 4
// 004dbf3e  8bf8                 mov edi, eax
// 004dbf40  8b442414             mov eax, dword ptr [esp + 0x14]
// 004dbf44  57                   push edi
// 004dbf45  8d542414             lea edx, [esp + 0x14]
// 004dbf49  52                   push edx
// 004dbf4a  50                   push eax
// 004dbf4b  51                   push ecx
// 004dbf4c  ff157cdab700         call dword ptr [0xb7da7c]
// 004dbf52  803f00               cmp byte ptr [edi], 0
// 004dbf55  7478                 je 0x4dbfcf
// 004dbf57  55                   push ebp
// 004dbf58  8d6b44               lea ebp, [ebx + 0x44]
// 004dbf5b  eb03                 jmp 0x4dbf60
// 004dbf5d  8d4900               lea ecx, [ecx]
// 004dbf60  53                   push ebx
// 004dbf61  8bcd                 mov ecx, ebp
// 004dbf63  ff15fcb69800         call dword ptr [0x98b6fc]
// 004dbf69  0fb6043e             movzx eax, byte ptr [esi + edi]
// 004dbf6d  3c0a                 cmp al, 0xa
// 004dbf6f  741a                 je 0x4dbf8b
// 004dbf71  3c0d                 cmp al, 0xd
// 004dbf73  7416                 je 0x4dbf8b
// 004dbf75  84c0                 test al, al
// 004dbf77  7412                 je 0x4dbf8b
// 004dbf79  50                   push eax
// 004dbf7a  8bcd                 mov ecx, ebp
// 004dbf7c  ff154cb59800         call dword ptr [0x98b54c]
// 004dbf82  8a443e01             mov al, byte ptr [esi + edi + 1]
// 004dbf86  46                   inc esi
// 004dbf87  3c0a                 cmp al, 0xa
// 004dbf89  75e6                 jne 0x4dbf71
// 004dbf8b  8a043e               mov al, byte ptr [esi + edi]
// 004dbf8e  3c0d                 cmp al, 0xd
// 004dbf90  7524                 jne 0x4dbfb6
// 004dbf92  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 004dbf97  7512                 jne 0x4dbfab
// 004dbf99  6828fd9900           push 0x99fd28
// 004dbf9e  8bcd                 mov ecx, ebp
// 004dbfa0  ff1504b79800         call dword ptr [0x98b704]
// 004dbfa6  83c602               add esi, 2
// 004dbfa9  eb1d                 jmp 0x4dbfc8
// 004dbfab  3c0d                 cmp al, 0xd
// 004dbfad  7507                 jne 0x4dbfb6
// 004dbfaf  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 004dbfb4  7504                 jne 0x4dbfba
// 004dbfb6  3c0a                 cmp al, 0xa
// 004dbfb8  750e                 jne 0x4dbfc8
// 004dbfba  6828fd9900           push 0x99fd28
// 004dbfbf  8bcd                 mov ecx, ebp
// 004dbfc1  ff1504b79800         call dword ptr [0x98b704]
// 004dbfc7  46                   inc esi
// 004dbfc8  803c3e00             cmp byte ptr [esi + edi], 0
// 004dbfcc  7592                 jne 0x4dbf60
// 004dbfce  5d                   pop ebp
// 004dbfcf  57                   push edi
// 004dbfd0  ff1540b79800         call dword ptr [0x98b740]
// 004dbfd6  83c404               add esp, 4
// 004dbfd9  837c241801           cmp dword ptr [esp + 0x18], 1
// 004dbfde  5f                   pop edi
// 004dbfdf  0f94c2               sete dl
// 004dbfe2  5e                   pop esi
// 004dbfe3  885340               mov byte ptr [ebx + 0x40], dl
// 004dbfe6  5b                   pop ebx
// 004dbfe7  83c410               add esp, 0x10
// 004dbfea  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?compile@GPUShader@VertexAndPixelShader@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
