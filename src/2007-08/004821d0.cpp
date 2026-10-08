// from server: 100% by auto
// roc 2007-08 004821d0  unit: G3D::Shader  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004821d0
//
// 004821d0  83ec10               sub esp, 0x10
// 004821d3  53                   push ebx
// 004821d4  56                   push esi
// 004821d5  8bd9                 mov ebx, ecx
// 004821d7  8b4364               mov eax, dword ptr [ebx + 0x64]
// 004821da  57                   push edi
// 004821db  33f6                 xor esi, esi
// 004821dd  50                   push eax
// 004821de  8974241c             mov dword ptr [esp + 0x1c], esi
// 004821e2  ff150cda8b00         call dword ptr [0x8bda0c]
// 004821e8  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 004821eb  89433c               mov dword ptr [ebx + 0x3c], eax
// 004821ee  837b3410             cmp dword ptr [ebx + 0x34], 0x10
// 004821f2  894c2410             mov dword ptr [esp + 0x10], ecx
// 004821f6  7209                 jb 0x482201
// 004821f8  8b5320               mov edx, dword ptr [ebx + 0x20]
// 004821fb  8954240c             mov dword ptr [esp + 0xc], edx
// 004821ff  eb07                 jmp 0x482208
// 00482201  8d4b20               lea ecx, [ebx + 0x20]
// 00482204  894c240c             mov dword ptr [esp + 0xc], ecx
// 00482208  8d542410             lea edx, [esp + 0x10]
// 0048220c  52                   push edx
// 0048220d  8d4c2410             lea ecx, [esp + 0x10]
// 00482211  51                   push ecx
// 00482212  6a01                 push 1
// 00482214  50                   push eax
// 00482215  ff1510da8b00         call dword ptr [0x8bda10]
// 0048221b  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 0048221e  52                   push edx
// 0048221f  ff1514da8b00         call dword ptr [0x8bda14]
// 00482225  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00482228  8d442418             lea eax, [esp + 0x18]
// 0048222c  50                   push eax
// 0048222d  68818b0000           push 0x8b81
// 00482232  51                   push ecx
// 00482233  ff1564da8b00         call dword ptr [0x8bda64]
// 00482239  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0048223c  8d542414             lea edx, [esp + 0x14]
// 00482240  52                   push edx
// 00482241  68848b0000           push 0x8b84
// 00482246  50                   push eax
// 00482247  ff1564da8b00         call dword ptr [0x8bda64]
// 0048224d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00482251  51                   push ecx
// 00482252  ff15d0e67700         call dword ptr [0x77e6d0]
// 00482258  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 0048225b  83c404               add esp, 4
// 0048225e  8bf8                 mov edi, eax
// 00482260  8b442414             mov eax, dword ptr [esp + 0x14]
// 00482264  57                   push edi
// 00482265  8d542414             lea edx, [esp + 0x14]
// 00482269  52                   push edx
// 0048226a  50                   push eax
// 0048226b  51                   push ecx
// 0048226c  ff1558da8b00         call dword ptr [0x8bda58]
// 00482272  803f00               cmp byte ptr [edi], 0
// 00482275  747c                 je 0x4822f3
// 00482277  55                   push ebp
// 00482278  8d6b44               lea ebp, [ebx + 0x44]
// 0048227b  eb03                 jmp 0x482280
// 0048227d  8d4900               lea ecx, [ecx]
// 00482280  53                   push ebx
// 00482281  8bcd                 mov ecx, ebp
// 00482283  ff1564e67700         call dword ptr [0x77e664]
// 00482289  0fb6043e             movzx eax, byte ptr [esi + edi]
// 0048228d  3c0a                 cmp al, 0xa
// 0048228f  741c                 je 0x4822ad
// 00482291  3c0d                 cmp al, 0xd
// 00482293  7418                 je 0x4822ad
// 00482295  84c0                 test al, al
// 00482297  7414                 je 0x4822ad
// 00482299  50                   push eax
// 0048229a  8bcd                 mov ecx, ebp
// 0048229c  ff155ce57700         call dword ptr [0x77e55c]
// 004822a2  8a443e01             mov al, byte ptr [esi + edi + 1]
// 004822a6  83c601               add esi, 1
// 004822a9  3c0a                 cmp al, 0xa
// 004822ab  75e4                 jne 0x482291
// 004822ad  8a043e               mov al, byte ptr [esi + edi]
// 004822b0  3c0d                 cmp al, 0xd
// 004822b2  7524                 jne 0x4822d8
// 004822b4  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 004822b9  7512                 jne 0x4822cd
// 004822bb  6830707800           push 0x787030
// 004822c0  8bcd                 mov ecx, ebp
// 004822c2  ff1560e67700         call dword ptr [0x77e660]
// 004822c8  83c602               add esi, 2
// 004822cb  eb1f                 jmp 0x4822ec
// 004822cd  3c0d                 cmp al, 0xd
// 004822cf  7507                 jne 0x4822d8
// 004822d1  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 004822d6  7504                 jne 0x4822dc
// 004822d8  3c0a                 cmp al, 0xa
// 004822da  7510                 jne 0x4822ec
// 004822dc  6830707800           push 0x787030
// 004822e1  8bcd                 mov ecx, ebp
// 004822e3  ff1560e67700         call dword ptr [0x77e660]
// 004822e9  83c601               add esi, 1
// 004822ec  803c3e00             cmp byte ptr [esi + edi], 0
// 004822f0  758e                 jne 0x482280
// 004822f2  5d                   pop ebp
// 004822f3  57                   push edi
// 004822f4  ff15c4e67700         call dword ptr [0x77e6c4]
// 004822fa  83c404               add esp, 4
// 004822fd  837c241801           cmp dword ptr [esp + 0x18], 1
// 00482302  5f                   pop edi
// 00482303  0f94c2               sete dl
// 00482306  5e                   pop esi
// 00482307  885340               mov byte ptr [ebx + 0x40], dl
// 0048230a  5b                   pop ebx
// 0048230b  83c410               add esp, 0x10
// 0048230e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?compile@GPUShader@VertexAndPixelShader@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
