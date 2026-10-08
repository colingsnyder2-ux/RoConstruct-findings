// roc 2007-03 00444680  unit: seg_00440000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444680
//
// 00444680  53                   push ebx
// 00444681  55                   push ebp
// 00444682  56                   push esi
// 00444683  8b742410             mov esi, dword ptr [esp + 0x10]
// 00444687  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0044468b  57                   push edi
// 0044468c  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00444690  8bcf                 mov ecx, edi
// 00444692  2bce                 sub ecx, esi
// 00444694  b893244992           mov eax, 0x92492493
// 00444699  f7e9                 imul ecx
// 0044469b  03d1                 add edx, ecx
// 0044469d  c1fa04               sar edx, 4
// 004446a0  8bc2                 mov eax, edx
// 004446a2  c1e81f               shr eax, 0x1f
// 004446a5  03c2                 add eax, edx
// 004446a7  8d0cc500000000       lea ecx, [eax*8]
// 004446ae  2bc8                 sub ecx, eax
// 004446b0  3bf7                 cmp esi, edi
// 004446b2  8d2c8b               lea ebp, [ebx + ecx*4]
// 004446b5  741a                 je 0x4446d1
// 004446b7  2bde                 sub ebx, esi
// 004446b9  8da42400000000       lea esp, [esp]
// 004446c0  56                   push esi
// 004446c1  8d0c33               lea ecx, [ebx + esi]
// 004446c4  ff154ce77700         call dword ptr [0x77e74c]
// 004446ca  83c61c               add esi, 0x1c
// 004446cd  3bf7                 cmp esi, edi
// 004446cf  75ef                 jne 0x4446c0
// 004446d1  5f                   pop edi
// 004446d2  5e                   pop esi
// 004446d3  8bc5                 mov eax, ebp
// 004446d5  5d                   pop ebp
// 004446d6  5b                   pop ebx
// 004446d7  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??$_Copy_opt@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV12@@std@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAV10@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
