// from server: 100% by auto
// roc 2011-06 005575a0  unit: seg_00550000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005575a0
//
// 005575a0  56                   push esi
// 005575a1  8b742408             mov esi, dword ptr [esp + 8]
// 005575a5  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 005575ac  7521                 jne 0x5575cf
// 005575ae  56                   push esi
// 005575af  e8bc230100           call 0x569970
// 005575b4  83c404               add esp, 4
// 005575b7  807e4000             cmp byte ptr [esi + 0x40], 0
// 005575bb  740b                 je 0x5575c8
// 005575bd  c74614cf000000       mov dword ptr [esi + 0x14], 0xcf
// 005575c4  b001                 mov al, 1
// 005575c6  5e                   pop esi
// 005575c7  c3                   ret 
// 005575c8  c74614cb000000       mov dword ptr [esi + 0x14], 0xcb
// 005575cf  8b4614               mov eax, dword ptr [esi + 0x14]
// 005575d2  3dcb000000           cmp eax, 0xcb
// 005575d7  7570                 jne 0x557649
// 005575d9  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 005575df  80781000             cmp byte ptr [eax + 0x10], 0
// 005575e3  7454                 je 0x557639
// 005575e5  8b4608               mov eax, dword ptr [esi + 8]
// 005575e8  85c0                 test eax, eax
// 005575ea  7408                 je 0x5575f4
// 005575ec  8b08                 mov ecx, dword ptr [eax]
// 005575ee  56                   push esi
// 005575ef  ffd1                 call ecx
// 005575f1  83c404               add esp, 4
// 005575f4  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 005575fa  8b02                 mov eax, dword ptr [edx]
// 005575fc  56                   push esi
// 005575fd  ffd0                 call eax
// 005575ff  83c404               add esp, 4
// 00557602  85c0                 test eax, eax
// 00557604  742f                 je 0x557635
// 00557606  83f802               cmp eax, 2
// 00557609  742e                 je 0x557639
// 0055760b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0055760e  85c9                 test ecx, ecx
// 00557610  74d3                 je 0x5575e5
// 00557612  83f803               cmp eax, 3
// 00557615  7405                 je 0x55761c
// 00557617  83f801               cmp eax, 1
// 0055761a  75c9                 jne 0x5575e5
// 0055761c  ff4104               inc dword ptr [ecx + 4]
// 0055761f  8b4608               mov eax, dword ptr [esi + 8]
// 00557622  8b4804               mov ecx, dword ptr [eax + 4]
// 00557625  3b4808               cmp ecx, dword ptr [eax + 8]
// 00557628  7cbb                 jl 0x5575e5
// 0055762a  8b961c010000         mov edx, dword ptr [esi + 0x11c]
// 00557630  015008               add dword ptr [eax + 8], edx
// 00557633  ebb0                 jmp 0x5575e5
// 00557635  32c0                 xor al, al
// 00557637  5e                   pop esi
// 00557638  c3                   ret 
// 00557639  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0055763c  898684000000         mov dword ptr [esi + 0x84], eax
// 00557642  e8e9fdffff           call 0x557430
// 00557647  5e                   pop esi
// 00557648  c3                   ret 
// 00557649  3dcc000000           cmp eax, 0xcc
// 0055764e  741b                 je 0x55766b
// 00557650  8b0e                 mov ecx, dword ptr [esi]
// 00557652  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 00557659  8b16                 mov edx, dword ptr [esi]
// 0055765b  8b4614               mov eax, dword ptr [esi + 0x14]
// 0055765e  894218               mov dword ptr [edx + 0x18], eax
// 00557661  8b0e                 mov ecx, dword ptr [esi]
// 00557663  8b11                 mov edx, dword ptr [ecx]
// 00557665  56                   push esi
// 00557666  ffd2                 call edx
// 00557668  83c404               add esp, 4
// 0055766b  e8c0fdffff           call 0x557430
// 00557670  5e                   pop esi
// 00557671  c3                   ret 
// library jpeg-6b/jdapistd.c (function _jpeg_start_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
