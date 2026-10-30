// from server: 100% by auto
// roc 2012-06 00937280  unit: seg_00930000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00937280
//
// 00937280  8b4638               mov eax, dword ptr [esi + 0x38]
// 00937283  8b08                 mov ecx, dword ptr [eax]
// 00937285  57                   push edi
// 00937286  8b3e                 mov edi, dword ptr [esi]
// 00937288  8d51ff               lea edx, [ecx - 1]
// 0093728b  8910                 mov dword ptr [eax], edx
// 0093728d  85c9                 test ecx, ecx
// 0093728f  760f                 jbe 0x9372a0
// 00937291  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00937294  8b5104               mov edx, dword ptr [ecx + 4]
// 00937297  0fb602               movzx eax, byte ptr [edx]
// 0093729a  42                   inc edx
// 0093729b  895104               mov dword ptr [ecx + 4], edx
// 0093729e  eb0c                 jmp 0x9372ac
// 009372a0  8b4638               mov eax, dword ptr [esi + 0x38]
// 009372a3  50                   push eax
// 009372a4  e8d7f5ffff           call 0x936880
// 009372a9  83c404               add esp, 4
// 009372ac  8906                 mov dword ptr [esi], eax
// 009372ae  83f80a               cmp eax, 0xa
// 009372b1  7405                 je 0x9372b8
// 009372b3  83f80d               cmp eax, 0xd
// 009372b6  752f                 jne 0x9372e7
// 009372b8  3bc7                 cmp eax, edi
// 009372ba  742b                 je 0x9372e7
// 009372bc  8b4638               mov eax, dword ptr [esi + 0x38]
// 009372bf  8b08                 mov ecx, dword ptr [eax]
// 009372c1  8d51ff               lea edx, [ecx - 1]
// 009372c4  8910                 mov dword ptr [eax], edx
// 009372c6  85c9                 test ecx, ecx
// 009372c8  760f                 jbe 0x9372d9
// 009372ca  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 009372cd  8b5104               mov edx, dword ptr [ecx + 4]
// 009372d0  0fb602               movzx eax, byte ptr [edx]
// 009372d3  42                   inc edx
// 009372d4  895104               mov dword ptr [ecx + 4], edx
// 009372d7  eb0c                 jmp 0x9372e5
// 009372d9  8b4638               mov eax, dword ptr [esi + 0x38]
// 009372dc  50                   push eax
// 009372dd  e89ef5ffff           call 0x936880
// 009372e2  83c404               add esp, 4
// 009372e5  8906                 mov dword ptr [esi], eax
// 009372e7  ff4604               inc dword ptr [esi + 4]
// 009372ea  817e04fdffff7f       cmp dword ptr [esi + 4], 0x7ffffffd
// 009372f1  5f                   pop edi
// 009372f2  7c12                 jl 0x937306
// 009372f4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 009372f7  51                   push ecx
// 009372f8  6854fabf00           push 0xbffa54
// 009372fd  56                   push esi
// 009372fe  e86dfeffff           call 0x937170
// 00937303  83c40c               add esp, 0xc
// 00937306  c3                   ret 
// library lua-5.1.4/llex.c (function _inclinenumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
