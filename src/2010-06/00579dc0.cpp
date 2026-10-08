// from server: 100% by auto
// roc 2010-06 00579dc0  unit: seg_00570000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00579dc0
//
// 00579dc0  83ec0c               sub esp, 0xc
// 00579dc3  53                   push ebx
// 00579dc4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00579dc8  56                   push esi
// 00579dc9  8b742418             mov esi, dword ptr [esp + 0x18]
// 00579dcd  8b4668               mov eax, dword ptr [esi + 0x68]
// 00579dd0  a801                 test al, 1
// 00579dd2  7534                 jne 0x579e08
// 00579dd4  68cc75a200           push 0xa275cc
// 00579dd9  56                   push esi
// 00579dda  e8d17cffff           call 0x571ab0
// 00579ddf  83c408               add esp, 8
// 00579de2  57                   push edi
// 00579de3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00579de7  83ff09               cmp edi, 9
// 00579dea  7468                 je 0x579e54
// 00579dec  68b075a200           push 0xa275b0
// 00579df1  56                   push esi
// 00579df2  e8697dffff           call 0x571b60
// 00579df7  57                   push edi
// 00579df8  56                   push esi
// 00579df9  e812e7ffff           call 0x578510
// 00579dfe  83c410               add esp, 0x10
// 00579e01  5f                   pop edi
// 00579e02  5e                   pop esi
// 00579e03  5b                   pop ebx
// 00579e04  83c40c               add esp, 0xc
// 00579e07  c3                   ret 
// 00579e08  a804                 test al, 4
// 00579e0a  741f                 je 0x579e2b
// 00579e0c  689875a200           push 0xa27598
// 00579e11  56                   push esi
// 00579e12  e8497dffff           call 0x571b60
// 00579e17  8b442428             mov eax, dword ptr [esp + 0x28]
// 00579e1b  50                   push eax
// 00579e1c  56                   push esi
// 00579e1d  e8eee6ffff           call 0x578510
// 00579e22  83c410               add esp, 0x10
// 00579e25  5e                   pop esi
// 00579e26  5b                   pop ebx
// 00579e27  83c40c               add esp, 0xc
// 00579e2a  c3                   ret 
// 00579e2b  85db                 test ebx, ebx
// 00579e2d  74b3                 je 0x579de2
// 00579e2f  f6430880             test byte ptr [ebx + 8], 0x80
// 00579e33  74ad                 je 0x579de2
// 00579e35  688075a200           push 0xa27580
// 00579e3a  56                   push esi
// 00579e3b  e8207dffff           call 0x571b60
// 00579e40  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00579e44  51                   push ecx
// 00579e45  56                   push esi
// 00579e46  e8c5e6ffff           call 0x578510
// 00579e4b  83c410               add esp, 0x10
// 00579e4e  5e                   pop esi
// 00579e4f  5b                   pop ebx
// 00579e50  83c40c               add esp, 0xc
// 00579e53  c3                   ret 
// 00579e54  6a09                 push 9
// 00579e56  8d542410             lea edx, [esp + 0x10]
// 00579e5a  52                   push edx
// 00579e5b  56                   push esi
// 00579e5c  e8af25ffff           call 0x56c410
// 00579e61  6a09                 push 9
// 00579e63  8d44241c             lea eax, [esp + 0x1c]
// 00579e67  50                   push eax
// 00579e68  56                   push esi
// 00579e69  e872b1feff           call 0x564fe0
// 00579e6e  6a00                 push 0
// 00579e70  56                   push esi
// 00579e71  e89ae6ffff           call 0x578510
// 00579e76  83c420               add esp, 0x20
// 00579e79  85c0                 test eax, eax
// 00579e7b  7558                 jne 0x579ed5
// 00579e7d  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 00579e82  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 00579e87  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 00579e8c  51                   push ecx
// 00579e8d  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 00579e92  c1e208               shl edx, 8
// 00579e95  03d0                 add edx, eax
// 00579e97  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 00579e9c  c1e208               shl edx, 8
// 00579e9f  03d1                 add edx, ecx
// 00579ea1  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 00579ea6  c1e208               shl edx, 8
// 00579ea9  03d0                 add edx, eax
// 00579eab  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 00579eb0  52                   push edx
// 00579eb1  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 00579eb6  c1e108               shl ecx, 8
// 00579eb9  03ca                 add ecx, edx
// 00579ebb  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 00579ec0  c1e108               shl ecx, 8
// 00579ec3  03c8                 add ecx, eax
// 00579ec5  c1e108               shl ecx, 8
// 00579ec8  03ca                 add ecx, edx
// 00579eca  51                   push ecx
// 00579ecb  53                   push ebx
// 00579ecc  56                   push esi
// 00579ecd  e86ea5feff           call 0x564440
// 00579ed2  83c414               add esp, 0x14
// 00579ed5  5f                   pop edi
// 00579ed6  5e                   pop esi
// 00579ed7  5b                   pop ebx
// 00579ed8  83c40c               add esp, 0xc
// 00579edb  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
