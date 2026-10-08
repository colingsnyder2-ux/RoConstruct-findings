// from server: 100% by auto
// roc 2010-06 00578510  unit: seg_00570000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00578510
//
// 00578510  53                   push ebx
// 00578511  56                   push esi
// 00578512  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00578516  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0057851c  57                   push edi
// 0057851d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00578521  89442410             mov dword ptr [esp + 0x10], eax
// 00578525  3bf8                 cmp edi, eax
// 00578527  7631                 jbe 0x57855a
// 00578529  55                   push ebp
// 0057852a  8d9b00000000         lea ebx, [ebx]
// 00578530  8b9eb0000000         mov ebx, dword ptr [esi + 0xb0]
// 00578536  8baeac000000         mov ebp, dword ptr [esi + 0xac]
// 0057853c  53                   push ebx
// 0057853d  55                   push ebp
// 0057853e  56                   push esi
// 0057853f  e8cc3effff           call 0x56c410
// 00578544  53                   push ebx
// 00578545  55                   push ebp
// 00578546  56                   push esi
// 00578547  e894cafeff           call 0x564fe0
// 0057854c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00578550  2bf8                 sub edi, eax
// 00578552  83c418               add esp, 0x18
// 00578555  3bf8                 cmp edi, eax
// 00578557  77d7                 ja 0x578530
// 00578559  5d                   pop ebp
// 0057855a  85ff                 test edi, edi
// 0057855c  7419                 je 0x578577
// 0057855e  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 00578564  57                   push edi
// 00578565  53                   push ebx
// 00578566  56                   push esi
// 00578567  e8a43effff           call 0x56c410
// 0057856c  57                   push edi
// 0057856d  53                   push ebx
// 0057856e  56                   push esi
// 0057856f  e86ccafeff           call 0x564fe0
// 00578574  83c418               add esp, 0x18
// 00578577  56                   push esi
// 00578578  e863eeffff           call 0x5773e0
// 0057857d  83c404               add esp, 4
// 00578580  85c0                 test eax, eax
// 00578582  744e                 je 0x5785d2
// 00578584  8a861c010000         mov al, byte ptr [esi + 0x11c]
// 0057858a  2420                 and al, 0x20
// 0057858c  7409                 je 0x578597
// 0057858e  f7466c00020000       test dword ptr [esi + 0x6c], 0x200
// 00578595  740d                 je 0x5785a4
// 00578597  84c0                 test al, al
// 00578599  7520                 jne 0x5785bb
// 0057859b  f7466c00040000       test dword ptr [esi + 0x6c], 0x400
// 005785a2  7417                 je 0x5785bb
// 005785a4  68286da200           push 0xa26d28
// 005785a9  56                   push esi
// 005785aa  e86196ffff           call 0x571c10
// 005785af  83c408               add esp, 8
// 005785b2  5f                   pop edi
// 005785b3  5e                   pop esi
// 005785b4  b801000000           mov eax, 1
// 005785b9  5b                   pop ebx
// 005785ba  c3                   ret 
// 005785bb  68286da200           push 0xa26d28
// 005785c0  56                   push esi
// 005785c1  e8fa95ffff           call 0x571bc0
// 005785c6  83c408               add esp, 8
// 005785c9  5f                   pop edi
// 005785ca  5e                   pop esi
// 005785cb  b801000000           mov eax, 1
// 005785d0  5b                   pop ebx
// 005785d1  c3                   ret 
// 005785d2  5f                   pop edi
// 005785d3  5e                   pop esi
// 005785d4  33c0                 xor eax, eax
// 005785d6  5b                   pop ebx
// 005785d7  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_crc_finish)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
