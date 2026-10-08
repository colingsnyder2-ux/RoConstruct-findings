// from server: 100% by auto
// roc 2008-06 00526d20  unit: G3D::Line  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00526d20
//
// 00526d20  8b442408             mov eax, dword ptr [esp + 8]
// 00526d24  83ec1c               sub esp, 0x1c
// 00526d27  55                   push ebp
// 00526d28  56                   push esi
// 00526d29  8b742428             mov esi, dword ptr [esp + 0x28]
// 00526d2d  85c0                 test eax, eax
// 00526d2f  0f84e0000000         je 0x526e15
// 00526d35  8d4c240c             lea ecx, [esp + 0xc]
// 00526d39  51                   push ecx
// 00526d3a  50                   push eax
// 00526d3b  56                   push esi
// 00526d3c  e83ffdffff           call 0x526a80
// 00526d41  8be8                 mov ebp, eax
// 00526d43  83c40c               add esp, 0xc
// 00526d46  85ed                 test ebp, ebp
// 00526d48  0f84c7000000         je 0x526e15
// 00526d4e  57                   push edi
// 00526d4f  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00526d53  85ff                 test edi, edi
// 00526d55  0f849b000000         je 0x526df6
// 00526d5b  803f00               cmp byte ptr [edi], 0
// 00526d5e  0f8492000000         je 0x526df6
// 00526d64  837c243cff           cmp dword ptr [esp + 0x3c], -1
// 00526d69  0f8487000000         je 0x526df6
// 00526d6f  8bc7                 mov eax, edi
// 00526d71  8d5001               lea edx, [eax + 1]
// 00526d74  8a08                 mov cl, byte ptr [eax]
// 00526d76  40                   inc eax
// 00526d77  84c9                 test cl, cl
// 00526d79  75f9                 jne 0x526d74
// 00526d7b  2bc2                 sub eax, edx
// 00526d7d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00526d81  53                   push ebx
// 00526d82  52                   push edx
// 00526d83  56                   push esi
// 00526d84  8bd8                 mov ebx, eax
// 00526d86  e875370000           call 0x52a500
// 00526d8b  8b442448             mov eax, dword ptr [esp + 0x48]
// 00526d8f  57                   push edi
// 00526d90  8d7c2424             lea edi, [esp + 0x24]
// 00526d94  8bcb                 mov ecx, ebx
// 00526d96  8bd6                 mov edx, esi
// 00526d98  e8c3f7ffff           call 0x526560
// 00526d9d  8d442802             lea eax, [eax + ebp + 2]
// 00526da1  50                   push eax
// 00526da2  68e4948200           push 0x8294e4
// 00526da7  56                   push esi
// 00526da8  e873f6ffff           call 0x526420
// 00526dad  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00526db1  45                   inc ebp
// 00526db2  55                   push ebp
// 00526db3  51                   push ecx
// 00526db4  56                   push esi
// 00526db5  e8c6f6ffff           call 0x526480
// 00526dba  8a542464             mov dl, byte ptr [esp + 0x64]
// 00526dbe  6a01                 push 1
// 00526dc0  8d44243b             lea eax, [esp + 0x3b]
// 00526dc4  50                   push eax
// 00526dc5  56                   push esi
// 00526dc6  88542443             mov byte ptr [esp + 0x43], dl
// 00526dca  e8b16fffff           call 0x51dd80
// 00526dcf  6a01                 push 1
// 00526dd1  8d4c2447             lea ecx, [esp + 0x47]
// 00526dd5  51                   push ecx
// 00526dd6  56                   push esi
// 00526dd7  e8d46cffff           call 0x51dab0
// 00526ddc  8bc7                 mov eax, edi
// 00526dde  8bce                 mov ecx, esi
// 00526de0  e8fbf9ffff           call 0x5267e0
// 00526de5  56                   push esi
// 00526de6  e8c5f6ffff           call 0x5264b0
// 00526deb  83c440               add esp, 0x40
// 00526dee  5b                   pop ebx
// 00526def  5f                   pop edi
// 00526df0  5e                   pop esi
// 00526df1  5d                   pop ebp
// 00526df2  83c41c               add esp, 0x1c
// 00526df5  c3                   ret 
// 00526df6  6a00                 push 0
// 00526df8  57                   push edi
// 00526df9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00526dfd  57                   push edi
// 00526dfe  56                   push esi
// 00526dff  e85cfeffff           call 0x526c60
// 00526e04  57                   push edi
// 00526e05  56                   push esi
// 00526e06  e8f5360000           call 0x52a500
// 00526e0b  83c418               add esp, 0x18
// 00526e0e  5f                   pop edi
// 00526e0f  5e                   pop esi
// 00526e10  5d                   pop ebp
// 00526e11  83c41c               add esp, 0x1c
// 00526e14  c3                   ret 
// 00526e15  689cb58200           push 0x82b59c
// 00526e1a  56                   push esi
// 00526e1b  e8302c0000           call 0x529a50
// 00526e20  83c408               add esp, 8
// 00526e23  5e                   pop esi
// 00526e24  5d                   pop ebp
// 00526e25  83c41c               add esp, 0x1c
// 00526e28  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_zTXt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
