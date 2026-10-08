// roc 2008-06 006337a0  unit: RBX::Network::VPlayer::?$BoundPropGetSet  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006337a0
//
// 006337a0  6aff                 push -1
// 006337a2  6898987d00           push 0x7d9898
// 006337a7  64a100000000         mov eax, dword ptr fs:[0]
// 006337ad  50                   push eax
// 006337ae  64892500000000       mov dword ptr fs:[0], esp
// 006337b5  51                   push ecx
// 006337b6  56                   push esi
// 006337b7  8bf1                 mov esi, ecx
// 006337b9  89742404             mov dword ptr [esp + 4], esi
// 006337bd  8b442418             mov eax, dword ptr [esp + 0x18]
// 006337c1  33d2                 xor edx, edx
// 006337c3  c70698838400         mov dword ptr [esi], 0x848398
// 006337c9  895608               mov dword ptr [esi + 8], edx
// 006337cc  8b08                 mov ecx, dword ptr [eax]
// 006337ce  89542410             mov dword ptr [esp + 0x10], edx
// 006337d2  3bca                 cmp ecx, edx
// 006337d4  7415                 je 0x6337eb
// 006337d6  52                   push edx
// 006337d7  894e08               mov dword ptr [esi + 8], ecx
// 006337da  8b08                 mov ecx, dword ptr [eax]
// 006337dc  8d5610               lea edx, [esi + 0x10]
// 006337df  83c008               add eax, 8
// 006337e2  52                   push edx
// 006337e3  50                   push eax
// 006337e4  8b01                 mov eax, dword ptr [ecx]
// 006337e6  ffd0                 call eax
// 006337e8  83c40c               add esp, 0xc
// 006337eb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006337ef  8bc6                 mov eax, esi
// 006337f1  5e                   pop esi
// 006337f2  64890d00000000       mov dword ptr fs:[0], ecx
// 006337f9  83c410               add esp, 0x10
// 006337fc  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
