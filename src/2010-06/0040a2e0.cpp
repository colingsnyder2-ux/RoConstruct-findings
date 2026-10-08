// roc 2010-06 0040a2e0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040a2e0
//
// 0040a2e0  56                   push esi
// 0040a2e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0040a2e5  57                   push edi
// 0040a2e6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0040a2ea  3bf7                 cmp esi, edi
// 0040a2ec  7413                 je 0x40a301
// 0040a2ee  8bff                 mov edi, edi
// 0040a2f0  8b0e                 mov ecx, dword ptr [esi]
// 0040a2f2  034c2424             add ecx, dword ptr [esp + 0x24]
// 0040a2f6  ff542420             call dword ptr [esp + 0x20]
// 0040a2fa  83c608               add esi, 8
// 0040a2fd  3bf7                 cmp esi, edi
// 0040a2ff  75ef                 jne 0x40a2f0
// 0040a301  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040a305  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0040a309  8b542424             mov edx, dword ptr [esp + 0x24]
// 0040a30d  8908                 mov dword ptr [eax], ecx
// 0040a30f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0040a313  895004               mov dword ptr [eax + 4], edx
// 0040a316  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0040a31a  5f                   pop edi
// 0040a31b  894808               mov dword ptr [eax + 8], ecx
// 0040a31e  89500c               mov dword ptr [eax + 0xc], edx
// 0040a321  5e                   pop esi
// 0040a322  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$for_each@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@@std@@YA?AV?$bind_t@XV?$mf0@XVInstance@RBX@@@_mfi@boost@@V?$list1@V?$arg@$00@boost@@@_bi@3@@_bi@boost@@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@0V123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
