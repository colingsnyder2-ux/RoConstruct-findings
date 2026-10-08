// roc 2007-03 0057c310  unit: seg_00570000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057c310
//
// 0057c310  53                   push ebx
// 0057c311  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0057c315  55                   push ebp
// 0057c316  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0057c31a  56                   push esi
// 0057c31b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057c31f  57                   push edi
// 0057c320  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0057c324  3bf7                 cmp esi, edi
// 0057c326  7420                 je 0x57c348
// 0057c328  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057c32c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057c330  03c1                 add eax, ecx
// 0057c332  89442418             mov dword ptr [esp + 0x18], eax
// 0057c336  8bce                 mov ecx, esi
// 0057c338  ffd3                 call ebx
// 0057c33a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057c33e  50                   push eax
// 0057c33f  ffd5                 call ebp
// 0057c341  83c608               add esi, 8
// 0057c344  3bf7                 cmp esi, edi
// 0057c346  75ee                 jne 0x57c336
// 0057c348  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057c34c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057c350  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057c354  8928                 mov dword ptr [eax], ebp
// 0057c356  895004               mov dword ptr [eax + 4], edx
// 0057c359  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057c35d  5f                   pop edi
// 0057c35e  894808               mov dword ptr [eax + 8], ecx
// 0057c361  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0057c365  5e                   pop esi
// 0057c366  89580c               mov dword ptr [eax + 0xc], ebx
// 0057c369  5d                   pop ebp
// 0057c36a  895010               mov dword ptr [eax + 0x10], edx
// 0057c36d  894814               mov dword ptr [eax + 0x14], ecx
// 0057c370  5b                   pop ebx
// 0057c371  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$for_each@V?$_Vector_iterator@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@V?$bind_t@XV?$mf1@XVScriptContext@RBX@@PAVScript@2@@_mfi@boost@@V?$list2@V?$value@PAVScriptContext@RBX@@@_bi@boost@@V?$bind_t@PAVScript@RBX@@V?$cmf0@PAVScript@RBX@@V?$shared_ptr@VScript@RBX@@@boost@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@5@@23@@_bi@3@@_bi@boost@@@std@@YA?AV?$bind_t@XV?$mf1@XVScriptContext@RBX@@PAVScript@2@@_mfi@boost@@V?$list2@V?$value@PAVScriptContext@RBX@@@_bi@boost@@V?$bind_t@PAVScript@RBX@@V?$cmf0@PAVScript@RBX@@V?$shared_ptr@VScript@RBX@@@boost@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@5@@23@@_bi@3@@_bi@boost@@V?$_Vector_iterator@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
