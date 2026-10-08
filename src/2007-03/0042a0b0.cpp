// roc 2007-03 0042a0b0  unit: seg_00420000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042a0b0
//
// 0042a0b0  53                   push ebx
// 0042a0b1  55                   push ebp
// 0042a0b2  56                   push esi
// 0042a0b3  8b742414             mov esi, dword ptr [esp + 0x14]
// 0042a0b7  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0042a0bb  57                   push edi
// 0042a0bc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0042a0c0  8bce                 mov ecx, esi
// 0042a0c2  2bcf                 sub ecx, edi
// 0042a0c4  b893244992           mov eax, 0x92492493
// 0042a0c9  f7e9                 imul ecx
// 0042a0cb  03d1                 add edx, ecx
// 0042a0cd  c1fa04               sar edx, 4
// 0042a0d0  8bc2                 mov eax, edx
// 0042a0d2  c1e81f               shr eax, 0x1f
// 0042a0d5  03c2                 add eax, edx
// 0042a0d7  8d0cc500000000       lea ecx, [eax*8]
// 0042a0de  2bc8                 sub ecx, eax
// 0042a0e0  03c9                 add ecx, ecx
// 0042a0e2  03c9                 add ecx, ecx
// 0042a0e4  8bdd                 mov ebx, ebp
// 0042a0e6  2bd9                 sub ebx, ecx
// 0042a0e8  3bfe                 cmp edi, esi
// 0042a0ea  7415                 je 0x42a101
// 0042a0ec  2bee                 sub ebp, esi
// 0042a0ee  8bff                 mov edi, edi
// 0042a0f0  83ee1c               sub esi, 0x1c
// 0042a0f3  56                   push esi
// 0042a0f4  8d0c2e               lea ecx, [esi + ebp]
// 0042a0f7  ff1508e77700         call dword ptr [0x77e708]
// 0042a0fd  3bf7                 cmp esi, edi
// 0042a0ff  75ef                 jne 0x42a0f0
// 0042a101  5f                   pop edi
// 0042a102  5e                   pop esi
// 0042a103  5d                   pop ebp
// 0042a104  8bc3                 mov eax, ebx
// 0042a106  5b                   pop ebx
// 0042a107  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??$_Move_backward_opt@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV12@@std@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAV10@00Urandom_access_iterator_tag@0@U_Swap_move_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
