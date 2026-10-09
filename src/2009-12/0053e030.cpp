// roc 2009-12 0053e030  unit: RBX::Network::DirectPhysicsReceiver  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053e030
//
// 0053e030  56                   push esi
// 0053e031  8b742410             mov esi, dword ptr [esp + 0x10]
// 0053e035  57                   push edi
// 0053e036  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0053e03a  3bf7                 cmp esi, edi
// 0053e03c  7413                 je 0x53e051
// 0053e03e  8bff                 mov edi, edi
// 0053e040  8b0e                 mov ecx, dword ptr [esi]
// 0053e042  034c2424             add ecx, dword ptr [esp + 0x24]
// 0053e046  ff542420             call dword ptr [esp + 0x20]
// 0053e04a  83c608               add esi, 8
// 0053e04d  3bf7                 cmp esi, edi
// 0053e04f  75ef                 jne 0x53e040
// 0053e051  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053e055  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053e059  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053e05d  8908                 mov dword ptr [eax], ecx
// 0053e05f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053e063  895004               mov dword ptr [eax + 4], edx
// 0053e066  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0053e06a  5f                   pop edi
// 0053e06b  894808               mov dword ptr [eax + 8], ecx
// 0053e06e  89500c               mov dword ptr [eax + 0xc], edx
// 0053e071  5e                   pop esi
// 0053e072  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$for_each@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@@std@@YA?AV?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
