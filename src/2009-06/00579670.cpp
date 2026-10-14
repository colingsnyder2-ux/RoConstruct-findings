// roc 2009-06 00579670  unit: G3D::LineSegment  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00579670
//
// 00579670  6aff                 push -1
// 00579672  68fa088600           push 0x8608fa
// 00579677  64a100000000         mov eax, dword ptr fs:[0]
// 0057967d  50                   push eax
// 0057967e  64892500000000       mov dword ptr fs:[0], esp
// 00579685  83ec08               sub esp, 8
// 00579688  56                   push esi
// 00579689  57                   push edi
// 0057968a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0057968e  33f6                 xor esi, esi
// 00579690  6816d28a00           push 0x8ad216
// 00579695  8bcf                 mov ecx, edi
// 00579697  8974241c             mov dword ptr [esp + 0x1c], esi
// 0057969b  8974240c             mov dword ptr [esp + 0xc], esi
// 0057969f  ff15b4e48900         call dword ptr [0x89e4b4]
// 005796a5  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005796a8  89742418             mov dword ptr [esp + 0x18], esi
// 005796ac  c744240801000000     mov dword ptr [esp + 8], 1
// 005796b4  3bc6                 cmp eax, esi
// 005796b6  0f8693000000         jbe 0x57974f
// 005796bc  55                   push ebp
// 005796bd  8d6b04               lea ebp, [ebx + 4]
// 005796c0  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 005796c4  7205                 jb 0x5796cb
// 005796c6  8b4500               mov eax, dword ptr [ebp]
// 005796c9  eb02                 jmp 0x5796cd
// 005796cb  8bc5                 mov eax, ebp
// 005796cd  8a0430               mov al, byte ptr [eax + esi]
// 005796d0  88442410             mov byte ptr [esp + 0x10], al
// 005796d4  0fbec0               movsx eax, al
// 005796d7  83f85c               cmp eax, 0x5c
// 005796da  7759                 ja 0x579735
// 005796dc  0fb6807c975700       movzx eax, byte ptr [eax + 0x57977c]
// 005796e3  ff248564975700       jmp dword ptr [eax*4 + 0x579764]
// 005796ea  6880ba8c00           push 0x8cba80
// 005796ef  8bcf                 mov ecx, edi
// 005796f1  ff15a4e48900         call dword ptr [0x89e4a4]
// 005796f7  eb49                 jmp 0x579742
// 005796f9  687cba8c00           push 0x8cba7c
// 005796fe  8bcf                 mov ecx, edi
// 00579700  ff15a4e48900         call dword ptr [0x89e4a4]
// 00579706  eb3a                 jmp 0x579742
// 00579708  6878ba8c00           push 0x8cba78
// 0057970d  8bcf                 mov ecx, edi
// 0057970f  ff15a4e48900         call dword ptr [0x89e4a4]
// 00579715  eb2b                 jmp 0x579742
// 00579717  6874ba8c00           push 0x8cba74
// 0057971c  8bcf                 mov ecx, edi
// 0057971e  ff15a4e48900         call dword ptr [0x89e4a4]
// 00579724  eb1c                 jmp 0x579742
// 00579726  6870ba8c00           push 0x8cba70
// 0057972b  8bcf                 mov ecx, edi
// 0057972d  ff15a4e48900         call dword ptr [0x89e4a4]
// 00579733  eb0d                 jmp 0x579742
// 00579735  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00579739  51                   push ecx
// 0057973a  8bcf                 mov ecx, edi
// 0057973c  ff1558e58900         call dword ptr [0x89e558]
// 00579742  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00579745  46                   inc esi
// 00579746  3bc6                 cmp eax, esi
// 00579748  0f8772ffffff         ja 0x5796c0
// 0057974e  5d                   pop ebp
// 0057974f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00579753  8bc7                 mov eax, edi
// 00579755  5f                   pop edi
// 00579756  5e                   pop esi
// 00579757  64890d00000000       mov dword ptr fs:[0], ecx
// 0057975e  83c414               add esp, 0x14
// 00579761  c3                   ret 
// 00579762  8bff                 mov edi, edi
// 00579764  ea965700179757       ljmp 0x5797:0x17005796
// 0057976b  0008                 add byte ptr [eax], cl
// 0057976d  97                   xchg edi, eax
// 0057976e  57                   push edi
// 0057976f  00f9                 add cl, bh
// 00579771  96                   xchg esi, eax
// 00579772  57                   push edi
// 00579773  0026                 add byte ptr [esi], ah
// 00579775  97                   xchg edi, eax
// 00579776  57                   push edi
// 00579777  003597570000         add byte ptr [0x5797], dh
// 0057977d  0505050505           add eax, 0x5050505
// 00579782  0505050102           add eax, 0x2010505
// 00579787  0505030505           add eax, 0x5050305
// 0057978c  0505050505           add eax, 0x5050505
// 00579791  0505050505           add eax, 0x5050505
// 00579796  0505050505           add eax, 0x5050505
// 0057979b  0505050505           add eax, 0x5050505
// 005797a0  0505050505           add eax, 0x5050505
// 005797a5  0505050505           add eax, 0x5050505
// 005797aa  0505050505           add eax, 0x5050505
// 005797af  0505050505           add eax, 0x5050505
// 005797b4  0505050505           add eax, 0x5050505
// 005797b9  0505050505           add eax, 0x5050505
// 005797be  0505050505           add eax, 0x5050505
// 005797c3  0505050505           add eax, 0x5050505
// 005797c8  0505050505           add eax, 0x5050505
// 005797cd  0505050505           add eax, 0x5050505
// 005797d2  0505050505           add eax, 0x5050505
// library g3d-6.09-rbx2008/G3Dcpp\TextOutput.cpp (function ?escape@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextOutput.cpp
