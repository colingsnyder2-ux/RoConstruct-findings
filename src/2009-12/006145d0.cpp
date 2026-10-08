// roc 2009-12 006145d0  unit: seg_00610000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006145d0
//
// 006145d0  56                   push esi
// 006145d1  8b742408             mov esi, dword ptr [esp + 8]
// 006145d5  57                   push edi
// 006145d6  8bbe90010000         mov edi, dword ptr [esi + 0x190]
// 006145dc  807f1100             cmp byte ptr [edi + 0x11], 0
// 006145e0  7408                 je 0x6145ea
// 006145e2  5f                   pop edi
// 006145e3  b802000000           mov eax, 2
// 006145e8  5e                   pop esi
// 006145e9  c3                   ret 
// 006145ea  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 006145f0  8b4804               mov ecx, dword ptr [eax + 4]
// 006145f3  53                   push ebx
// 006145f4  56                   push esi
// 006145f5  ffd1                 call ecx
// 006145f7  83c404               add esp, 4
// 006145fa  8bd8                 mov ebx, eax
// 006145fc  83e801               sub eax, 1
// 006145ff  7449                 je 0x61464a
// 00614601  83e801               sub eax, 1
// 00614604  757b                 jne 0x614681
// 00614606  c6471101             mov byte ptr [edi + 0x11], 1
// 0061460a  384714               cmp byte ptr [edi + 0x14], al
// 0061460d  7424                 je 0x614633
// 0061460f  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00614615  38420d               cmp byte ptr [edx + 0xd], al
// 00614618  7467                 je 0x614681
// 0061461a  8b06                 mov eax, dword ptr [esi]
// 0061461c  c740143b000000       mov dword ptr [eax + 0x14], 0x3b
// 00614623  8b0e                 mov ecx, dword ptr [esi]
// 00614625  8b11                 mov edx, dword ptr [ecx]
// 00614627  56                   push esi
// 00614628  ffd2                 call edx
// 0061462a  83c404               add esp, 4
// 0061462d  8bc3                 mov eax, ebx
// 0061462f  5b                   pop ebx
// 00614630  5f                   pop edi
// 00614631  5e                   pop esi
// 00614632  c3                   ret 
// 00614633  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00614636  398684000000         cmp dword ptr [esi + 0x84], eax
// 0061463c  7e43                 jle 0x614681
// 0061463e  898684000000         mov dword ptr [esi + 0x84], eax
// 00614644  8bc3                 mov eax, ebx
// 00614646  5b                   pop ebx
// 00614647  5f                   pop edi
// 00614648  5e                   pop esi
// 00614649  c3                   ret 
// 0061464a  807f1400             cmp byte ptr [edi + 0x14], 0
// 0061464e  740f                 je 0x61465f
// 00614650  e8fbfaffff           call 0x614150
// 00614655  8bc3                 mov eax, ebx
// 00614657  5b                   pop ebx
// 00614658  c6471400             mov byte ptr [edi + 0x14], 0
// 0061465c  5f                   pop edi
// 0061465d  5e                   pop esi
// 0061465e  c3                   ret 
// 0061465f  807f1000             cmp byte ptr [edi + 0x10], 0
// 00614663  7513                 jne 0x614678
// 00614665  8b06                 mov eax, dword ptr [esi]
// 00614667  c7401423000000       mov dword ptr [eax + 0x14], 0x23
// 0061466e  8b0e                 mov ecx, dword ptr [esi]
// 00614670  8b11                 mov edx, dword ptr [ecx]
// 00614672  56                   push esi
// 00614673  ffd2                 call edx
// 00614675  83c404               add esp, 4
// 00614678  56                   push esi
// 00614679  e812ffffff           call 0x614590
// 0061467e  83c404               add esp, 4
// 00614681  8bc3                 mov eax, ebx
// 00614683  5b                   pop ebx
// 00614684  5f                   pop edi
// 00614685  5e                   pop esi
// 00614686  c3                   ret 
// library jpeg-6b/jdinput.c (function _consume_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
