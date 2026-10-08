// roc 2008-06 0041ad40  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041ad40
//
// 0041ad40  6aff                 push -1
// 0041ad42  68e8727d00           push 0x7d72e8
// 0041ad47  64a100000000         mov eax, dword ptr fs:[0]
// 0041ad4d  50                   push eax
// 0041ad4e  64892500000000       mov dword ptr fs:[0], esp
// 0041ad55  51                   push ecx
// 0041ad56  56                   push esi
// 0041ad57  6a04                 push 4
// 0041ad59  8bf1                 mov esi, ecx
// 0041ad5b  e8c05b2800           call 0x6a0920
// 0041ad60  33c9                 xor ecx, ecx
// 0041ad62  83c404               add esp, 4
// 0041ad65  3bc1                 cmp eax, ecx
// 0041ad67  7404                 je 0x41ad6d
// 0041ad69  8930                 mov dword ptr [eax], esi
// 0041ad6b  eb02                 jmp 0x41ad6f
// 0041ad6d  33c0                 xor eax, eax
// 0041ad6f  8906                 mov dword ptr [esi], eax
// 0041ad71  894e0c               mov dword ptr [esi + 0xc], ecx
// 0041ad74  894e10               mov dword ptr [esi + 0x10], ecx
// 0041ad77  894e14               mov dword ptr [esi + 0x14], ecx
// 0041ad7a  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0041ad7d  894e20               mov dword ptr [esi + 0x20], ecx
// 0041ad80  884e24               mov byte ptr [esi + 0x24], cl
// 0041ad83  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041ad87  8bc6                 mov eax, esi
// 0041ad89  5e                   pop esi
// 0041ad8a  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ad91  83c410               add esp, 0x10
// 0041ad94  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0data_t@slot_base@detail@signals@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
