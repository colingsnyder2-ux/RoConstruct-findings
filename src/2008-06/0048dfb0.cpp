// roc 2008-06 0048dfb0  unit: RBX::Network::VPlayer::?$SignalDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048dfb0
//
// 0048dfb0  6aff                 push -1
// 0048dfb2  6898987d00           push 0x7d9898
// 0048dfb7  64a100000000         mov eax, dword ptr fs:[0]
// 0048dfbd  50                   push eax
// 0048dfbe  64892500000000       mov dword ptr fs:[0], esp
// 0048dfc5  51                   push ecx
// 0048dfc6  56                   push esi
// 0048dfc7  8bf1                 mov esi, ecx
// 0048dfc9  89742404             mov dword ptr [esp + 4], esi
// 0048dfcd  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048dfd1  33d2                 xor edx, edx
// 0048dfd3  c70638178200         mov dword ptr [esi], 0x821738
// 0048dfd9  895608               mov dword ptr [esi + 8], edx
// 0048dfdc  8b08                 mov ecx, dword ptr [eax]
// 0048dfde  89542410             mov dword ptr [esp + 0x10], edx
// 0048dfe2  3bca                 cmp ecx, edx
// 0048dfe4  7415                 je 0x48dffb
// 0048dfe6  52                   push edx
// 0048dfe7  894e08               mov dword ptr [esi + 8], ecx
// 0048dfea  8b08                 mov ecx, dword ptr [eax]
// 0048dfec  8d5610               lea edx, [esi + 0x10]
// 0048dfef  83c008               add eax, 8
// 0048dff2  52                   push edx
// 0048dff3  50                   push eax
// 0048dff4  8b01                 mov eax, dword ptr [ecx]
// 0048dff6  ffd0                 call eax
// 0048dff8  83c40c               add esp, 0xc
// 0048dffb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048dfff  8bc6                 mov eax, esi
// 0048e001  5e                   pop esi
// 0048e002  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e009  83c410               add esp, 0x10
// 0048e00c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
