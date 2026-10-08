// roc 2009-12 006184a0  unit: seg_00610000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006184a0
//
// 006184a0  83ec0c               sub esp, 0xc
// 006184a3  53                   push ebx
// 006184a4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006184a8  56                   push esi
// 006184a9  8b742418             mov esi, dword ptr [esp + 0x18]
// 006184ad  8b4668               mov eax, dword ptr [esi + 0x68]
// 006184b0  a801                 test al, 1
// 006184b2  7534                 jne 0x6184e8
// 006184b4  6854989c00           push 0x9c9854
// 006184b9  56                   push esi
// 006184ba  e8d17cffff           call 0x610190
// 006184bf  83c408               add esp, 8
// 006184c2  57                   push edi
// 006184c3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006184c7  83ff09               cmp edi, 9
// 006184ca  7468                 je 0x618534
// 006184cc  6838989c00           push 0x9c9838
// 006184d1  56                   push esi
// 006184d2  e8697dffff           call 0x610240
// 006184d7  57                   push edi
// 006184d8  56                   push esi
// 006184d9  e812e7ffff           call 0x616bf0
// 006184de  83c410               add esp, 0x10
// 006184e1  5f                   pop edi
// 006184e2  5e                   pop esi
// 006184e3  5b                   pop ebx
// 006184e4  83c40c               add esp, 0xc
// 006184e7  c3                   ret 
// 006184e8  a804                 test al, 4
// 006184ea  741f                 je 0x61850b
// 006184ec  6820989c00           push 0x9c9820
// 006184f1  56                   push esi
// 006184f2  e8497dffff           call 0x610240
// 006184f7  8b442428             mov eax, dword ptr [esp + 0x28]
// 006184fb  50                   push eax
// 006184fc  56                   push esi
// 006184fd  e8eee6ffff           call 0x616bf0
// 00618502  83c410               add esp, 0x10
// 00618505  5e                   pop esi
// 00618506  5b                   pop ebx
// 00618507  83c40c               add esp, 0xc
// 0061850a  c3                   ret 
// 0061850b  85db                 test ebx, ebx
// 0061850d  74b3                 je 0x6184c2
// 0061850f  f6430880             test byte ptr [ebx + 8], 0x80
// 00618513  74ad                 je 0x6184c2
// 00618515  6808989c00           push 0x9c9808
// 0061851a  56                   push esi
// 0061851b  e8207dffff           call 0x610240
// 00618520  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00618524  51                   push ecx
// 00618525  56                   push esi
// 00618526  e8c5e6ffff           call 0x616bf0
// 0061852b  83c410               add esp, 0x10
// 0061852e  5e                   pop esi
// 0061852f  5b                   pop ebx
// 00618530  83c40c               add esp, 0xc
// 00618533  c3                   ret 
// 00618534  6a09                 push 9
// 00618536  8d542410             lea edx, [esp + 0x10]
// 0061853a  52                   push edx
// 0061853b  56                   push esi
// 0061853c  e84f25ffff           call 0x60aa90
// 00618541  6a09                 push 9
// 00618543  8d44241c             lea eax, [esp + 0x1c]
// 00618547  50                   push eax
// 00618548  56                   push esi
// 00618549  e822b1feff           call 0x603670
// 0061854e  6a00                 push 0
// 00618550  56                   push esi
// 00618551  e89ae6ffff           call 0x616bf0
// 00618556  83c420               add esp, 0x20
// 00618559  85c0                 test eax, eax
// 0061855b  7558                 jne 0x6185b5
// 0061855d  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 00618562  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 00618567  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 0061856c  51                   push ecx
// 0061856d  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 00618572  c1e208               shl edx, 8
// 00618575  03d0                 add edx, eax
// 00618577  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 0061857c  c1e208               shl edx, 8
// 0061857f  03d1                 add edx, ecx
// 00618581  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 00618586  c1e208               shl edx, 8
// 00618589  03d0                 add edx, eax
// 0061858b  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 00618590  52                   push edx
// 00618591  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 00618596  c1e108               shl ecx, 8
// 00618599  03ca                 add ecx, edx
// 0061859b  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 006185a0  c1e108               shl ecx, 8
// 006185a3  03c8                 add ecx, eax
// 006185a5  c1e108               shl ecx, 8
// 006185a8  03ca                 add ecx, edx
// 006185aa  51                   push ecx
// 006185ab  53                   push ebx
// 006185ac  56                   push esi
// 006185ad  e81ea5feff           call 0x602ad0
// 006185b2  83c414               add esp, 0x14
// 006185b5  5f                   pop edi
// 006185b6  5e                   pop esi
// 006185b7  5b                   pop ebx
// 006185b8  83c40c               add esp, 0xc
// 006185bb  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_pHYs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
