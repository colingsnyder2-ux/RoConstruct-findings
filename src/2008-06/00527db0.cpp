// roc 2008-06 00527db0  unit: G3D::Line  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00527db0
//
// 00527db0  83ec10               sub esp, 0x10
// 00527db3  53                   push ebx
// 00527db4  55                   push ebp
// 00527db5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00527db9  56                   push esi
// 00527dba  33c0                 xor eax, eax
// 00527dbc  57                   push edi
// 00527dbd  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00527dc1  807f0408             cmp byte ptr [edi + 4], 8
// 00527dc5  8b770c               mov esi, dword ptr [edi + 0xc]
// 00527dc8  0f95c0               setne al
// 00527dcb  8d048506000000       lea eax, [eax*4 + 6]
// 00527dd2  0faff0               imul esi, eax
// 00527dd5  89442410             mov dword ptr [esp + 0x10], eax
// 00527dd9  8b07                 mov eax, dword ptr [edi]
// 00527ddb  85c0                 test eax, eax
// 00527ddd  0f848a010000         je 0x527f6d
// 00527de3  8d4c2428             lea ecx, [esp + 0x28]
// 00527de7  51                   push ecx
// 00527de8  50                   push eax
// 00527de9  55                   push ebp
// 00527dea  e891ecffff           call 0x526a80
// 00527def  8bd8                 mov ebx, eax
// 00527df1  83c40c               add esp, 0xc
// 00527df4  85db                 test ebx, ebx
// 00527df6  0f8471010000         je 0x527f6d
// 00527dfc  8d543302             lea edx, [ebx + esi + 2]
// 00527e00  52                   push edx
// 00527e01  68bc948200           push 0x8294bc
// 00527e06  55                   push ebp
// 00527e07  e814e6ffff           call 0x526420
// 00527e0c  8d7301               lea esi, [ebx + 1]
// 00527e0f  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00527e13  83c40c               add esp, 0xc
// 00527e16  85db                 test ebx, ebx
// 00527e18  7417                 je 0x527e31
// 00527e1a  85f6                 test esi, esi
// 00527e1c  7613                 jbe 0x527e31
// 00527e1e  56                   push esi
// 00527e1f  53                   push ebx
// 00527e20  55                   push ebp
// 00527e21  e85a5fffff           call 0x51dd80
// 00527e26  56                   push esi
// 00527e27  53                   push ebx
// 00527e28  55                   push ebp
// 00527e29  e8825cffff           call 0x51dab0
// 00527e2e  83c418               add esp, 0x18
// 00527e31  8d7704               lea esi, [edi + 4]
// 00527e34  85f6                 test esi, esi
// 00527e36  7415                 je 0x527e4d
// 00527e38  6a01                 push 1
// 00527e3a  56                   push esi
// 00527e3b  55                   push ebp
// 00527e3c  e83f5fffff           call 0x51dd80
// 00527e41  6a01                 push 1
// 00527e43  56                   push esi
// 00527e44  55                   push ebp
// 00527e45  e8665cffff           call 0x51dab0
// 00527e4a  83c418               add esp, 0x18
// 00527e4d  8b470c               mov eax, dword ptr [edi + 0xc]
// 00527e50  8b7708               mov esi, dword ptr [edi + 8]
// 00527e53  8d0480               lea eax, [eax + eax*4]
// 00527e56  8d0c46               lea ecx, [esi + eax*2]
// 00527e59  3bf1                 cmp esi, ecx
// 00527e5b  0f83c8000000         jae 0x527f29
// 00527e61  807f0408             cmp byte ptr [edi + 4], 8
// 00527e65  7530                 jne 0x527e97
// 00527e67  0fb616               movzx edx, byte ptr [esi]
// 00527e6a  88542414             mov byte ptr [esp + 0x14], dl
// 00527e6e  8a4602               mov al, byte ptr [esi + 2]
// 00527e71  88442415             mov byte ptr [esp + 0x15], al
// 00527e75  8a4e04               mov cl, byte ptr [esi + 4]
// 00527e78  884c2416             mov byte ptr [esp + 0x16], cl
// 00527e7c  0fb65606             movzx edx, byte ptr [esi + 6]
// 00527e80  88542417             mov byte ptr [esp + 0x17], dl
// 00527e84  0fb74608             movzx eax, word ptr [esi + 8]
// 00527e88  8bc8                 mov ecx, eax
// 00527e8a  c1e908               shr ecx, 8
// 00527e8d  884c2418             mov byte ptr [esp + 0x18], cl
// 00527e91  88442419             mov byte ptr [esp + 0x19], al
// 00527e95  eb54                 jmp 0x527eeb
// 00527e97  0fb706               movzx eax, word ptr [esi]
// 00527e9a  8bd0                 mov edx, eax
// 00527e9c  c1ea08               shr edx, 8
// 00527e9f  88542414             mov byte ptr [esp + 0x14], dl
// 00527ea3  88442415             mov byte ptr [esp + 0x15], al
// 00527ea7  0fb74602             movzx eax, word ptr [esi + 2]
// 00527eab  8bc8                 mov ecx, eax
// 00527ead  c1e908               shr ecx, 8
// 00527eb0  884c2416             mov byte ptr [esp + 0x16], cl
// 00527eb4  88442417             mov byte ptr [esp + 0x17], al
// 00527eb8  0fb74604             movzx eax, word ptr [esi + 4]
// 00527ebc  8bd0                 mov edx, eax
// 00527ebe  c1ea08               shr edx, 8
// 00527ec1  88542418             mov byte ptr [esp + 0x18], dl
// 00527ec5  88442419             mov byte ptr [esp + 0x19], al
// 00527ec9  0fb74606             movzx eax, word ptr [esi + 6]
// 00527ecd  8bc8                 mov ecx, eax
// 00527ecf  c1e908               shr ecx, 8
// 00527ed2  884c241a             mov byte ptr [esp + 0x1a], cl
// 00527ed6  8844241b             mov byte ptr [esp + 0x1b], al
// 00527eda  0fb74608             movzx eax, word ptr [esi + 8]
// 00527ede  8bd0                 mov edx, eax
// 00527ee0  c1ea08               shr edx, 8
// 00527ee3  8854241c             mov byte ptr [esp + 0x1c], dl
// 00527ee7  8844241d             mov byte ptr [esp + 0x1d], al
// 00527eeb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00527eef  85db                 test ebx, ebx
// 00527ef1  761b                 jbe 0x527f0e
// 00527ef3  53                   push ebx
// 00527ef4  8d442418             lea eax, [esp + 0x18]
// 00527ef8  50                   push eax
// 00527ef9  55                   push ebp
// 00527efa  e8815effff           call 0x51dd80
// 00527eff  53                   push ebx
// 00527f00  8d4c2424             lea ecx, [esp + 0x24]
// 00527f04  51                   push ecx
// 00527f05  55                   push ebp
// 00527f06  e8a55bffff           call 0x51dab0
// 00527f0b  83c418               add esp, 0x18
// 00527f0e  8b470c               mov eax, dword ptr [edi + 0xc]
// 00527f11  8d1480               lea edx, [eax + eax*4]
// 00527f14  8b4708               mov eax, dword ptr [edi + 8]
// 00527f17  83c60a               add esi, 0xa
// 00527f1a  8d0c50               lea ecx, [eax + edx*2]
// 00527f1d  3bf1                 cmp esi, ecx
// 00527f1f  0f823cffffff         jb 0x527e61
// 00527f25  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00527f29  8b8510010000         mov eax, dword ptr [ebp + 0x110]
// 00527f2f  8bd0                 mov edx, eax
// 00527f31  c1ea18               shr edx, 0x18
// 00527f34  88542428             mov byte ptr [esp + 0x28], dl
// 00527f38  8bc8                 mov ecx, eax
// 00527f3a  8bd0                 mov edx, eax
// 00527f3c  8844242b             mov byte ptr [esp + 0x2b], al
// 00527f40  6a04                 push 4
// 00527f42  8d44242c             lea eax, [esp + 0x2c]
// 00527f46  50                   push eax
// 00527f47  c1e910               shr ecx, 0x10
// 00527f4a  c1ea08               shr edx, 8
// 00527f4d  55                   push ebp
// 00527f4e  884c2435             mov byte ptr [esp + 0x35], cl
// 00527f52  88542436             mov byte ptr [esp + 0x36], dl
// 00527f56  e8555bffff           call 0x51dab0
// 00527f5b  53                   push ebx
// 00527f5c  55                   push ebp
// 00527f5d  e89e250000           call 0x52a500
// 00527f62  83c414               add esp, 0x14
// 00527f65  5f                   pop edi
// 00527f66  5e                   pop esi
// 00527f67  5d                   pop ebp
// 00527f68  5b                   pop ebx
// 00527f69  83c410               add esp, 0x10
// 00527f6c  c3                   ret 
// 00527f6d  68d8b78200           push 0x82b7d8
// 00527f72  55                   push ebp
// 00527f73  e8d81a0000           call 0x529a50
// 00527f78  83c408               add esp, 8
// 00527f7b  5f                   pop edi
// 00527f7c  5e                   pop esi
// 00527f7d  5d                   pop ebp
// 00527f7e  5b                   pop ebx
// 00527f7f  83c410               add esp, 0x10
// 00527f82  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_sPLT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
