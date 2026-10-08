// roc 2007-03 00524580  unit: seg_00520000  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524580
//
// 00524580  81ec1c020000         sub esp, 0x21c
// 00524586  57                   push edi
// 00524587  b8ffffff7f           mov eax, 0x7fffffff
// 0052458c  b980000000           mov ecx, 0x80
// 00524591  8d7c2420             lea edi, [esp + 0x20]
// 00524595  f3ab                 rep stosd dword ptr es:[edi], eax
// 00524597  33c0                 xor eax, eax
// 00524599  39842434020000       cmp dword ptr [esp + 0x234], eax
// 005245a0  89442410             mov dword ptr [esp + 0x10], eax
// 005245a4  0f8e41010000         jle 0x5246eb
// 005245aa  53                   push ebx
// 005245ab  55                   push ebp
// 005245ac  56                   push esi
// 005245ad  8d4900               lea ecx, [ecx]
// 005245b0  8b8c2444020000       mov ecx, dword ptr [esp + 0x244]
// 005245b7  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 005245bb  8b942430020000       mov edx, dword ptr [esp + 0x230]
// 005245c2  8b7274               mov esi, dword ptr [edx + 0x74]
// 005245c5  8b06                 mov eax, dword ptr [esi]
// 005245c7  0fb60c03             movzx ecx, byte ptr [ebx + eax]
// 005245cb  8b5604               mov edx, dword ptr [esi + 4]
// 005245ce  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 005245d2  8b842434020000       mov eax, dword ptr [esp + 0x234]
// 005245d9  2bc1                 sub eax, ecx
// 005245db  8b8c2438020000       mov ecx, dword ptr [esp + 0x238]
// 005245e2  2bca                 sub ecx, edx
// 005245e4  8d1449               lea edx, [ecx + ecx*2]
// 005245e7  8b4e08               mov ecx, dword ptr [esi + 8]
// 005245ea  0fb63419             movzx esi, byte ptr [ecx + ebx]
// 005245ee  8b8c243c020000       mov ecx, dword ptr [esp + 0x23c]
// 005245f5  2bce                 sub ecx, esi
// 005245f7  8bf1                 mov esi, ecx
// 005245f9  0faff1               imul esi, ecx
// 005245fc  8bfa                 mov edi, edx
// 005245fe  0faffa               imul edi, edx
// 00524601  03f7                 add esi, edi
// 00524603  03c0                 add eax, eax
// 00524605  8bf8                 mov edi, eax
// 00524607  0faff8               imul edi, eax
// 0052460a  8d6c5212             lea ebp, [edx + edx*2 + 0x12]
// 0052460e  8b942448020000       mov edx, dword ptr [esp + 0x248]
// 00524615  03ed                 add ebp, ebp
// 00524617  03f7                 add esi, edi
// 00524619  03ed                 add ebp, ebp
// 0052461b  8d7904               lea edi, [ecx + 4]
// 0052461e  03ed                 add ebp, ebp
// 00524620  83c008               add eax, 8
// 00524623  c1e704               shl edi, 4
// 00524626  c1e005               shl eax, 5
// 00524629  896c2428             mov dword ptr [esp + 0x28], ebp
// 0052462d  8d4c242c             lea ecx, [esp + 0x2c]
// 00524631  89442410             mov dword ptr [esp + 0x10], eax
// 00524635  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0052463d  eb05                 jmp 0x524644
// 0052463f  90                   nop 
// 00524640  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00524644  8bc6                 mov eax, esi
// 00524646  89442420             mov dword ptr [esp + 0x20], eax
// 0052464a  896c2418             mov dword ptr [esp + 0x18], ebp
// 0052464e  c744242407000000     mov dword ptr [esp + 0x24], 7
// 00524656  3b01                 cmp eax, dword ptr [ecx]
// 00524658  7d04                 jge 0x52465e
// 0052465a  8901                 mov dword ptr [ecx], eax
// 0052465c  881a                 mov byte ptr [edx], bl
// 0052465e  03c7                 add eax, edi
// 00524660  3b4104               cmp eax, dword ptr [ecx + 4]
// 00524663  7d06                 jge 0x52466b
// 00524665  894104               mov dword ptr [ecx + 4], eax
// 00524668  885a01               mov byte ptr [edx + 1], bl
// 0052466b  8daf80000000         lea ebp, [edi + 0x80]
// 00524671  03c5                 add eax, ebp
// 00524673  3b4108               cmp eax, dword ptr [ecx + 8]
// 00524676  7d06                 jge 0x52467e
// 00524678  894108               mov dword ptr [ecx + 8], eax
// 0052467b  885a02               mov byte ptr [edx + 2], bl
// 0052467e  8daf00010000         lea ebp, [edi + 0x100]
// 00524684  03c5                 add eax, ebp
// 00524686  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 00524689  7d06                 jge 0x524691
// 0052468b  89410c               mov dword ptr [ecx + 0xc], eax
// 0052468e  885a03               mov byte ptr [edx + 3], bl
// 00524691  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00524695  8b442420             mov eax, dword ptr [esp + 0x20]
// 00524699  03c5                 add eax, ebp
// 0052469b  81c520010000         add ebp, 0x120
// 005246a1  83c110               add ecx, 0x10
// 005246a4  83c204               add edx, 4
// 005246a7  836c242401           sub dword ptr [esp + 0x24], 1
// 005246ac  89442420             mov dword ptr [esp + 0x20], eax
// 005246b0  896c2418             mov dword ptr [esp + 0x18], ebp
// 005246b4  79a0                 jns 0x524656
// 005246b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005246ba  03f0                 add esi, eax
// 005246bc  0500020000           add eax, 0x200
// 005246c1  836c241401           sub dword ptr [esp + 0x14], 1
// 005246c6  89442410             mov dword ptr [esp + 0x10], eax
// 005246ca  0f8970ffffff         jns 0x524640
// 005246d0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005246d4  83c001               add eax, 1
// 005246d7  3b842440020000       cmp eax, dword ptr [esp + 0x240]
// 005246de  8944241c             mov dword ptr [esp + 0x1c], eax
// 005246e2  0f8cc8feffff         jl 0x5245b0
// 005246e8  5e                   pop esi
// 005246e9  5d                   pop ebp
// 005246ea  5b                   pop ebx
// 005246eb  5f                   pop edi
// 005246ec  81c41c020000         add esp, 0x21c
// 005246f2  c3                   ret 
// library jpeg-6b/jquant2.c (function _find_best_colors)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
