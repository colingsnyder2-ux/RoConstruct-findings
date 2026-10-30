// from server: 100% by auto
// roc 2007-08 00617630  unit: seg_00610000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617630
//
// 00617630  8b4638               mov eax, dword ptr [esi + 0x38]
// 00617633  8b08                 mov ecx, dword ptr [eax]
// 00617635  85c9                 test ecx, ecx
// 00617637  57                   push edi
// 00617638  8b3e                 mov edi, dword ptr [esi]
// 0061763a  8d51ff               lea edx, [ecx - 1]
// 0061763d  8910                 mov dword ptr [eax], edx
// 0061763f  7611                 jbe 0x617652
// 00617641  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00617644  8b5104               mov edx, dword ptr [ecx + 4]
// 00617647  0fb602               movzx eax, byte ptr [edx]
// 0061764a  83c201               add edx, 1
// 0061764d  895104               mov dword ptr [ecx + 4], edx
// 00617650  eb0c                 jmp 0x61765e
// 00617652  8b4638               mov eax, dword ptr [esi + 0x38]
// 00617655  50                   push eax
// 00617656  e895bcffff           call 0x6132f0
// 0061765b  83c404               add esp, 4
// 0061765e  83f80a               cmp eax, 0xa
// 00617661  8906                 mov dword ptr [esi], eax
// 00617663  7405                 je 0x61766a
// 00617665  83f80d               cmp eax, 0xd
// 00617668  7531                 jne 0x61769b
// 0061766a  3bc7                 cmp eax, edi
// 0061766c  742d                 je 0x61769b
// 0061766e  8b4638               mov eax, dword ptr [esi + 0x38]
// 00617671  8b08                 mov ecx, dword ptr [eax]
// 00617673  85c9                 test ecx, ecx
// 00617675  8d51ff               lea edx, [ecx - 1]
// 00617678  8910                 mov dword ptr [eax], edx
// 0061767a  7611                 jbe 0x61768d
// 0061767c  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0061767f  8b5104               mov edx, dword ptr [ecx + 4]
// 00617682  0fb602               movzx eax, byte ptr [edx]
// 00617685  83c201               add edx, 1
// 00617688  895104               mov dword ptr [ecx + 4], edx
// 0061768b  eb0c                 jmp 0x617699
// 0061768d  8b4638               mov eax, dword ptr [esi + 0x38]
// 00617690  50                   push eax
// 00617691  e85abcffff           call 0x6132f0
// 00617696  83c404               add esp, 4
// 00617699  8906                 mov dword ptr [esi], eax
// 0061769b  83460401             add dword ptr [esi + 4], 1
// 0061769f  817e04fdffff7f       cmp dword ptr [esi + 4], 0x7ffffffd
// 006176a6  5f                   pop edi
// 006176a7  7c12                 jl 0x6176bb
// 006176a9  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006176ac  51                   push ecx
// 006176ad  686c397c00           push 0x7c396c
// 006176b2  56                   push esi
// 006176b3  e868feffff           call 0x617520
// 006176b8  83c40c               add esp, 0xc
// 006176bb  c3                   ret 
// library lua-5.1.4/llex.c (function _inclinenumber)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
