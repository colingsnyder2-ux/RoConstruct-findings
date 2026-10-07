// roc 2008-06 00527cc0  unit: G3D::Line  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00527cc0
//
// 00527cc0  8b442408             mov eax, dword ptr [esp + 8]
// 00527cc4  83ec14               sub esp, 0x14
// 00527cc7  53                   push ebx
// 00527cc8  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00527ccc  56                   push esi
// 00527ccd  85c0                 test eax, eax
// 00527ccf  0f84ba000000         je 0x527d8f
// 00527cd5  8d4c2424             lea ecx, [esp + 0x24]
// 00527cd9  51                   push ecx
// 00527cda  50                   push eax
// 00527cdb  53                   push ebx
// 00527cdc  e89fedffff           call 0x526a80
// 00527ce1  8bf0                 mov esi, eax
// 00527ce3  83c40c               add esp, 0xc
// 00527ce6  85f6                 test esi, esi
// 00527ce8  0f84a1000000         je 0x527d8f
// 00527cee  837c242800           cmp dword ptr [esp + 0x28], 0
// 00527cf3  740e                 je 0x527d03
// 00527cf5  68b0b78200           push 0x82b7b0
// 00527cfa  53                   push ebx
// 00527cfb  e8501d0000           call 0x529a50
// 00527d00  83c408               add esp, 8
// 00527d03  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00527d07  55                   push ebp
// 00527d08  57                   push edi
// 00527d09  85c0                 test eax, eax
// 00527d0b  7504                 jne 0x527d11
// 00527d0d  33ed                 xor ebp, ebp
// 00527d0f  eb1d                 jmp 0x527d2e
// 00527d11  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00527d15  85ed                 test ebp, ebp
// 00527d17  7415                 je 0x527d2e
// 00527d19  50                   push eax
// 00527d1a  8d7c2414             lea edi, [esp + 0x14]
// 00527d1e  33c0                 xor eax, eax
// 00527d20  8bcd                 mov ecx, ebp
// 00527d22  8bd3                 mov edx, ebx
// 00527d24  e837e8ffff           call 0x526560
// 00527d29  83c404               add esp, 4
// 00527d2c  8be8                 mov ebp, eax
// 00527d2e  8d542e02             lea edx, [esi + ebp + 2]
// 00527d32  52                   push edx
// 00527d33  6884948200           push 0x829484
// 00527d38  53                   push ebx
// 00527d39  e8e2e6ffff           call 0x526420
// 00527d3e  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00527d42  c644370100           mov byte ptr [edi + esi + 1], 0
// 00527d47  83c40c               add esp, 0xc
// 00527d4a  83c602               add esi, 2
// 00527d4d  85ff                 test edi, edi
// 00527d4f  7417                 je 0x527d68
// 00527d51  85f6                 test esi, esi
// 00527d53  7613                 jbe 0x527d68
// 00527d55  56                   push esi
// 00527d56  57                   push edi
// 00527d57  53                   push ebx
// 00527d58  e82360ffff           call 0x51dd80
// 00527d5d  56                   push esi
// 00527d5e  57                   push edi
// 00527d5f  53                   push ebx
// 00527d60  e84b5dffff           call 0x51dab0
// 00527d65  83c418               add esp, 0x18
// 00527d68  85ed                 test ebp, ebp
// 00527d6a  740b                 je 0x527d77
// 00527d6c  8d442410             lea eax, [esp + 0x10]
// 00527d70  8bcb                 mov ecx, ebx
// 00527d72  e869eaffff           call 0x5267e0
// 00527d77  53                   push ebx
// 00527d78  e833e7ffff           call 0x5264b0
// 00527d7d  57                   push edi
// 00527d7e  53                   push ebx
// 00527d7f  e87c270000           call 0x52a500
// 00527d84  83c40c               add esp, 0xc
// 00527d87  5f                   pop edi
// 00527d88  5d                   pop ebp
// 00527d89  5e                   pop esi
// 00527d8a  5b                   pop ebx
// 00527d8b  83c414               add esp, 0x14
// 00527d8e  c3                   ret 
// 00527d8f  6894b78200           push 0x82b794
// 00527d94  53                   push ebx
// 00527d95  e8b61c0000           call 0x529a50
// 00527d9a  83c408               add esp, 8
// 00527d9d  5e                   pop esi
// 00527d9e  5b                   pop ebx
// 00527d9f  83c414               add esp, 0x14
// 00527da2  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_iCCP)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
