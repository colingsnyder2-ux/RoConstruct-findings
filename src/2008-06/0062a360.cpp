// roc 2008-06 0062a360  unit: RBX::VExplosion::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a360
//
// 0062a360  6aff                 push -1
// 0062a362  6898987d00           push 0x7d9898
// 0062a367  64a100000000         mov eax, dword ptr fs:[0]
// 0062a36d  50                   push eax
// 0062a36e  64892500000000       mov dword ptr fs:[0], esp
// 0062a375  51                   push ecx
// 0062a376  56                   push esi
// 0062a377  8bf1                 mov esi, ecx
// 0062a379  89742404             mov dword ptr [esp + 4], esi
// 0062a37d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0062a381  33d2                 xor edx, edx
// 0062a383  c706985c8400         mov dword ptr [esi], 0x845c98
// 0062a389  895608               mov dword ptr [esi + 8], edx
// 0062a38c  8b08                 mov ecx, dword ptr [eax]
// 0062a38e  89542410             mov dword ptr [esp + 0x10], edx
// 0062a392  3bca                 cmp ecx, edx
// 0062a394  7415                 je 0x62a3ab
// 0062a396  52                   push edx
// 0062a397  894e08               mov dword ptr [esi + 8], ecx
// 0062a39a  8b08                 mov ecx, dword ptr [eax]
// 0062a39c  8d5610               lea edx, [esi + 0x10]
// 0062a39f  83c008               add eax, 8
// 0062a3a2  52                   push edx
// 0062a3a3  50                   push eax
// 0062a3a4  8b01                 mov eax, dword ptr [ecx]
// 0062a3a6  ffd0                 call eax
// 0062a3a8  83c40c               add esp, 0xc
// 0062a3ab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062a3af  8bc6                 mov eax, esi
// 0062a3b1  5e                   pop esi
// 0062a3b2  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a3b9  83c410               add esp, 0x10
// 0062a3bc  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
