// roc 2007-03 007295f0  unit: seg_00720000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007295f0
//
// 007295f0  56                   push esi
// 007295f1  8bf1                 mov esi, ecx
// 007295f3  837e1000             cmp dword ptr [esi + 0x10], 0
// 007295f7  57                   push edi
// 007295f8  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 007295fe  7502                 jne 0x729602
// 00729600  ffd7                 call edi
// 00729602  8b4610               mov eax, dword ptr [esi + 0x10]
// 00729605  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00729608  3b4804               cmp ecx, dword ptr [eax + 4]
// 0072960b  7502                 jne 0x72960f
// 0072960d  ffd7                 call edi
// 0072960f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00729612  5f                   pop edi
// 00729613  83c008               add eax, 8
// 00729616  5e                   pop esi
// 00729617  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ?dereference@named_slot_map_iterator@detail@signals@boost@@QBEAAUconnection_slot_pair@234@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
