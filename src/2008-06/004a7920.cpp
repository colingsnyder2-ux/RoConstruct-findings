// roc 2008-06 004a7920  unit: RBX::VHint::?$FactoryProduct::Creator  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7920
//
// 004a7920  56                   push esi
// 004a7921  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a7925  57                   push edi
// 004a7926  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004a792a  3bf7                 cmp esi, edi
// 004a792c  7416                 je 0x4a7944
// 004a792e  8bff                 mov edi, edi
// 004a7930  8b442424             mov eax, dword ptr [esp + 0x24]
// 004a7934  50                   push eax
// 004a7935  56                   push esi
// 004a7936  ff542428             call dword ptr [esp + 0x28]
// 004a793a  83c60c               add esi, 0xc
// 004a793d  83c408               add esp, 8
// 004a7940  3bf7                 cmp esi, edi
// 004a7942  75ec                 jne 0x4a7930
// 004a7944  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a7948  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004a794c  8b542424             mov edx, dword ptr [esp + 0x24]
// 004a7950  5f                   pop edi
// 004a7951  8908                 mov dword ptr [eax], ecx
// 004a7953  895004               mov dword ptr [eax + 4], edx
// 004a7956  5e                   pop esi
// 004a7957  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??$for_each@V?$_Vector_iterator@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@std@@V?$bind_t@XP6AXAAUWaitItem@IdSerializer@Network@RBX@@PAVInstance@4@@ZV?$list2@V?$arg@$00@boost@@V?$value@PAVInstance@RBX@@@_bi@2@@_bi@boost@@@_bi@boost@@@std@@YA?AV?$bind_t@XP6AXAAUWaitItem@IdSerializer@Network@RBX@@PAVInstance@4@@ZV?$list2@V?$arg@$00@boost@@V?$value@PAVInstance@RBX@@@_bi@2@@_bi@boost@@@_bi@boost@@V?$_Vector_iterator@UWaitItem@IdSerializer@Network@RBX@@V?$allocator@UWaitItem@IdSerializer@Network@RBX@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
