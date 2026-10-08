// roc 2008-06 0041a8f0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a8f0
//
// 0041a8f0  6aff                 push -1
// 0041a8f2  6898987d00           push 0x7d9898
// 0041a8f7  64a100000000         mov eax, dword ptr fs:[0]
// 0041a8fd  50                   push eax
// 0041a8fe  64892500000000       mov dword ptr fs:[0], esp
// 0041a905  51                   push ecx
// 0041a906  56                   push esi
// 0041a907  8bf1                 mov esi, ecx
// 0041a909  89742404             mov dword ptr [esp + 4], esi
// 0041a90d  8b4608               mov eax, dword ptr [esi + 8]
// 0041a910  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041a918  85c0                 test eax, eax
// 0041a91a  7419                 je 0x41a935
// 0041a91c  8b00                 mov eax, dword ptr [eax]
// 0041a91e  8d4e10               lea ecx, [esi + 0x10]
// 0041a921  85c0                 test eax, eax
// 0041a923  7409                 je 0x41a92e
// 0041a925  6a01                 push 1
// 0041a927  51                   push ecx
// 0041a928  51                   push ecx
// 0041a929  ffd0                 call eax
// 0041a92b  83c40c               add esp, 0xc
// 0041a92e  c7460800000000       mov dword ptr [esi + 8], 0
// 0041a935  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041a939  c7061cba8000         mov dword ptr [esi], 0x80ba1c
// 0041a93f  5e                   pop esi
// 0041a940  64890d00000000       mov dword ptr fs:[0], ecx
// 0041a947  83c410               add esp, 0x10
// 0041a94a  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ??1?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
