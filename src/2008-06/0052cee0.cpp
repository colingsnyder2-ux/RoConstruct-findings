// roc 2008-06 0052cee0  unit: seg_00520000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052cee0
//
// 0052cee0  53                   push ebx
// 0052cee1  56                   push esi
// 0052cee2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052cee6  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0052ceec  57                   push edi
// 0052ceed  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052cef1  89442410             mov dword ptr [esp + 0x10], eax
// 0052cef5  3bf8                 cmp edi, eax
// 0052cef7  7631                 jbe 0x52cf2a
// 0052cef9  55                   push ebp
// 0052cefa  8d9b00000000         lea ebx, [ebx]
// 0052cf00  8b9eb0000000         mov ebx, dword ptr [esi + 0xb0]
// 0052cf06  8baeac000000         mov ebp, dword ptr [esi + 0xac]
// 0052cf0c  53                   push ebx
// 0052cf0d  55                   push ebp
// 0052cf0e  56                   push esi
// 0052cf0f  e89c7bffff           call 0x524ab0
// 0052cf14  53                   push ebx
// 0052cf15  55                   push ebp
// 0052cf16  56                   push esi
// 0052cf17  e8640effff           call 0x51dd80
// 0052cf1c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052cf20  2bf8                 sub edi, eax
// 0052cf22  83c418               add esp, 0x18
// 0052cf25  3bf8                 cmp edi, eax
// 0052cf27  77d7                 ja 0x52cf00
// 0052cf29  5d                   pop ebp
// 0052cf2a  85ff                 test edi, edi
// 0052cf2c  7419                 je 0x52cf47
// 0052cf2e  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 0052cf34  57                   push edi
// 0052cf35  53                   push ebx
// 0052cf36  56                   push esi
// 0052cf37  e8747bffff           call 0x524ab0
// 0052cf3c  57                   push edi
// 0052cf3d  53                   push ebx
// 0052cf3e  56                   push esi
// 0052cf3f  e83c0effff           call 0x51dd80
// 0052cf44  83c418               add esp, 0x18
// 0052cf47  56                   push esi
// 0052cf48  e883efffff           call 0x52bed0
// 0052cf4d  83c404               add esp, 4
// 0052cf50  85c0                 test eax, eax
// 0052cf52  744e                 je 0x52cfa2
// 0052cf54  8a861c010000         mov al, byte ptr [esi + 0x11c]
// 0052cf5a  2420                 and al, 0x20
// 0052cf5c  7409                 je 0x52cf67
// 0052cf5e  f7466c00020000       test dword ptr [esi + 0x6c], 0x200
// 0052cf65  740d                 je 0x52cf74
// 0052cf67  84c0                 test al, al
// 0052cf69  7520                 jne 0x52cf8b
// 0052cf6b  f7466c00040000       test dword ptr [esi + 0x6c], 0x400
// 0052cf72  7417                 je 0x52cf8b
// 0052cf74  684cbd8200           push 0x82bd4c
// 0052cf79  56                   push esi
// 0052cf7a  e851cbffff           call 0x529ad0
// 0052cf7f  83c408               add esp, 8
// 0052cf82  5f                   pop edi
// 0052cf83  5e                   pop esi
// 0052cf84  b801000000           mov eax, 1
// 0052cf89  5b                   pop ebx
// 0052cf8a  c3                   ret 
// 0052cf8b  684cbd8200           push 0x82bd4c
// 0052cf90  56                   push esi
// 0052cf91  e80acbffff           call 0x529aa0
// 0052cf96  83c408               add esp, 8
// 0052cf99  5f                   pop edi
// 0052cf9a  5e                   pop esi
// 0052cf9b  b801000000           mov eax, 1
// 0052cfa0  5b                   pop ebx
// 0052cfa1  c3                   ret 
// 0052cfa2  5f                   pop edi
// 0052cfa3  5e                   pop esi
// 0052cfa4  33c0                 xor eax, eax
// 0052cfa6  5b                   pop ebx
// 0052cfa7  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_finish)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
