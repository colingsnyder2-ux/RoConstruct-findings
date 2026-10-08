// roc 2009-12 00616bf0  unit: seg_00610000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00616bf0
//
// 00616bf0  53                   push ebx
// 00616bf1  56                   push esi
// 00616bf2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00616bf6  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00616bfc  57                   push edi
// 00616bfd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00616c01  89442410             mov dword ptr [esp + 0x10], eax
// 00616c05  3bf8                 cmp edi, eax
// 00616c07  7631                 jbe 0x616c3a
// 00616c09  55                   push ebp
// 00616c0a  8d9b00000000         lea ebx, [ebx]
// 00616c10  8b9eb0000000         mov ebx, dword ptr [esi + 0xb0]
// 00616c16  8baeac000000         mov ebp, dword ptr [esi + 0xac]
// 00616c1c  53                   push ebx
// 00616c1d  55                   push ebp
// 00616c1e  56                   push esi
// 00616c1f  e86c3effff           call 0x60aa90
// 00616c24  53                   push ebx
// 00616c25  55                   push ebp
// 00616c26  56                   push esi
// 00616c27  e844cafeff           call 0x603670
// 00616c2c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00616c30  2bf8                 sub edi, eax
// 00616c32  83c418               add esp, 0x18
// 00616c35  3bf8                 cmp edi, eax
// 00616c37  77d7                 ja 0x616c10
// 00616c39  5d                   pop ebp
// 00616c3a  85ff                 test edi, edi
// 00616c3c  7419                 je 0x616c57
// 00616c3e  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 00616c44  57                   push edi
// 00616c45  53                   push ebx
// 00616c46  56                   push esi
// 00616c47  e8443effff           call 0x60aa90
// 00616c4c  57                   push edi
// 00616c4d  53                   push ebx
// 00616c4e  56                   push esi
// 00616c4f  e81ccafeff           call 0x603670
// 00616c54  83c418               add esp, 0x18
// 00616c57  56                   push esi
// 00616c58  e863eeffff           call 0x615ac0
// 00616c5d  83c404               add esp, 4
// 00616c60  85c0                 test eax, eax
// 00616c62  744e                 je 0x616cb2
// 00616c64  8a861c010000         mov al, byte ptr [esi + 0x11c]
// 00616c6a  2420                 and al, 0x20
// 00616c6c  7409                 je 0x616c77
// 00616c6e  f7466c00020000       test dword ptr [esi + 0x6c], 0x200
// 00616c75  740d                 je 0x616c84
// 00616c77  84c0                 test al, al
// 00616c79  7520                 jne 0x616c9b
// 00616c7b  f7466c00040000       test dword ptr [esi + 0x6c], 0x400
// 00616c82  7417                 je 0x616c9b
// 00616c84  68b08f9c00           push 0x9c8fb0
// 00616c89  56                   push esi
// 00616c8a  e86196ffff           call 0x6102f0
// 00616c8f  83c408               add esp, 8
// 00616c92  5f                   pop edi
// 00616c93  5e                   pop esi
// 00616c94  b801000000           mov eax, 1
// 00616c99  5b                   pop ebx
// 00616c9a  c3                   ret 
// 00616c9b  68b08f9c00           push 0x9c8fb0
// 00616ca0  56                   push esi
// 00616ca1  e8fa95ffff           call 0x6102a0
// 00616ca6  83c408               add esp, 8
// 00616ca9  5f                   pop edi
// 00616caa  5e                   pop esi
// 00616cab  b801000000           mov eax, 1
// 00616cb0  5b                   pop ebx
// 00616cb1  c3                   ret 
// 00616cb2  5f                   pop edi
// 00616cb3  5e                   pop esi
// 00616cb4  33c0                 xor eax, eax
// 00616cb6  5b                   pop ebx
// 00616cb7  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_finish)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
