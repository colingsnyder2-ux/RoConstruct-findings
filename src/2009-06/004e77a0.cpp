// roc 2009-06 004e77a0  unit: RBX::Network::DirectPhysicsReceiver  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e77a0
//
// 004e77a0  56                   push esi
// 004e77a1  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e77a5  57                   push edi
// 004e77a6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e77aa  3bf7                 cmp esi, edi
// 004e77ac  7413                 je 0x4e77c1
// 004e77ae  8bff                 mov edi, edi
// 004e77b0  8b0e                 mov ecx, dword ptr [esi]
// 004e77b2  034c2424             add ecx, dword ptr [esp + 0x24]
// 004e77b6  ff542420             call dword ptr [esp + 0x20]
// 004e77ba  83c608               add esi, 8
// 004e77bd  3bf7                 cmp esi, edi
// 004e77bf  75ef                 jne 0x4e77b0
// 004e77c1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e77c5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004e77c9  8b542424             mov edx, dword ptr [esp + 0x24]
// 004e77cd  8908                 mov dword ptr [eax], ecx
// 004e77cf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004e77d3  895004               mov dword ptr [eax + 4], edx
// 004e77d6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004e77da  5f                   pop edi
// 004e77db  894808               mov dword ptr [eax + 8], ecx
// 004e77de  89500c               mov dword ptr [eax + 0xc], edx
// 004e77e1  5e                   pop esi
// 004e77e2  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$for_each@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@@std@@YA?AV?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
