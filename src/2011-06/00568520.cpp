// roc 2011-06 00568520  unit: seg_00560000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00568520
//
// 00568520  56                   push esi
// 00568521  8b742408             mov esi, dword ptr [esp + 8]
// 00568525  57                   push edi
// 00568526  8bbe90010000         mov edi, dword ptr [esi + 0x190]
// 0056852c  807f1100             cmp byte ptr [edi + 0x11], 0
// 00568530  7408                 je 0x56853a
// 00568532  5f                   pop edi
// 00568533  b802000000           mov eax, 2
// 00568538  5e                   pop esi
// 00568539  c3                   ret 
// 0056853a  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00568540  8b4804               mov ecx, dword ptr [eax + 4]
// 00568543  53                   push ebx
// 00568544  56                   push esi
// 00568545  ffd1                 call ecx
// 00568547  83c404               add esp, 4
// 0056854a  8bd8                 mov ebx, eax
// 0056854c  83e801               sub eax, 1
// 0056854f  7449                 je 0x56859a
// 00568551  83e801               sub eax, 1
// 00568554  757b                 jne 0x5685d1
// 00568556  c6471101             mov byte ptr [edi + 0x11], 1
// 0056855a  384714               cmp byte ptr [edi + 0x14], al
// 0056855d  7424                 je 0x568583
// 0056855f  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00568565  38420d               cmp byte ptr [edx + 0xd], al
// 00568568  7467                 je 0x5685d1
// 0056856a  8b06                 mov eax, dword ptr [esi]
// 0056856c  c740143b000000       mov dword ptr [eax + 0x14], 0x3b
// 00568573  8b0e                 mov ecx, dword ptr [esi]
// 00568575  8b11                 mov edx, dword ptr [ecx]
// 00568577  56                   push esi
// 00568578  ffd2                 call edx
// 0056857a  83c404               add esp, 4
// 0056857d  8bc3                 mov eax, ebx
// 0056857f  5b                   pop ebx
// 00568580  5f                   pop edi
// 00568581  5e                   pop esi
// 00568582  c3                   ret 
// 00568583  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00568586  398684000000         cmp dword ptr [esi + 0x84], eax
// 0056858c  7e43                 jle 0x5685d1
// 0056858e  898684000000         mov dword ptr [esi + 0x84], eax
// 00568594  8bc3                 mov eax, ebx
// 00568596  5b                   pop ebx
// 00568597  5f                   pop edi
// 00568598  5e                   pop esi
// 00568599  c3                   ret 
// 0056859a  807f1400             cmp byte ptr [edi + 0x14], 0
// 0056859e  740f                 je 0x5685af
// 005685a0  e8fbfaffff           call 0x5680a0
// 005685a5  8bc3                 mov eax, ebx
// 005685a7  5b                   pop ebx
// 005685a8  c6471400             mov byte ptr [edi + 0x14], 0
// 005685ac  5f                   pop edi
// 005685ad  5e                   pop esi
// 005685ae  c3                   ret 
// 005685af  807f1000             cmp byte ptr [edi + 0x10], 0
// 005685b3  7513                 jne 0x5685c8
// 005685b5  8b06                 mov eax, dword ptr [esi]
// 005685b7  c7401423000000       mov dword ptr [eax + 0x14], 0x23
// 005685be  8b0e                 mov ecx, dword ptr [esi]
// 005685c0  8b11                 mov edx, dword ptr [ecx]
// 005685c2  56                   push esi
// 005685c3  ffd2                 call edx
// 005685c5  83c404               add esp, 4
// 005685c8  56                   push esi
// 005685c9  e812ffffff           call 0x5684e0
// 005685ce  83c404               add esp, 4
// 005685d1  8bc3                 mov eax, ebx
// 005685d3  5b                   pop ebx
// 005685d4  5f                   pop edi
// 005685d5  5e                   pop esi
// 005685d6  c3                   ret 
// library jpeg-6b/jdinput.c (function _consume_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
