// roc 2007-08 0051f1d0  unit: seg_00510000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f1d0
//
// 0051f1d0  56                   push esi
// 0051f1d1  8b742408             mov esi, dword ptr [esp + 8]
// 0051f1d5  57                   push edi
// 0051f1d6  8bbe90010000         mov edi, dword ptr [esi + 0x190]
// 0051f1dc  807f1100             cmp byte ptr [edi + 0x11], 0
// 0051f1e0  7408                 je 0x51f1ea
// 0051f1e2  5f                   pop edi
// 0051f1e3  b802000000           mov eax, 2
// 0051f1e8  5e                   pop esi
// 0051f1e9  c3                   ret 
// 0051f1ea  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0051f1f0  8b4804               mov ecx, dword ptr [eax + 4]
// 0051f1f3  53                   push ebx
// 0051f1f4  56                   push esi
// 0051f1f5  ffd1                 call ecx
// 0051f1f7  83c404               add esp, 4
// 0051f1fa  8bd8                 mov ebx, eax
// 0051f1fc  83e801               sub eax, 1
// 0051f1ff  744b                 je 0x51f24c
// 0051f201  83e801               sub eax, 1
// 0051f204  757d                 jne 0x51f283
// 0051f206  807f1400             cmp byte ptr [edi + 0x14], 0
// 0051f20a  c6471101             mov byte ptr [edi + 0x11], 1
// 0051f20e  7425                 je 0x51f235
// 0051f210  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0051f216  807a0d00             cmp byte ptr [edx + 0xd], 0
// 0051f21a  7467                 je 0x51f283
// 0051f21c  8b06                 mov eax, dword ptr [esi]
// 0051f21e  c740143b000000       mov dword ptr [eax + 0x14], 0x3b
// 0051f225  8b0e                 mov ecx, dword ptr [esi]
// 0051f227  8b11                 mov edx, dword ptr [ecx]
// 0051f229  56                   push esi
// 0051f22a  ffd2                 call edx
// 0051f22c  83c404               add esp, 4
// 0051f22f  8bc3                 mov eax, ebx
// 0051f231  5b                   pop ebx
// 0051f232  5f                   pop edi
// 0051f233  5e                   pop esi
// 0051f234  c3                   ret 
// 0051f235  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0051f238  398684000000         cmp dword ptr [esi + 0x84], eax
// 0051f23e  7e43                 jle 0x51f283
// 0051f240  898684000000         mov dword ptr [esi + 0x84], eax
// 0051f246  8bc3                 mov eax, ebx
// 0051f248  5b                   pop ebx
// 0051f249  5f                   pop edi
// 0051f24a  5e                   pop esi
// 0051f24b  c3                   ret 
// 0051f24c  807f1400             cmp byte ptr [edi + 0x14], 0
// 0051f250  740f                 je 0x51f261
// 0051f252  e8d9faffff           call 0x51ed30
// 0051f257  8bc3                 mov eax, ebx
// 0051f259  5b                   pop ebx
// 0051f25a  c6471400             mov byte ptr [edi + 0x14], 0
// 0051f25e  5f                   pop edi
// 0051f25f  5e                   pop esi
// 0051f260  c3                   ret 
// 0051f261  807f1000             cmp byte ptr [edi + 0x10], 0
// 0051f265  7513                 jne 0x51f27a
// 0051f267  8b06                 mov eax, dword ptr [esi]
// 0051f269  c7401423000000       mov dword ptr [eax + 0x14], 0x23
// 0051f270  8b0e                 mov ecx, dword ptr [esi]
// 0051f272  8b11                 mov edx, dword ptr [ecx]
// 0051f274  56                   push esi
// 0051f275  ffd2                 call edx
// 0051f277  83c404               add esp, 4
// 0051f27a  56                   push esi
// 0051f27b  e810ffffff           call 0x51f190
// 0051f280  83c404               add esp, 4
// 0051f283  8bc3                 mov eax, ebx
// 0051f285  5b                   pop ebx
// 0051f286  5f                   pop edi
// 0051f287  5e                   pop esi
// 0051f288  c3                   ret 
// library jpeg-6b/jdinput.c (function _consume_markers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
