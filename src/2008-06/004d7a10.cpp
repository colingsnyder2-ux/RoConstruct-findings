// roc 2008-06 004d7a10  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7a10
//
// 004d7a10  6aff                 push -1
// 004d7a12  6898987d00           push 0x7d9898
// 004d7a17  64a100000000         mov eax, dword ptr fs:[0]
// 004d7a1d  50                   push eax
// 004d7a1e  64892500000000       mov dword ptr fs:[0], esp
// 004d7a25  51                   push ecx
// 004d7a26  56                   push esi
// 004d7a27  8bf1                 mov esi, ecx
// 004d7a29  89742404             mov dword ptr [esp + 4], esi
// 004d7a2d  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d7a31  33d2                 xor edx, edx
// 004d7a33  c706d46b8200         mov dword ptr [esi], 0x826bd4
// 004d7a39  895608               mov dword ptr [esi + 8], edx
// 004d7a3c  8b08                 mov ecx, dword ptr [eax]
// 004d7a3e  89542410             mov dword ptr [esp + 0x10], edx
// 004d7a42  3bca                 cmp ecx, edx
// 004d7a44  7415                 je 0x4d7a5b
// 004d7a46  52                   push edx
// 004d7a47  894e08               mov dword ptr [esi + 8], ecx
// 004d7a4a  8b08                 mov ecx, dword ptr [eax]
// 004d7a4c  8d5610               lea edx, [esi + 0x10]
// 004d7a4f  83c008               add eax, 8
// 004d7a52  52                   push edx
// 004d7a53  50                   push eax
// 004d7a54  8b01                 mov eax, dword ptr [ecx]
// 004d7a56  ffd0                 call eax
// 004d7a58  83c40c               add esp, 0xc
// 004d7a5b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d7a5f  8bc6                 mov eax, esi
// 004d7a61  5e                   pop esi
// 004d7a62  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7a69  83c410               add esp, 0x10
// 004d7a6c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
