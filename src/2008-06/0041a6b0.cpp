// roc 2008-06 0041a6b0  unit: boost::X::U?$last_value::?$holder  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a6b0
//
// 0041a6b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041a6b4  83f803               cmp eax, 3
// 0041a6b7  743b                 je 0x41a6f4
// 0041a6b9  85c0                 test eax, eax
// 0041a6bb  7511                 jne 0x41a6ce
// 0041a6bd  8b442408             mov eax, dword ptr [esp + 8]
// 0041a6c1  85c0                 test eax, eax
// 0041a6c3  7439                 je 0x41a6fe
// 0041a6c5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041a6c9  8a11                 mov dl, byte ptr [ecx]
// 0041a6cb  8810                 mov byte ptr [eax], dl
// 0041a6cd  c3                   ret 
// 0041a6ce  83f801               cmp eax, 1
// 0041a6d1  742b                 je 0x41a6fe
// 0041a6d3  56                   push esi
// 0041a6d4  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0041a6d8  8b0e                 mov ecx, dword ptr [esi]
// 0041a6da  68b0cc9200           push 0x92ccb0
// 0041a6df  ff1578288000         call dword ptr [0x802878]
// 0041a6e5  0fb6c0               movzx eax, al
// 0041a6e8  f7d8                 neg eax
// 0041a6ea  1bc0                 sbb eax, eax
// 0041a6ec  23442408             and eax, dword ptr [esp + 8]
// 0041a6f0  8906                 mov dword ptr [esi], eax
// 0041a6f2  5e                   pop esi
// 0041a6f3  c3                   ret 
// 0041a6f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041a6f8  c701b0cc9200         mov dword ptr [ecx], 0x92ccb0
// 0041a6fe  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?manage@?$functor_manager@V?$group_bridge_compare@U?$less@H@std@@H@detail@signals@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
