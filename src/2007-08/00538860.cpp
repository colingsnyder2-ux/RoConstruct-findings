// roc 2007-08 00538860  unit: RBX::VScriptContext::?$FactoryProduct  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00538860
//
// 00538860  53                   push ebx
// 00538861  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00538865  56                   push esi
// 00538866  8b742414             mov esi, dword ptr [esp + 0x14]
// 0053886a  57                   push edi
// 0053886b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0053886f  3bf7                 cmp esi, edi
// 00538871  7434                 je 0x5388a7
// 00538873  8b06                 mov eax, dword ptr [esi]
// 00538875  83ec08               sub esp, 8
// 00538878  8bcc                 mov ecx, esp
// 0053887a  8901                 mov dword ptr [ecx], eax
// 0053887c  8b4604               mov eax, dword ptr [esi + 4]
// 0053887f  85c0                 test eax, eax
// 00538881  8964241c             mov dword ptr [esp + 0x1c], esp
// 00538885  894104               mov dword ptr [ecx + 4], eax
// 00538888  740c                 je 0x538896
// 0053888a  83c004               add eax, 4
// 0053888d  b901000000           mov ecx, 1
// 00538892  f00fc108             lock xadd dword ptr [eax], ecx
// 00538896  53                   push ebx
// 00538897  8d4c2430             lea ecx, [esp + 0x30]
// 0053889b  e800d6ffff           call 0x535ea0
// 005388a0  83c608               add esi, 8
// 005388a3  3bf7                 cmp esi, edi
// 005388a5  75cc                 jne 0x538873
// 005388a7  8b442410             mov eax, dword ptr [esp + 0x10]
// 005388ab  8b542424             mov edx, dword ptr [esp + 0x24]
// 005388af  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005388b3  8910                 mov dword ptr [eax], edx
// 005388b5  8b542430             mov edx, dword ptr [esp + 0x30]
// 005388b9  5f                   pop edi
// 005388ba  894804               mov dword ptr [eax + 4], ecx
// 005388bd  895808               mov dword ptr [eax + 8], ebx
// 005388c0  5e                   pop esi
// 005388c1  89500c               mov dword ptr [eax + 0xc], edx
// 005388c4  5b                   pop ebx
// 005388c5  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??$for_each@V?$_Vector_iterator@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@V?$bind_t@XV?$mf1@XVScriptContext@RBX@@V?$shared_ptr@VScript@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVScriptContext@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@std@@YA?AV?$bind_t@XV?$mf1@XVScriptContext@RBX@@V?$shared_ptr@VScript@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVScriptContext@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@V?$_Vector_iterator@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
