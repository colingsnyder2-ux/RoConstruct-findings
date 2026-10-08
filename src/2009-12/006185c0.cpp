// roc 2009-12 006185c0  unit: seg_00610000  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006185c0
//
// 006185c0  83ec0c               sub esp, 0xc
// 006185c3  53                   push ebx
// 006185c4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006185c8  56                   push esi
// 006185c9  8b742418             mov esi, dword ptr [esp + 0x18]
// 006185cd  8b4668               mov eax, dword ptr [esi + 0x68]
// 006185d0  a801                 test al, 1
// 006185d2  7534                 jne 0x618608
// 006185d4  68bc989c00           push 0x9c98bc
// 006185d9  56                   push esi
// 006185da  e8b17bffff           call 0x610190
// 006185df  83c408               add esp, 8
// 006185e2  57                   push edi
// 006185e3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006185e7  83ff09               cmp edi, 9
// 006185ea  746b                 je 0x618657
// 006185ec  68a0989c00           push 0x9c98a0
// 006185f1  56                   push esi
// 006185f2  e8497cffff           call 0x610240
// 006185f7  57                   push edi
// 006185f8  56                   push esi
// 006185f9  e8f2e5ffff           call 0x616bf0
// 006185fe  83c410               add esp, 0x10
// 00618601  5f                   pop edi
// 00618602  5e                   pop esi
// 00618603  5b                   pop ebx
// 00618604  83c40c               add esp, 0xc
// 00618607  c3                   ret 
// 00618608  a804                 test al, 4
// 0061860a  741f                 je 0x61862b
// 0061860c  6888989c00           push 0x9c9888
// 00618611  56                   push esi
// 00618612  e8297cffff           call 0x610240
// 00618617  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061861b  50                   push eax
// 0061861c  56                   push esi
// 0061861d  e8cee5ffff           call 0x616bf0
// 00618622  83c410               add esp, 0x10
// 00618625  5e                   pop esi
// 00618626  5b                   pop ebx
// 00618627  83c40c               add esp, 0xc
// 0061862a  c3                   ret 
// 0061862b  85db                 test ebx, ebx
// 0061862d  74b3                 je 0x6185e2
// 0061862f  f7430800010000       test dword ptr [ebx + 8], 0x100
// 00618636  74aa                 je 0x6185e2
// 00618638  6870989c00           push 0x9c9870
// 0061863d  56                   push esi
// 0061863e  e8fd7bffff           call 0x610240
// 00618643  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00618647  51                   push ecx
// 00618648  56                   push esi
// 00618649  e8a2e5ffff           call 0x616bf0
// 0061864e  83c410               add esp, 0x10
// 00618651  5e                   pop esi
// 00618652  5b                   pop ebx
// 00618653  83c40c               add esp, 0xc
// 00618656  c3                   ret 
// 00618657  6a09                 push 9
// 00618659  8d542410             lea edx, [esp + 0x10]
// 0061865d  52                   push edx
// 0061865e  56                   push esi
// 0061865f  e82c24ffff           call 0x60aa90
// 00618664  6a09                 push 9
// 00618666  8d44241c             lea eax, [esp + 0x1c]
// 0061866a  50                   push eax
// 0061866b  56                   push esi
// 0061866c  e8ffaffeff           call 0x603670
// 00618671  6a00                 push 0
// 00618673  56                   push esi
// 00618674  e877e5ffff           call 0x616bf0
// 00618679  83c420               add esp, 0x20
// 0061867c  85c0                 test eax, eax
// 0061867e  7558                 jne 0x6186d8
// 00618680  0fb64c2414           movzx ecx, byte ptr [esp + 0x14]
// 00618685  0fb6542410           movzx edx, byte ptr [esp + 0x10]
// 0061868a  0fb6442411           movzx eax, byte ptr [esp + 0x11]
// 0061868f  51                   push ecx
// 00618690  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 00618695  c1e208               shl edx, 8
// 00618698  03d0                 add edx, eax
// 0061869a  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 0061869f  c1e208               shl edx, 8
// 006186a2  03d1                 add edx, ecx
// 006186a4  0fb64c2410           movzx ecx, byte ptr [esp + 0x10]
// 006186a9  c1e208               shl edx, 8
// 006186ac  03d0                 add edx, eax
// 006186ae  0fb6442412           movzx eax, byte ptr [esp + 0x12]
// 006186b3  52                   push edx
// 006186b4  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 006186b9  c1e108               shl ecx, 8
// 006186bc  03ca                 add ecx, edx
// 006186be  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 006186c3  c1e108               shl ecx, 8
// 006186c6  03c8                 add ecx, eax
// 006186c8  c1e108               shl ecx, 8
// 006186cb  03ca                 add ecx, edx
// 006186cd  51                   push ecx
// 006186ce  53                   push ebx
// 006186cf  56                   push esi
// 006186d0  e8eba1feff           call 0x6028c0
// 006186d5  83c414               add esp, 0x14
// 006186d8  5f                   pop edi
// 006186d9  5e                   pop esi
// 006186da  5b                   pop ebx
// 006186db  83c40c               add esp, 0xc
// 006186de  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_oFFs)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
