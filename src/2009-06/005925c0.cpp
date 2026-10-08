// from server: 100% by auto
// roc 2009-06 005925c0  unit: seg_00590000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005925c0
//
// 005925c0  56                   push esi
// 005925c1  8b742408             mov esi, dword ptr [esp + 8]
// 005925c5  57                   push edi
// 005925c6  8bbe90010000         mov edi, dword ptr [esi + 0x190]
// 005925cc  807f1100             cmp byte ptr [edi + 0x11], 0
// 005925d0  7408                 je 0x5925da
// 005925d2  5f                   pop edi
// 005925d3  b802000000           mov eax, 2
// 005925d8  5e                   pop esi
// 005925d9  c3                   ret 
// 005925da  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005925e0  8b4804               mov ecx, dword ptr [eax + 4]
// 005925e3  53                   push ebx
// 005925e4  56                   push esi
// 005925e5  ffd1                 call ecx
// 005925e7  83c404               add esp, 4
// 005925ea  8bd8                 mov ebx, eax
// 005925ec  83e801               sub eax, 1
// 005925ef  7449                 je 0x59263a
// 005925f1  83e801               sub eax, 1
// 005925f4  757b                 jne 0x592671
// 005925f6  c6471101             mov byte ptr [edi + 0x11], 1
// 005925fa  384714               cmp byte ptr [edi + 0x14], al
// 005925fd  7424                 je 0x592623
// 005925ff  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00592605  38420d               cmp byte ptr [edx + 0xd], al
// 00592608  7467                 je 0x592671
// 0059260a  8b06                 mov eax, dword ptr [esi]
// 0059260c  c740143b000000       mov dword ptr [eax + 0x14], 0x3b
// 00592613  8b0e                 mov ecx, dword ptr [esi]
// 00592615  8b11                 mov edx, dword ptr [ecx]
// 00592617  56                   push esi
// 00592618  ffd2                 call edx
// 0059261a  83c404               add esp, 4
// 0059261d  8bc3                 mov eax, ebx
// 0059261f  5b                   pop ebx
// 00592620  5f                   pop edi
// 00592621  5e                   pop esi
// 00592622  c3                   ret 
// 00592623  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00592626  398684000000         cmp dword ptr [esi + 0x84], eax
// 0059262c  7e43                 jle 0x592671
// 0059262e  898684000000         mov dword ptr [esi + 0x84], eax
// 00592634  8bc3                 mov eax, ebx
// 00592636  5b                   pop ebx
// 00592637  5f                   pop edi
// 00592638  5e                   pop esi
// 00592639  c3                   ret 
// 0059263a  807f1400             cmp byte ptr [edi + 0x14], 0
// 0059263e  740f                 je 0x59264f
// 00592640  e8fbfaffff           call 0x592140
// 00592645  8bc3                 mov eax, ebx
// 00592647  5b                   pop ebx
// 00592648  c6471400             mov byte ptr [edi + 0x14], 0
// 0059264c  5f                   pop edi
// 0059264d  5e                   pop esi
// 0059264e  c3                   ret 
// 0059264f  807f1000             cmp byte ptr [edi + 0x10], 0
// 00592653  7513                 jne 0x592668
// 00592655  8b06                 mov eax, dword ptr [esi]
// 00592657  c7401423000000       mov dword ptr [eax + 0x14], 0x23
// 0059265e  8b0e                 mov ecx, dword ptr [esi]
// 00592660  8b11                 mov edx, dword ptr [ecx]
// 00592662  56                   push esi
// 00592663  ffd2                 call edx
// 00592665  83c404               add esp, 4
// 00592668  56                   push esi
// 00592669  e812ffffff           call 0x592580
// 0059266e  83c404               add esp, 4
// 00592671  8bc3                 mov eax, ebx
// 00592673  5b                   pop ebx
// 00592674  5f                   pop edi
// 00592675  5e                   pop esi
// 00592676  c3                   ret 
// library jpeg-6b/jdinput.c (function _consume_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
