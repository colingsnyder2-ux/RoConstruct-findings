// roc 2008-06 0041a9e0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a9e0
//
// 0041a9e0  6aff                 push -1
// 0041a9e2  6878df7b00           push 0x7bdf78
// 0041a9e7  64a100000000         mov eax, dword ptr fs:[0]
// 0041a9ed  50                   push eax
// 0041a9ee  64892500000000       mov dword ptr fs:[0], esp
// 0041a9f5  51                   push ecx
// 0041a9f6  56                   push esi
// 0041a9f7  8bf1                 mov esi, ecx
// 0041a9f9  57                   push edi
// 0041a9fa  89742408             mov dword ptr [esp + 8], esi
// 0041a9fe  33ff                 xor edi, edi
// 0041aa00  8d4e18               lea ecx, [esi + 0x18]
// 0041aa03  897c2414             mov dword ptr [esp + 0x14], edi
// 0041aa07  e864a91700           call 0x595370
// 0041aa0c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041aa0f  3bc7                 cmp eax, edi
// 0041aa11  7409                 je 0x41aa1c
// 0041aa13  50                   push eax
// 0041aa14  e8615c2800           call 0x6a067a
// 0041aa19  83c404               add esp, 4
// 0041aa1c  8b06                 mov eax, dword ptr [esi]
// 0041aa1e  50                   push eax
// 0041aa1f  897e0c               mov dword ptr [esi + 0xc], edi
// 0041aa22  897e10               mov dword ptr [esi + 0x10], edi
// 0041aa25  897e14               mov dword ptr [esi + 0x14], edi
// 0041aa28  e84d5c2800           call 0x6a067a
// 0041aa2d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041aa31  83c404               add esp, 4
// 0041aa34  5f                   pop edi
// 0041aa35  5e                   pop esi
// 0041aa36  64890d00000000       mov dword ptr fs:[0], ecx
// 0041aa3d  83c410               add esp, 0x10
// 0041aa40  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??1data_t@slot_base@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
