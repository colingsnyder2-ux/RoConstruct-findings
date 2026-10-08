// roc 2008-06 00555f00  unit: RBX::RunService  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555f00
//
// 00555f00  6aff                 push -1
// 00555f02  6898987d00           push 0x7d9898
// 00555f07  64a100000000         mov eax, dword ptr fs:[0]
// 00555f0d  50                   push eax
// 00555f0e  64892500000000       mov dword ptr fs:[0], esp
// 00555f15  51                   push ecx
// 00555f16  56                   push esi
// 00555f17  8bf1                 mov esi, ecx
// 00555f19  89742404             mov dword ptr [esp + 4], esi
// 00555f1d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00555f21  33d2                 xor edx, edx
// 00555f23  c70608d58200         mov dword ptr [esi], 0x82d508
// 00555f29  895608               mov dword ptr [esi + 8], edx
// 00555f2c  8b08                 mov ecx, dword ptr [eax]
// 00555f2e  89542410             mov dword ptr [esp + 0x10], edx
// 00555f32  3bca                 cmp ecx, edx
// 00555f34  7415                 je 0x555f4b
// 00555f36  52                   push edx
// 00555f37  894e08               mov dword ptr [esi + 8], ecx
// 00555f3a  8b08                 mov ecx, dword ptr [eax]
// 00555f3c  8d5610               lea edx, [esi + 0x10]
// 00555f3f  83c008               add eax, 8
// 00555f42  52                   push edx
// 00555f43  50                   push eax
// 00555f44  8b01                 mov eax, dword ptr [ecx]
// 00555f46  ffd0                 call eax
// 00555f48  83c40c               add esp, 0xc
// 00555f4b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00555f4f  8bc6                 mov eax, esi
// 00555f51  5e                   pop esi
// 00555f52  64890d00000000       mov dword ptr fs:[0], ecx
// 00555f59  83c410               add esp, 0x10
// 00555f5c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
