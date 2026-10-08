// from server: 100% by auto
// roc 2010-06 00782600  unit: seg_00780000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782600
//
// 00782600  8b4638               mov eax, dword ptr [esi + 0x38]
// 00782603  8b08                 mov ecx, dword ptr [eax]
// 00782605  57                   push edi
// 00782606  8b3e                 mov edi, dword ptr [esi]
// 00782608  8d51ff               lea edx, [ecx - 1]
// 0078260b  8910                 mov dword ptr [eax], edx
// 0078260d  85c9                 test ecx, ecx
// 0078260f  760f                 jbe 0x782620
// 00782611  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00782614  8b5104               mov edx, dword ptr [ecx + 4]
// 00782617  0fb602               movzx eax, byte ptr [edx]
// 0078261a  42                   inc edx
// 0078261b  895104               mov dword ptr [ecx + 4], edx
// 0078261e  eb0c                 jmp 0x78262c
// 00782620  8b4638               mov eax, dword ptr [esi + 0x38]
// 00782623  50                   push eax
// 00782624  e8f7bcffff           call 0x77e320
// 00782629  83c404               add esp, 4
// 0078262c  8906                 mov dword ptr [esi], eax
// 0078262e  83f80a               cmp eax, 0xa
// 00782631  7405                 je 0x782638
// 00782633  83f80d               cmp eax, 0xd
// 00782636  752f                 jne 0x782667
// 00782638  3bc7                 cmp eax, edi
// 0078263a  742b                 je 0x782667
// 0078263c  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078263f  8b08                 mov ecx, dword ptr [eax]
// 00782641  8d51ff               lea edx, [ecx - 1]
// 00782644  8910                 mov dword ptr [eax], edx
// 00782646  85c9                 test ecx, ecx
// 00782648  760f                 jbe 0x782659
// 0078264a  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0078264d  8b5104               mov edx, dword ptr [ecx + 4]
// 00782650  0fb602               movzx eax, byte ptr [edx]
// 00782653  42                   inc edx
// 00782654  895104               mov dword ptr [ecx + 4], edx
// 00782657  eb0c                 jmp 0x782665
// 00782659  8b4638               mov eax, dword ptr [esi + 0x38]
// 0078265c  50                   push eax
// 0078265d  e8bebcffff           call 0x77e320
// 00782662  83c404               add esp, 4
// 00782665  8906                 mov dword ptr [esi], eax
// 00782667  ff4604               inc dword ptr [esi + 4]
// 0078266a  817e04fdffff7f       cmp dword ptr [esi + 4], 0x7ffffffd
// 00782671  5f                   pop edi
// 00782672  7c12                 jl 0x782686
// 00782674  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00782677  51                   push ecx
// 00782678  685c36a500           push 0xa5365c
// 0078267d  56                   push esi
// 0078267e  e86dfeffff           call 0x7824f0
// 00782683  83c40c               add esp, 0xc
// 00782686  c3                   ret 
// library lua-5.1.4/llex.c (function _inclinenumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
