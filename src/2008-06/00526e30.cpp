// roc 2008-06 00526e30  unit: G3D::Line  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00526e30
//
// 00526e30  83ec1c               sub esp, 0x1c
// 00526e33  837c243004           cmp dword ptr [esp + 0x30], 4
// 00526e38  53                   push ebx
// 00526e39  55                   push ebp
// 00526e3a  56                   push esi
// 00526e3b  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00526e3f  57                   push edi
// 00526e40  7c0e                 jl 0x526e50
// 00526e42  68b8b58200           push 0x82b5b8
// 00526e47  56                   push esi
// 00526e48  e8032c0000           call 0x529a50
// 00526e4d  83c408               add esp, 8
// 00526e50  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00526e54  8d442410             lea eax, [esp + 0x10]
// 00526e58  50                   push eax
// 00526e59  51                   push ecx
// 00526e5a  56                   push esi
// 00526e5b  e820fcffff           call 0x526a80
// 00526e60  8be8                 mov ebp, eax
// 00526e62  8b442454             mov eax, dword ptr [esp + 0x54]
// 00526e66  83c40c               add esp, 0xc
// 00526e69  45                   inc ebp
// 00526e6a  896c2418             mov dword ptr [esp + 0x18], ebp
// 00526e6e  8d4801               lea ecx, [eax + 1]
// 00526e71  8a10                 mov dl, byte ptr [eax]
// 00526e73  40                   inc eax
// 00526e74  84d2                 test dl, dl
// 00526e76  75f9                 jne 0x526e71
// 00526e78  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00526e7c  2bc1                 sub eax, ecx
// 00526e7e  33d2                 xor edx, edx
// 00526e80  85db                 test ebx, ebx
// 00526e82  0f95c2               setne dl
// 00526e85  8d0c9d00000000       lea ecx, [ebx*4]
// 00526e8c  51                   push ecx
// 00526e8d  56                   push esi
// 00526e8e  03d0                 add edx, eax
// 00526e90  8bfa                 mov edi, edx
// 00526e92  8d442f0a             lea eax, [edi + ebp + 0xa]
// 00526e96  897c2424             mov dword ptr [esp + 0x24], edi
// 00526e9a  89442438             mov dword ptr [esp + 0x38], eax
// 00526e9e  e8fd350000           call 0x52a4a0
// 00526ea3  83c408               add esp, 8
// 00526ea6  33c9                 xor ecx, ecx
// 00526ea8  89442444             mov dword ptr [esp + 0x44], eax
// 00526eac  85db                 test ebx, ebx
// 00526eae  7e4f                 jle 0x526eff
// 00526eb0  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00526eb4  2bd0                 sub edx, eax
// 00526eb6  8bf8                 mov edi, eax
// 00526eb8  89542414             mov dword ptr [esp + 0x14], edx
// 00526ebc  eb06                 jmp 0x526ec4
// 00526ebe  8bff                 mov edi, edi
// 00526ec0  8b542414             mov edx, dword ptr [esp + 0x14]
// 00526ec4  8b043a               mov eax, dword ptr [edx + edi]
// 00526ec7  8d6801               lea ebp, [eax + 1]
// 00526eca  8d9b00000000         lea ebx, [ebx]
// 00526ed0  8a10                 mov dl, byte ptr [eax]
// 00526ed2  40                   inc eax
// 00526ed3  84d2                 test dl, dl
// 00526ed5  75f9                 jne 0x526ed0
// 00526ed7  2bc5                 sub eax, ebp
// 00526ed9  8be8                 mov ebp, eax
// 00526edb  33d2                 xor edx, edx
// 00526edd  8d43ff               lea eax, [ebx - 1]
// 00526ee0  3bc8                 cmp ecx, eax
// 00526ee2  0f95c2               setne dl
// 00526ee5  41                   inc ecx
// 00526ee6  83c704               add edi, 4
// 00526ee9  8d042a               lea eax, [edx + ebp]
// 00526eec  01442430             add dword ptr [esp + 0x30], eax
// 00526ef0  3bcb                 cmp ecx, ebx
// 00526ef2  8947fc               mov dword ptr [edi - 4], eax
// 00526ef5  7cc9                 jl 0x526ec0
// 00526ef7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00526efb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00526eff  8b442430             mov eax, dword ptr [esp + 0x30]
// 00526f03  8bd0                 mov edx, eax
// 00526f05  8bc8                 mov ecx, eax
// 00526f07  c1e918               shr ecx, 0x18
// 00526f0a  c1ea10               shr edx, 0x10
// 00526f0d  884c2430             mov byte ptr [esp + 0x30], cl
// 00526f11  88542431             mov byte ptr [esp + 0x31], dl
// 00526f15  6a04                 push 4
// 00526f17  8d542434             lea edx, [esp + 0x34]
// 00526f1b  8bc8                 mov ecx, eax
// 00526f1d  52                   push edx
// 00526f1e  c1e908               shr ecx, 8
// 00526f21  56                   push esi
// 00526f22  884c243e             mov byte ptr [esp + 0x3e], cl
// 00526f26  8844243f             mov byte ptr [esp + 0x3f], al
// 00526f2a  e8816bffff           call 0x51dab0
// 00526f2f  6a04                 push 4
// 00526f31  689c948200           push 0x82949c
// 00526f36  56                   push esi
// 00526f37  e8746bffff           call 0x51dab0
// 00526f3c  56                   push esi
// 00526f3d  e81e6effff           call 0x51dd60
// 00526f42  6a04                 push 4
// 00526f44  689c948200           push 0x82949c
// 00526f49  56                   push esi
// 00526f4a  e8316effff           call 0x51dd80
// 00526f4f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00526f53  83c428               add esp, 0x28
// 00526f56  85c0                 test eax, eax
// 00526f58  741b                 je 0x526f75
// 00526f5a  85ed                 test ebp, ebp
// 00526f5c  7617                 jbe 0x526f75
// 00526f5e  55                   push ebp
// 00526f5f  50                   push eax
// 00526f60  56                   push esi
// 00526f61  e81a6effff           call 0x51dd80
// 00526f66  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00526f6a  55                   push ebp
// 00526f6b  50                   push eax
// 00526f6c  56                   push esi
// 00526f6d  e83e6bffff           call 0x51dab0
// 00526f72  83c418               add esp, 0x18
// 00526f75  8b442438             mov eax, dword ptr [esp + 0x38]
// 00526f79  8bc8                 mov ecx, eax
// 00526f7b  c1f918               sar ecx, 0x18
// 00526f7e  884c2420             mov byte ptr [esp + 0x20], cl
// 00526f82  8bc8                 mov ecx, eax
// 00526f84  8bd0                 mov edx, eax
// 00526f86  c1fa10               sar edx, 0x10
// 00526f89  c1f908               sar ecx, 8
// 00526f8c  88442423             mov byte ptr [esp + 0x23], al
// 00526f90  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00526f94  88542421             mov byte ptr [esp + 0x21], dl
// 00526f98  884c2422             mov byte ptr [esp + 0x22], cl
// 00526f9c  8bc8                 mov ecx, eax
// 00526f9e  8bd0                 mov edx, eax
// 00526fa0  c1fa18               sar edx, 0x18
// 00526fa3  c1f910               sar ecx, 0x10
// 00526fa6  88542424             mov byte ptr [esp + 0x24], dl
// 00526faa  884c2425             mov byte ptr [esp + 0x25], cl
// 00526fae  8bd0                 mov edx, eax
// 00526fb0  6a0a                 push 0xa
// 00526fb2  8d4c2424             lea ecx, [esp + 0x24]
// 00526fb6  8844242b             mov byte ptr [esp + 0x2b], al
// 00526fba  8a442444             mov al, byte ptr [esp + 0x44]
// 00526fbe  51                   push ecx
// 00526fbf  c1fa08               sar edx, 8
// 00526fc2  56                   push esi
// 00526fc3  88542432             mov byte ptr [esp + 0x32], dl
// 00526fc7  88442434             mov byte ptr [esp + 0x34], al
// 00526fcb  885c2435             mov byte ptr [esp + 0x35], bl
// 00526fcf  e8ac6dffff           call 0x51dd80
// 00526fd4  6a0a                 push 0xa
// 00526fd6  8d542430             lea edx, [esp + 0x30]
// 00526fda  52                   push edx
// 00526fdb  56                   push esi
// 00526fdc  e8cf6affff           call 0x51dab0
// 00526fe1  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 00526fe5  83c418               add esp, 0x18
// 00526fe8  85ed                 test ebp, ebp
// 00526fea  7417                 je 0x527003
// 00526fec  85ff                 test edi, edi
// 00526fee  7613                 jbe 0x527003
// 00526ff0  57                   push edi
// 00526ff1  55                   push ebp
// 00526ff2  56                   push esi
// 00526ff3  e8886dffff           call 0x51dd80
// 00526ff8  57                   push edi
// 00526ff9  55                   push ebp
// 00526ffa  56                   push esi
// 00526ffb  e8b06affff           call 0x51dab0
// 00527000  83c418               add esp, 0x18
// 00527003  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527007  50                   push eax
// 00527008  56                   push esi
// 00527009  e8f2340000           call 0x52a500
// 0052700e  83c408               add esp, 8
// 00527011  85db                 test ebx, ebx
// 00527013  7e40                 jle 0x527055
// 00527015  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00527019  8b442444             mov eax, dword ptr [esp + 0x44]
// 0052701d  2bc7                 sub eax, edi
// 0052701f  89442448             mov dword ptr [esp + 0x48], eax
// 00527023  895c2440             mov dword ptr [esp + 0x40], ebx
// 00527027  8b2f                 mov ebp, dword ptr [edi]
// 00527029  8b1c38               mov ebx, dword ptr [eax + edi]
// 0052702c  85ed                 test ebp, ebp
// 0052702e  741b                 je 0x52704b
// 00527030  85db                 test ebx, ebx
// 00527032  7617                 jbe 0x52704b
// 00527034  53                   push ebx
// 00527035  55                   push ebp
// 00527036  56                   push esi
// 00527037  e8446dffff           call 0x51dd80
// 0052703c  53                   push ebx
// 0052703d  55                   push ebp
// 0052703e  56                   push esi
// 0052703f  e86c6affff           call 0x51dab0
// 00527044  8b442460             mov eax, dword ptr [esp + 0x60]
// 00527048  83c418               add esp, 0x18
// 0052704b  83c704               add edi, 4
// 0052704e  836c244001           sub dword ptr [esp + 0x40], 1
// 00527053  75d2                 jne 0x527027
// 00527055  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00527059  51                   push ecx
// 0052705a  56                   push esi
// 0052705b  e8a0340000           call 0x52a500
// 00527060  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00527066  8bd0                 mov edx, eax
// 00527068  c1ea18               shr edx, 0x18
// 0052706b  88542448             mov byte ptr [esp + 0x48], dl
// 0052706f  8bc8                 mov ecx, eax
// 00527071  8bd0                 mov edx, eax
// 00527073  8844244b             mov byte ptr [esp + 0x4b], al
// 00527077  6a04                 push 4
// 00527079  8d44244c             lea eax, [esp + 0x4c]
// 0052707d  50                   push eax
// 0052707e  c1e910               shr ecx, 0x10
// 00527081  c1ea08               shr edx, 8
// 00527084  56                   push esi
// 00527085  884c2455             mov byte ptr [esp + 0x55], cl
// 00527089  88542456             mov byte ptr [esp + 0x56], dl
// 0052708d  e81e6affff           call 0x51dab0
// 00527092  83c414               add esp, 0x14
// 00527095  5f                   pop edi
// 00527096  5e                   pop esi
// 00527097  5d                   pop ebp
// 00527098  5b                   pop ebx
// 00527099  83c41c               add esp, 0x1c
// 0052709c  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_pCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
