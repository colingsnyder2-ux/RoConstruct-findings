// roc 2009-06 005890b0  unit: seg_00580000  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005890b0
//
// 005890b0  56                   push esi
// 005890b1  8b742408             mov esi, dword ptr [esp + 8]
// 005890b5  837e1465             cmp dword ptr [esi + 0x14], 0x65
// 005890b9  741b                 je 0x5890d6
// 005890bb  8b06                 mov eax, dword ptr [esi]
// 005890bd  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005890c4  8b0e                 mov ecx, dword ptr [esi]
// 005890c6  8b5614               mov edx, dword ptr [esi + 0x14]
// 005890c9  895118               mov dword ptr [ecx + 0x18], edx
// 005890cc  8b06                 mov eax, dword ptr [esi]
// 005890ce  8b08                 mov ecx, dword ptr [eax]
// 005890d0  56                   push esi
// 005890d1  ffd1                 call ecx
// 005890d3  83c404               add esp, 4
// 005890d6  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 005890dc  3b5620               cmp edx, dword ptr [esi + 0x20]
// 005890df  7216                 jb 0x5890f7
// 005890e1  8b06                 mov eax, dword ptr [esi]
// 005890e3  c740147b000000       mov dword ptr [eax + 0x14], 0x7b
// 005890ea  8b0e                 mov ecx, dword ptr [esi]
// 005890ec  8b5104               mov edx, dword ptr [ecx + 4]
// 005890ef  6aff                 push -1
// 005890f1  56                   push esi
// 005890f2  ffd2                 call edx
// 005890f4  83c408               add esp, 8
// 005890f7  8b4608               mov eax, dword ptr [esi + 8]
// 005890fa  85c0                 test eax, eax
// 005890fc  741d                 je 0x58911b
// 005890fe  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00589104  894804               mov dword ptr [eax + 4], ecx
// 00589107  8b5608               mov edx, dword ptr [esi + 8]
// 0058910a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0058910d  894208               mov dword ptr [edx + 8], eax
// 00589110  8b4e08               mov ecx, dword ptr [esi + 8]
// 00589113  8b11                 mov edx, dword ptr [ecx]
// 00589115  56                   push esi
// 00589116  ffd2                 call edx
// 00589118  83c404               add esp, 4
// 0058911b  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00589121  80780c00             cmp byte ptr [eax + 0xc], 0
// 00589125  7409                 je 0x589130
// 00589127  8b4004               mov eax, dword ptr [eax + 4]
// 0058912a  56                   push esi
// 0058912b  ffd0                 call eax
// 0058912d  83c404               add esp, 4
// 00589130  8b4620               mov eax, dword ptr [esi + 0x20]
// 00589133  2b86d0000000         sub eax, dword ptr [esi + 0xd0]
// 00589139  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058913d  3bc8                 cmp ecx, eax
// 0058913f  7602                 jbe 0x589143
// 00589141  8bc8                 mov ecx, eax
// 00589143  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 00589149  51                   push ecx
// 0058914a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058914e  8d44240c             lea eax, [esp + 0xc]
// 00589152  50                   push eax
// 00589153  51                   push ecx
// 00589154  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0058915c  8b5204               mov edx, dword ptr [edx + 4]
// 0058915f  56                   push esi
// 00589160  ffd2                 call edx
// 00589162  8b442418             mov eax, dword ptr [esp + 0x18]
// 00589166  0186d0000000         add dword ptr [esi + 0xd0], eax
// 0058916c  83c410               add esp, 0x10
// 0058916f  5e                   pop esi
// 00589170  c3                   ret 
// library jpeg-6b/jcapistd.c (function _jpeg_write_scanlines)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapistd.c
