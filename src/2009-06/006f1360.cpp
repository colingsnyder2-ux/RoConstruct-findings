// from server: 100% by auto
// roc 2009-06 006f1360  unit: seg_006f0000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f1360
//
// 006f1360  8b4638               mov eax, dword ptr [esi + 0x38]
// 006f1363  8b08                 mov ecx, dword ptr [eax]
// 006f1365  57                   push edi
// 006f1366  8b3e                 mov edi, dword ptr [esi]
// 006f1368  8d51ff               lea edx, [ecx - 1]
// 006f136b  8910                 mov dword ptr [eax], edx
// 006f136d  85c9                 test ecx, ecx
// 006f136f  760f                 jbe 0x6f1380
// 006f1371  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 006f1374  8b5104               mov edx, dword ptr [ecx + 4]
// 006f1377  0fb602               movzx eax, byte ptr [edx]
// 006f137a  42                   inc edx
// 006f137b  895104               mov dword ptr [ecx + 4], edx
// 006f137e  eb0c                 jmp 0x6f138c
// 006f1380  8b4638               mov eax, dword ptr [esi + 0x38]
// 006f1383  50                   push eax
// 006f1384  e8f7bcffff           call 0x6ed080
// 006f1389  83c404               add esp, 4
// 006f138c  8906                 mov dword ptr [esi], eax
// 006f138e  83f80a               cmp eax, 0xa
// 006f1391  7405                 je 0x6f1398
// 006f1393  83f80d               cmp eax, 0xd
// 006f1396  752f                 jne 0x6f13c7
// 006f1398  3bc7                 cmp eax, edi
// 006f139a  742b                 je 0x6f13c7
// 006f139c  8b4638               mov eax, dword ptr [esi + 0x38]
// 006f139f  8b08                 mov ecx, dword ptr [eax]
// 006f13a1  8d51ff               lea edx, [ecx - 1]
// 006f13a4  8910                 mov dword ptr [eax], edx
// 006f13a6  85c9                 test ecx, ecx
// 006f13a8  760f                 jbe 0x6f13b9
// 006f13aa  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 006f13ad  8b5104               mov edx, dword ptr [ecx + 4]
// 006f13b0  0fb602               movzx eax, byte ptr [edx]
// 006f13b3  42                   inc edx
// 006f13b4  895104               mov dword ptr [ecx + 4], edx
// 006f13b7  eb0c                 jmp 0x6f13c5
// 006f13b9  8b4638               mov eax, dword ptr [esi + 0x38]
// 006f13bc  50                   push eax
// 006f13bd  e8bebcffff           call 0x6ed080
// 006f13c2  83c404               add esp, 4
// 006f13c5  8906                 mov dword ptr [esi], eax
// 006f13c7  ff4604               inc dword ptr [esi + 4]
// 006f13ca  817e04fdffff7f       cmp dword ptr [esi + 4], 0x7ffffffd
// 006f13d1  5f                   pop edi
// 006f13d2  7c12                 jl 0x6f13e6
// 006f13d4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006f13d7  51                   push ecx
// 006f13d8  68fce18e00           push 0x8ee1fc
// 006f13dd  56                   push esi
// 006f13de  e86dfeffff           call 0x6f1250
// 006f13e3  83c40c               add esp, 0xc
// 006f13e6  c3                   ret 
// library lua-5.1.4/llex.c (function _inclinenumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
