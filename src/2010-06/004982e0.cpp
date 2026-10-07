// roc 2010-06 004982e0  unit: G3D::Shader  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004982e0
//
// 004982e0  83ec10               sub esp, 0x10
// 004982e3  53                   push ebx
// 004982e4  56                   push esi
// 004982e5  8bd9                 mov ebx, ecx
// 004982e7  8b4364               mov eax, dword ptr [ebx + 0x64]
// 004982ea  57                   push edi
// 004982eb  33f6                 xor esi, esi
// 004982ed  50                   push eax
// 004982ee  8974241c             mov dword ptr [esp + 0x1c], esi
// 004982f2  ff15c03ac000         call dword ptr [0xc03ac0]
// 004982f8  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 004982fb  89433c               mov dword ptr [ebx + 0x3c], eax
// 004982fe  837b3410             cmp dword ptr [ebx + 0x34], 0x10
// 00498302  894c2410             mov dword ptr [esp + 0x10], ecx
// 00498306  7209                 jb 0x498311
// 00498308  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0049830b  8954240c             mov dword ptr [esp + 0xc], edx
// 0049830f  eb07                 jmp 0x498318
// 00498311  8d4b20               lea ecx, [ebx + 0x20]
// 00498314  894c240c             mov dword ptr [esp + 0xc], ecx
// 00498318  8d542410             lea edx, [esp + 0x10]
// 0049831c  52                   push edx
// 0049831d  8d4c2410             lea ecx, [esp + 0x10]
// 00498321  51                   push ecx
// 00498322  6a01                 push 1
// 00498324  50                   push eax
// 00498325  ff15c43ac000         call dword ptr [0xc03ac4]
// 0049832b  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 0049832e  52                   push edx
// 0049832f  ff15c83ac000         call dword ptr [0xc03ac8]
// 00498335  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 00498338  8d442418             lea eax, [esp + 0x18]
// 0049833c  50                   push eax
// 0049833d  68818b0000           push 0x8b81
// 00498342  51                   push ecx
// 00498343  ff15183bc000         call dword ptr [0xc03b18]
// 00498349  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0049834c  8d542414             lea edx, [esp + 0x14]
// 00498350  52                   push edx
// 00498351  68848b0000           push 0x8b84
// 00498356  50                   push eax
// 00498357  ff15183bc000         call dword ptr [0xc03b18]
// 0049835d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00498361  51                   push ecx
// 00498362  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 00498368  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 0049836b  83c404               add esp, 4
// 0049836e  8bf8                 mov edi, eax
// 00498370  8b442414             mov eax, dword ptr [esp + 0x14]
// 00498374  57                   push edi
// 00498375  8d542414             lea edx, [esp + 0x14]
// 00498379  52                   push edx
// 0049837a  50                   push eax
// 0049837b  51                   push ecx
// 0049837c  ff150c3bc000         call dword ptr [0xc03b0c]
// 00498382  803f00               cmp byte ptr [edi], 0
// 00498385  7478                 je 0x4983ff
// 00498387  55                   push ebp
// 00498388  8d6b44               lea ebp, [ebx + 0x44]
// 0049838b  eb03                 jmp 0x498390
// 0049838d  8d4900               lea ecx, [ecx]
// 00498390  53                   push ebx
// 00498391  8bcd                 mov ecx, ebp
// 00498393  ff1518a49e00         call dword ptr [0x9ea418]
// 00498399  0fb6043e             movzx eax, byte ptr [esi + edi]
// 0049839d  3c0a                 cmp al, 0xa
// 0049839f  741a                 je 0x4983bb
// 004983a1  3c0d                 cmp al, 0xd
// 004983a3  7416                 je 0x4983bb
// 004983a5  84c0                 test al, al
// 004983a7  7412                 je 0x4983bb
// 004983a9  50                   push eax
// 004983aa  8bcd                 mov ecx, ebp
// 004983ac  ff15eca69e00         call dword ptr [0x9ea6ec]
// 004983b2  8a443e01             mov al, byte ptr [esi + edi + 1]
// 004983b6  46                   inc esi
// 004983b7  3c0a                 cmp al, 0xa
// 004983b9  75e6                 jne 0x4983a1
// 004983bb  8a043e               mov al, byte ptr [esi + edi]
// 004983be  3c0d                 cmp al, 0xd
// 004983c0  7524                 jne 0x4983e6
// 004983c2  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 004983c7  7512                 jne 0x4983db
// 004983c9  68d008a000           push 0xa008d0
// 004983ce  8bcd                 mov ecx, ebp
// 004983d0  ff1520a49e00         call dword ptr [0x9ea420]
// 004983d6  83c602               add esi, 2
// 004983d9  eb1d                 jmp 0x4983f8
// 004983db  3c0d                 cmp al, 0xd
// 004983dd  7507                 jne 0x4983e6
// 004983df  807c3e010a           cmp byte ptr [esi + edi + 1], 0xa
// 004983e4  7504                 jne 0x4983ea
// 004983e6  3c0a                 cmp al, 0xa
// 004983e8  750e                 jne 0x4983f8
// 004983ea  68d008a000           push 0xa008d0
// 004983ef  8bcd                 mov ecx, ebp
// 004983f1  ff1520a49e00         call dword ptr [0x9ea420]
// 004983f7  46                   inc esi
// 004983f8  803c3e00             cmp byte ptr [esi + edi], 0
// 004983fc  7592                 jne 0x498390
// 004983fe  5d                   pop ebp
// 004983ff  57                   push edi
// 00498400  ff1508aa9e00         call dword ptr [0x9eaa08]
// 00498406  83c404               add esp, 4
// 00498409  837c241801           cmp dword ptr [esp + 0x18], 1
// 0049840e  5f                   pop edi
// 0049840f  0f94c2               sete dl
// 00498412  5e                   pop esi
// 00498413  885340               mov byte ptr [ebx + 0x40], dl
// 00498416  5b                   pop ebx
// 00498417  83c410               add esp, 0x10
// 0049841a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?compile@GPUShader@VertexAndPixelShader@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
