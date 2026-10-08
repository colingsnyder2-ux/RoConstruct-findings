// roc 2007-08 00728f60  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728f60
//
// 00728f60  56                   push esi
// 00728f61  8bf1                 mov esi, ecx
// 00728f63  837e1000             cmp dword ptr [esi + 0x10], 0
// 00728f67  57                   push edi
// 00728f68  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 00728f6e  7502                 jne 0x728f72
// 00728f70  ffd7                 call edi
// 00728f72  8b4610               mov eax, dword ptr [esi + 0x10]
// 00728f75  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00728f78  3b4804               cmp ecx, dword ptr [eax + 4]
// 00728f7b  7502                 jne 0x728f7f
// 00728f7d  ffd7                 call edi
// 00728f7f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00728f82  5f                   pop edi
// 00728f83  83c008               add eax, 8
// 00728f86  5e                   pop esi
// 00728f87  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?dereference@named_slot_map_iterator@detail@signals@boost@@QBEAAUconnection_slot_pair@234@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
