// roc 2007-03 005354d0  unit: seg_00530000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005354d0
//
// 005354d0  53                   push ebx
// 005354d1  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005354d5  55                   push ebp
// 005354d6  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005354da  56                   push esi
// 005354db  8b742418             mov esi, dword ptr [esp + 0x18]
// 005354df  57                   push edi
// 005354e0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005354e4  3bf7                 cmp esi, edi
// 005354e6  740d                 je 0x5354f5
// 005354e8  8b0e                 mov ecx, dword ptr [esi]
// 005354ea  03cb                 add ecx, ebx
// 005354ec  ffd5                 call ebp
// 005354ee  83c608               add esi, 8
// 005354f1  3bf7                 cmp esi, edi
// 005354f3  75f3                 jne 0x5354e8
// 005354f5  8b442414             mov eax, dword ptr [esp + 0x14]
// 005354f9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005354fd  8b542434             mov edx, dword ptr [esp + 0x34]
// 00535501  5f                   pop edi
// 00535502  8928                 mov dword ptr [eax], ebp
// 00535504  5e                   pop esi
// 00535505  895804               mov dword ptr [eax + 4], ebx
// 00535508  5d                   pop ebp
// 00535509  894808               mov dword ptr [eax + 8], ecx
// 0053550c  89500c               mov dword ptr [eax + 0xc], edx
// 0053550f  5b                   pop ebx
// 00535510  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$for_each@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@@std@@YA?AV?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
