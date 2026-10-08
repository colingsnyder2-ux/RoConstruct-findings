// from server: 100% by auto
// roc 2008-06 00664280  unit: RBX::FilterStairs  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00664280
//
// 00664280  8b4638               mov eax, dword ptr [esi + 0x38]
// 00664283  8b08                 mov ecx, dword ptr [eax]
// 00664285  57                   push edi
// 00664286  8b3e                 mov edi, dword ptr [esi]
// 00664288  8d51ff               lea edx, [ecx - 1]
// 0066428b  8910                 mov dword ptr [eax], edx
// 0066428d  85c9                 test ecx, ecx
// 0066428f  760f                 jbe 0x6642a0
// 00664291  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00664294  8b5104               mov edx, dword ptr [ecx + 4]
// 00664297  0fb602               movzx eax, byte ptr [edx]
// 0066429a  42                   inc edx
// 0066429b  895104               mov dword ptr [ecx + 4], edx
// 0066429e  eb0c                 jmp 0x6642ac
// 006642a0  8b4638               mov eax, dword ptr [esi + 0x38]
// 006642a3  50                   push eax
// 006642a4  e887b5ffff           call 0x65f830
// 006642a9  83c404               add esp, 4
// 006642ac  8906                 mov dword ptr [esi], eax
// 006642ae  83f80a               cmp eax, 0xa
// 006642b1  7405                 je 0x6642b8
// 006642b3  83f80d               cmp eax, 0xd
// 006642b6  752f                 jne 0x6642e7
// 006642b8  3bc7                 cmp eax, edi
// 006642ba  742b                 je 0x6642e7
// 006642bc  8b4638               mov eax, dword ptr [esi + 0x38]
// 006642bf  8b08                 mov ecx, dword ptr [eax]
// 006642c1  8d51ff               lea edx, [ecx - 1]
// 006642c4  8910                 mov dword ptr [eax], edx
// 006642c6  85c9                 test ecx, ecx
// 006642c8  760f                 jbe 0x6642d9
// 006642ca  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 006642cd  8b5104               mov edx, dword ptr [ecx + 4]
// 006642d0  0fb602               movzx eax, byte ptr [edx]
// 006642d3  42                   inc edx
// 006642d4  895104               mov dword ptr [ecx + 4], edx
// 006642d7  eb0c                 jmp 0x6642e5
// 006642d9  8b4638               mov eax, dword ptr [esi + 0x38]
// 006642dc  50                   push eax
// 006642dd  e84eb5ffff           call 0x65f830
// 006642e2  83c404               add esp, 4
// 006642e5  8906                 mov dword ptr [esi], eax
// 006642e7  ff4604               inc dword ptr [esi + 4]
// 006642ea  817e04fdffff7f       cmp dword ptr [esi + 4], 0x7ffffffd
// 006642f1  5f                   pop edi
// 006642f2  7c12                 jl 0x664306
// 006642f4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006642f7  51                   push ecx
// 006642f8  68bcca8400           push 0x84cabc
// 006642fd  56                   push esi
// 006642fe  e86dfeffff           call 0x664170
// 00664303  83c40c               add esp, 0xc
// 00664306  c3                   ret 
// library lua-5.1.4/llex.c (function _inclinenumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
