// roc 2007-08 0057cec0  unit: RBX::Workspace  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057cec0
//
// 0057cec0  53                   push ebx
// 0057cec1  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0057cec5  55                   push ebp
// 0057cec6  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0057ceca  56                   push esi
// 0057cecb  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057cecf  57                   push edi
// 0057ced0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0057ced4  3bf7                 cmp esi, edi
// 0057ced6  7420                 je 0x57cef8
// 0057ced8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057cedc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057cee0  03c1                 add eax, ecx
// 0057cee2  89442418             mov dword ptr [esp + 0x18], eax
// 0057cee6  8bce                 mov ecx, esi
// 0057cee8  ffd3                 call ebx
// 0057ceea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057ceee  50                   push eax
// 0057ceef  ffd5                 call ebp
// 0057cef1  83c608               add esi, 8
// 0057cef4  3bf7                 cmp esi, edi
// 0057cef6  75ee                 jne 0x57cee6
// 0057cef8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057cefc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057cf00  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057cf04  8928                 mov dword ptr [eax], ebp
// 0057cf06  895004               mov dword ptr [eax + 4], edx
// 0057cf09  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057cf0d  5f                   pop edi
// 0057cf0e  894808               mov dword ptr [eax + 8], ecx
// 0057cf11  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0057cf15  5e                   pop esi
// 0057cf16  89580c               mov dword ptr [eax + 0xc], ebx
// 0057cf19  5d                   pop ebp
// 0057cf1a  895010               mov dword ptr [eax + 0x10], edx
// 0057cf1d  894814               mov dword ptr [eax + 0x14], ecx
// 0057cf20  5b                   pop ebx
// 0057cf21  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$for_each@V?$_Vector_iterator@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@V?$bind_t@XV?$mf1@XVScriptContext@RBX@@PAVScript@2@@_mfi@boost@@V?$list2@V?$value@PAVScriptContext@RBX@@@_bi@boost@@V?$bind_t@PAVScript@RBX@@V?$cmf0@PAVScript@RBX@@V?$shared_ptr@VScript@RBX@@@boost@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@5@@23@@_bi@3@@_bi@boost@@@std@@YA?AV?$bind_t@XV?$mf1@XVScriptContext@RBX@@PAVScript@2@@_mfi@boost@@V?$list2@V?$value@PAVScriptContext@RBX@@@_bi@boost@@V?$bind_t@PAVScript@RBX@@V?$cmf0@PAVScript@RBX@@V?$shared_ptr@VScript@RBX@@@boost@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@5@@23@@_bi@3@@_bi@boost@@V?$_Vector_iterator@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
