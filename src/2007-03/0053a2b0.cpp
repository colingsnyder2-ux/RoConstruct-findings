// roc 2007-03 0053a2b0  unit: seg_00530000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053a2b0
//
// 0053a2b0  53                   push ebx
// 0053a2b1  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0053a2b5  56                   push esi
// 0053a2b6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0053a2ba  57                   push edi
// 0053a2bb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0053a2bf  3bf7                 cmp esi, edi
// 0053a2c1  7434                 je 0x53a2f7
// 0053a2c3  8b06                 mov eax, dword ptr [esi]
// 0053a2c5  83ec08               sub esp, 8
// 0053a2c8  8bcc                 mov ecx, esp
// 0053a2ca  8901                 mov dword ptr [ecx], eax
// 0053a2cc  8b4604               mov eax, dword ptr [esi + 4]
// 0053a2cf  85c0                 test eax, eax
// 0053a2d1  8964241c             mov dword ptr [esp + 0x1c], esp
// 0053a2d5  894104               mov dword ptr [ecx + 4], eax
// 0053a2d8  740c                 je 0x53a2e6
// 0053a2da  83c004               add eax, 4
// 0053a2dd  b901000000           mov ecx, 1
// 0053a2e2  f00fc108             lock xadd dword ptr [eax], ecx
// 0053a2e6  53                   push ebx
// 0053a2e7  8d4c2430             lea ecx, [esp + 0x30]
// 0053a2eb  e840dbffff           call 0x537e30
// 0053a2f0  83c608               add esi, 8
// 0053a2f3  3bf7                 cmp esi, edi
// 0053a2f5  75cc                 jne 0x53a2c3
// 0053a2f7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053a2fb  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053a2ff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053a303  8910                 mov dword ptr [eax], edx
// 0053a305  8b542430             mov edx, dword ptr [esp + 0x30]
// 0053a309  5f                   pop edi
// 0053a30a  894804               mov dword ptr [eax + 4], ecx
// 0053a30d  895808               mov dword ptr [eax + 8], ebx
// 0053a310  5e                   pop esi
// 0053a311  89500c               mov dword ptr [eax + 0xc], edx
// 0053a314  5b                   pop ebx
// 0053a315  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??$for_each@V?$_Vector_iterator@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@V?$bind_t@XV?$mf1@XVScriptContext@RBX@@V?$shared_ptr@VScript@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVScriptContext@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@@std@@YA?AV?$bind_t@XV?$mf1@XVScriptContext@RBX@@V?$shared_ptr@VScript@RBX@@@boost@@@_mfi@boost@@V?$list2@V?$value@PAVScriptContext@RBX@@@_bi@boost@@V?$arg@$00@3@@_bi@3@@_bi@boost@@V?$_Vector_iterator@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
