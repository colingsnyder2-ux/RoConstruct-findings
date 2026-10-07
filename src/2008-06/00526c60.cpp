// roc 2008-06 00526c60  unit: G3D::Line  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00526c60
//
// 00526c60  8b442408             mov eax, dword ptr [esp + 8]
// 00526c64  53                   push ebx
// 00526c65  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00526c69  56                   push esi
// 00526c6a  85c0                 test eax, eax
// 00526c6c  0f8498000000         je 0x526d0a
// 00526c72  8d4c2410             lea ecx, [esp + 0x10]
// 00526c76  51                   push ecx
// 00526c77  50                   push eax
// 00526c78  53                   push ebx
// 00526c79  e802feffff           call 0x526a80
// 00526c7e  8bf0                 mov esi, eax
// 00526c80  83c40c               add esp, 0xc
// 00526c83  85f6                 test esi, esi
// 00526c85  0f847f000000         je 0x526d0a
// 00526c8b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00526c8f  55                   push ebp
// 00526c90  57                   push edi
// 00526c91  85c0                 test eax, eax
// 00526c93  7418                 je 0x526cad
// 00526c95  803800               cmp byte ptr [eax], 0
// 00526c98  7413                 je 0x526cad
// 00526c9a  8d5001               lea edx, [eax + 1]
// 00526c9d  8d4900               lea ecx, [ecx]
// 00526ca0  8a08                 mov cl, byte ptr [eax]
// 00526ca2  40                   inc eax
// 00526ca3  84c9                 test cl, cl
// 00526ca5  75f9                 jne 0x526ca0
// 00526ca7  2bc2                 sub eax, edx
// 00526ca9  8bf8                 mov edi, eax
// 00526cab  eb02                 jmp 0x526caf
// 00526cad  33ff                 xor edi, edi
// 00526caf  8d543e01             lea edx, [esi + edi + 1]
// 00526cb3  52                   push edx
// 00526cb4  68cc948200           push 0x8294cc
// 00526cb9  53                   push ebx
// 00526cba  e861f7ffff           call 0x526420
// 00526cbf  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00526cc3  83c40c               add esp, 0xc
// 00526cc6  46                   inc esi
// 00526cc7  85ed                 test ebp, ebp
// 00526cc9  7417                 je 0x526ce2
// 00526ccb  85f6                 test esi, esi
// 00526ccd  7613                 jbe 0x526ce2
// 00526ccf  56                   push esi
// 00526cd0  55                   push ebp
// 00526cd1  53                   push ebx
// 00526cd2  e8a970ffff           call 0x51dd80
// 00526cd7  56                   push esi
// 00526cd8  55                   push ebp
// 00526cd9  53                   push ebx
// 00526cda  e8d16dffff           call 0x51dab0
// 00526cdf  83c418               add esp, 0x18
// 00526ce2  85ff                 test edi, edi
// 00526ce4  740f                 je 0x526cf5
// 00526ce6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00526cea  57                   push edi
// 00526ceb  50                   push eax
// 00526cec  53                   push ebx
// 00526ced  e88ef7ffff           call 0x526480
// 00526cf2  83c40c               add esp, 0xc
// 00526cf5  53                   push ebx
// 00526cf6  e8b5f7ffff           call 0x5264b0
// 00526cfb  55                   push ebp
// 00526cfc  53                   push ebx
// 00526cfd  e8fe370000           call 0x52a500
// 00526d02  83c40c               add esp, 0xc
// 00526d05  5f                   pop edi
// 00526d06  5d                   pop ebp
// 00526d07  5e                   pop esi
// 00526d08  5b                   pop ebx
// 00526d09  c3                   ret 
// 00526d0a  6880b58200           push 0x82b580
// 00526d0f  53                   push ebx
// 00526d10  e83b2d0000           call 0x529a50
// 00526d15  83c408               add esp, 8
// 00526d18  5e                   pop esi
// 00526d19  5b                   pop ebx
// 00526d1a  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_tEXt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
