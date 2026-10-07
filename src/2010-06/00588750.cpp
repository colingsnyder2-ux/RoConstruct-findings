// roc 2010-06 00588750  unit: seg_00580000  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00588750
//
// 00588750  83ec08               sub esp, 8
// 00588753  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00588757  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 0058875d  53                   push ebx
// 0058875e  8b591c               mov ebx, dword ptr [ecx + 0x1c]
// 00588761  55                   push ebp
// 00588762  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00588766  56                   push esi
// 00588767  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058876b  57                   push edi
// 0058876c  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0058876f  03ff                 add edi, edi
// 00588771  03ff                 add edi, edi
// 00588773  03ff                 add edi, edi
// 00588775  52                   push edx
// 00588776  8d043f               lea eax, [edi + edi]
// 00588779  55                   push ebp
// 0058877a  897c2418             mov dword ptr [esp + 0x18], edi
// 0058877e  e82dfdffff           call 0x5884b0
// 00588783  83c408               add esp, 8
// 00588786  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0058878a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00588792  7e54                 jle 0x5887e8
// 00588794  8b542428             mov edx, dword ptr [esp + 0x28]
// 00588798  2bd5                 sub edx, ebp
// 0058879a  89542414             mov dword ptr [esp + 0x14], edx
// 0058879e  8bff                 mov edi, edi
// 005887a0  8b0c2a               mov ecx, dword ptr [edx + ebp]
// 005887a3  8b4500               mov eax, dword ptr [ebp]
// 005887a6  33f6                 xor esi, esi
// 005887a8  85ff                 test edi, edi
// 005887aa  7627                 jbe 0x5887d3
// 005887ac  8d642400             lea esp, [esp]
// 005887b0  0fb65001             movzx edx, byte ptr [eax + 1]
// 005887b4  0fb618               movzx ebx, byte ptr [eax]
// 005887b7  03d6                 add edx, esi
// 005887b9  03da                 add ebx, edx
// 005887bb  d1fb                 sar ebx, 1
// 005887bd  8819                 mov byte ptr [ecx], bl
// 005887bf  41                   inc ecx
// 005887c0  83f601               xor esi, 1
// 005887c3  83c002               add eax, 2
// 005887c6  83ef01               sub edi, 1
// 005887c9  75e5                 jne 0x5887b0
// 005887cb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005887cf  8b542414             mov edx, dword ptr [esp + 0x14]
// 005887d3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005887d7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005887db  40                   inc eax
// 005887dc  83c504               add ebp, 4
// 005887df  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 005887e2  8944241c             mov dword ptr [esp + 0x1c], eax
// 005887e6  7cb8                 jl 0x5887a0
// 005887e8  5f                   pop edi
// 005887e9  5e                   pop esi
// 005887ea  5d                   pop ebp
// 005887eb  5b                   pop ebx
// 005887ec  83c408               add esp, 8
// 005887ef  c3                   ret 
// library jpeg-6b/jcsample.c (function _h2v1_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
