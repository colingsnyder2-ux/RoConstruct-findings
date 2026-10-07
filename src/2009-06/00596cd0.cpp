// roc 2009-06 00596cd0  unit: seg_00590000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00596cd0
//
// 00596cd0  53                   push ebx
// 00596cd1  56                   push esi
// 00596cd2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00596cd6  f6466801             test byte ptr [esi + 0x68], 1
// 00596cda  57                   push edi
// 00596cdb  750e                 jne 0x596ceb
// 00596cdd  68c82c8d00           push 0x8d2cc8
// 00596ce2  56                   push esi
// 00596ce3  e87874ffff           call 0x58e160
// 00596ce8  83c408               add esp, 8
// 00596ceb  8b4668               mov eax, dword ptr [esi + 0x68]
// 00596cee  a804                 test al, 4
// 00596cf0  7406                 je 0x596cf8
// 00596cf2  83c808               or eax, 8
// 00596cf5  894668               mov dword ptr [esi + 0x68], eax
// 00596cf8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00596cfc  8d4701               lea eax, [edi + 1]
// 00596cff  50                   push eax
// 00596d00  56                   push esi
// 00596d01  e8da7fffff           call 0x58ece0
// 00596d06  8bd8                 mov ebx, eax
// 00596d08  83c408               add esp, 8
// 00596d0b  85db                 test ebx, ebx
// 00596d0d  7512                 jne 0x596d21
// 00596d0f  68a42c8d00           push 0x8d2ca4
// 00596d14  56                   push esi
// 00596d15  e8f674ffff           call 0x58e210
// 00596d1a  83c408               add esp, 8
// 00596d1d  5f                   pop edi
// 00596d1e  5e                   pop esi
// 00596d1f  5b                   pop ebx
// 00596d20  c3                   ret 
// 00596d21  57                   push edi
// 00596d22  53                   push ebx
// 00596d23  56                   push esi
// 00596d24  e8d71fffff           call 0x588d00
// 00596d29  57                   push edi
// 00596d2a  53                   push ebx
// 00596d2b  56                   push esi
// 00596d2c  e88fabfeff           call 0x5818c0
// 00596d31  6a00                 push 0
// 00596d33  56                   push esi
// 00596d34  e8a7deffff           call 0x594be0
// 00596d39  83c420               add esp, 0x20
// 00596d3c  85c0                 test eax, eax
// 00596d3e  740e                 je 0x596d4e
// 00596d40  53                   push ebx
// 00596d41  56                   push esi
// 00596d42  e8697fffff           call 0x58ecb0
// 00596d47  83c408               add esp, 8
// 00596d4a  5f                   pop edi
// 00596d4b  5e                   pop esi
// 00596d4c  5b                   pop ebx
// 00596d4d  c3                   ret 
// 00596d4e  8d043b               lea eax, [ebx + edi]
// 00596d51  c60000               mov byte ptr [eax], 0
// 00596d54  803b00               cmp byte ptr [ebx], 0
// 00596d57  55                   push ebp
// 00596d58  8beb                 mov ebp, ebx
// 00596d5a  740b                 je 0x596d67
// 00596d5c  8d642400             lea esp, [esp]
// 00596d60  45                   inc ebp
// 00596d61  807d0000             cmp byte ptr [ebp], 0
// 00596d65  75f9                 jne 0x596d60
// 00596d67  3be8                 cmp ebp, eax
// 00596d69  7401                 je 0x596d6c
// 00596d6b  45                   inc ebp
// 00596d6c  6a10                 push 0x10
// 00596d6e  56                   push esi
// 00596d6f  e86c7fffff           call 0x58ece0
// 00596d74  8bf8                 mov edi, eax
// 00596d76  83c408               add esp, 8
// 00596d79  85ff                 test edi, edi
// 00596d7b  751a                 jne 0x596d97
// 00596d7d  68782c8d00           push 0x8d2c78
// 00596d82  56                   push esi
// 00596d83  e88874ffff           call 0x58e210
// 00596d88  53                   push ebx
// 00596d89  56                   push esi
// 00596d8a  e8217fffff           call 0x58ecb0
// 00596d8f  83c410               add esp, 0x10
// 00596d92  5d                   pop ebp
// 00596d93  5f                   pop edi
// 00596d94  5e                   pop esi
// 00596d95  5b                   pop ebx
// 00596d96  c3                   ret 
// 00596d97  8bc5                 mov eax, ebp
// 00596d99  c707ffffffff         mov dword ptr [edi], 0xffffffff
// 00596d9f  895f04               mov dword ptr [edi + 4], ebx
// 00596da2  896f08               mov dword ptr [edi + 8], ebp
// 00596da5  8d5001               lea edx, [eax + 1]
// 00596da8  8a08                 mov cl, byte ptr [eax]
// 00596daa  40                   inc eax
// 00596dab  84c9                 test cl, cl
// 00596dad  75f9                 jne 0x596da8
// 00596daf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00596db3  6a01                 push 1
// 00596db5  57                   push edi
// 00596db6  51                   push ecx
// 00596db7  2bc2                 sub eax, edx
// 00596db9  56                   push esi
// 00596dba  89470c               mov dword ptr [edi + 0xc], eax
// 00596dbd  e84ea2feff           call 0x581010
// 00596dc2  53                   push ebx
// 00596dc3  56                   push esi
// 00596dc4  8be8                 mov ebp, eax
// 00596dc6  e8e57effff           call 0x58ecb0
// 00596dcb  57                   push edi
// 00596dcc  56                   push esi
// 00596dcd  e8de7effff           call 0x58ecb0
// 00596dd2  83c420               add esp, 0x20
// 00596dd5  85ed                 test ebp, ebp
// 00596dd7  740e                 je 0x596de7
// 00596dd9  684c2c8d00           push 0x8d2c4c
// 00596dde  56                   push esi
// 00596ddf  e82c74ffff           call 0x58e210
// 00596de4  83c408               add esp, 8
// 00596de7  5d                   pop ebp
// 00596de8  5f                   pop edi
// 00596de9  5e                   pop esi
// 00596dea  5b                   pop ebx
// 00596deb  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_tEXt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
