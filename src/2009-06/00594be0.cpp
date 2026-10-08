// from server: 100% by auto
// roc 2009-06 00594be0  unit: seg_00590000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00594be0
//
// 00594be0  53                   push ebx
// 00594be1  56                   push esi
// 00594be2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00594be6  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00594bec  57                   push edi
// 00594bed  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00594bf1  89442410             mov dword ptr [esp + 0x10], eax
// 00594bf5  3bf8                 cmp edi, eax
// 00594bf7  7631                 jbe 0x594c2a
// 00594bf9  55                   push ebp
// 00594bfa  8d9b00000000         lea ebx, [ebx]
// 00594c00  8b9eb0000000         mov ebx, dword ptr [esi + 0xb0]
// 00594c06  8baeac000000         mov ebp, dword ptr [esi + 0xac]
// 00594c0c  53                   push ebx
// 00594c0d  55                   push ebp
// 00594c0e  56                   push esi
// 00594c0f  e8ec40ffff           call 0x588d00
// 00594c14  53                   push ebx
// 00594c15  55                   push ebp
// 00594c16  56                   push esi
// 00594c17  e8a4ccfeff           call 0x5818c0
// 00594c1c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00594c20  2bf8                 sub edi, eax
// 00594c22  83c418               add esp, 0x18
// 00594c25  3bf8                 cmp edi, eax
// 00594c27  77d7                 ja 0x594c00
// 00594c29  5d                   pop ebp
// 00594c2a  85ff                 test edi, edi
// 00594c2c  7419                 je 0x594c47
// 00594c2e  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 00594c34  57                   push edi
// 00594c35  53                   push ebx
// 00594c36  56                   push esi
// 00594c37  e8c440ffff           call 0x588d00
// 00594c3c  57                   push edi
// 00594c3d  53                   push ebx
// 00594c3e  56                   push esi
// 00594c3f  e87cccfeff           call 0x5818c0
// 00594c44  83c418               add esp, 0x18
// 00594c47  56                   push esi
// 00594c48  e863eeffff           call 0x593ab0
// 00594c4d  83c404               add esp, 4
// 00594c50  85c0                 test eax, eax
// 00594c52  744e                 je 0x594ca2
// 00594c54  8a861c010000         mov al, byte ptr [esi + 0x11c]
// 00594c5a  2420                 and al, 0x20
// 00594c5c  7409                 je 0x594c67
// 00594c5e  f7466c00020000       test dword ptr [esi + 0x6c], 0x200
// 00594c65  740d                 je 0x594c74
// 00594c67  84c0                 test al, al
// 00594c69  7520                 jne 0x594c8b
// 00594c6b  f7466c00040000       test dword ptr [esi + 0x6c], 0x400
// 00594c72  7417                 je 0x594c8b
// 00594c74  6820218d00           push 0x8d2120
// 00594c79  56                   push esi
// 00594c7a  e84196ffff           call 0x58e2c0
// 00594c7f  83c408               add esp, 8
// 00594c82  5f                   pop edi
// 00594c83  5e                   pop esi
// 00594c84  b801000000           mov eax, 1
// 00594c89  5b                   pop ebx
// 00594c8a  c3                   ret 
// 00594c8b  6820218d00           push 0x8d2120
// 00594c90  56                   push esi
// 00594c91  e8da95ffff           call 0x58e270
// 00594c96  83c408               add esp, 8
// 00594c99  5f                   pop edi
// 00594c9a  5e                   pop esi
// 00594c9b  b801000000           mov eax, 1
// 00594ca0  5b                   pop ebx
// 00594ca1  c3                   ret 
// 00594ca2  5f                   pop edi
// 00594ca3  5e                   pop esi
// 00594ca4  33c0                 xor eax, eax
// 00594ca6  5b                   pop ebx
// 00594ca7  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_finish)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
