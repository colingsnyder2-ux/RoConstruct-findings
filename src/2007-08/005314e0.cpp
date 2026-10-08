// roc 2007-08 005314e0  unit: RBX::VModelInstance::?$FactoryProduct  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005314e0
//
// 005314e0  53                   push ebx
// 005314e1  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005314e5  55                   push ebp
// 005314e6  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005314ea  56                   push esi
// 005314eb  8b742418             mov esi, dword ptr [esp + 0x18]
// 005314ef  57                   push edi
// 005314f0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005314f4  3bf7                 cmp esi, edi
// 005314f6  740d                 je 0x531505
// 005314f8  8b0e                 mov ecx, dword ptr [esi]
// 005314fa  03cb                 add ecx, ebx
// 005314fc  ffd5                 call ebp
// 005314fe  83c608               add esi, 8
// 00531501  3bf7                 cmp esi, edi
// 00531503  75f3                 jne 0x5314f8
// 00531505  8b442414             mov eax, dword ptr [esp + 0x14]
// 00531509  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053150d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00531511  5f                   pop edi
// 00531512  8928                 mov dword ptr [eax], ebp
// 00531514  5e                   pop esi
// 00531515  895804               mov dword ptr [eax + 4], ebx
// 00531518  5d                   pop ebp
// 00531519  894808               mov dword ptr [eax + 8], ecx
// 0053151c  89500c               mov dword ptr [eax + 0xc], edx
// 0053151f  5b                   pop ebx
// 00531520  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$for_each@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@@std@@YA?AV?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
