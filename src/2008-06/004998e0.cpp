// roc 2008-06 004998e0  unit: RBX::Network::Players  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004998e0
//
// 004998e0  6aff                 push -1
// 004998e2  6898987d00           push 0x7d9898
// 004998e7  64a100000000         mov eax, dword ptr fs:[0]
// 004998ed  50                   push eax
// 004998ee  64892500000000       mov dword ptr fs:[0], esp
// 004998f5  51                   push ecx
// 004998f6  56                   push esi
// 004998f7  8bf1                 mov esi, ecx
// 004998f9  89742404             mov dword ptr [esp + 4], esi
// 004998fd  8b442418             mov eax, dword ptr [esp + 0x18]
// 00499901  33d2                 xor edx, edx
// 00499903  c70600288200         mov dword ptr [esi], 0x822800
// 00499909  895608               mov dword ptr [esi + 8], edx
// 0049990c  8b08                 mov ecx, dword ptr [eax]
// 0049990e  89542410             mov dword ptr [esp + 0x10], edx
// 00499912  3bca                 cmp ecx, edx
// 00499914  7415                 je 0x49992b
// 00499916  52                   push edx
// 00499917  894e08               mov dword ptr [esi + 8], ecx
// 0049991a  8b08                 mov ecx, dword ptr [eax]
// 0049991c  8d5610               lea edx, [esi + 0x10]
// 0049991f  83c008               add eax, 8
// 00499922  52                   push edx
// 00499923  50                   push eax
// 00499924  8b01                 mov eax, dword ptr [ecx]
// 00499926  ffd0                 call eax
// 00499928  83c40c               add esp, 0xc
// 0049992b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049992f  8bc6                 mov eax, esi
// 00499931  5e                   pop esi
// 00499932  64890d00000000       mov dword ptr fs:[0], ecx
// 00499939  83c410               add esp, 0x10
// 0049993c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
