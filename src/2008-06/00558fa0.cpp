// roc 2008-06 00558fa0  unit: RBX::VInstance::?$NonFactoryProduct  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558fa0
//
// 00558fa0  56                   push esi
// 00558fa1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00558fa5  57                   push edi
// 00558fa6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00558faa  3bf7                 cmp esi, edi
// 00558fac  7413                 je 0x558fc1
// 00558fae  8bff                 mov edi, edi
// 00558fb0  8b0e                 mov ecx, dword ptr [esi]
// 00558fb2  034c2424             add ecx, dword ptr [esp + 0x24]
// 00558fb6  ff542420             call dword ptr [esp + 0x20]
// 00558fba  83c608               add esi, 8
// 00558fbd  3bf7                 cmp esi, edi
// 00558fbf  75ef                 jne 0x558fb0
// 00558fc1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00558fc5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00558fc9  8b542424             mov edx, dword ptr [esp + 0x24]
// 00558fcd  8908                 mov dword ptr [eax], ecx
// 00558fcf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00558fd3  895004               mov dword ptr [eax + 4], edx
// 00558fd6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00558fda  5f                   pop edi
// 00558fdb  894808               mov dword ptr [eax + 8], ecx
// 00558fde  89500c               mov dword ptr [eax + 0xc], edx
// 00558fe1  5e                   pop esi
// 00558fe2  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$for_each@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@@std@@YA?AV?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
