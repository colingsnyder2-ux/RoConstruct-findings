// roc 2008-06 00633fa0  unit: RBX::N$1?sDoubleValue::V?$Value::?$SignalDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633fa0
//
// 00633fa0  6aff                 push -1
// 00633fa2  6898987d00           push 0x7d9898
// 00633fa7  64a100000000         mov eax, dword ptr fs:[0]
// 00633fad  50                   push eax
// 00633fae  64892500000000       mov dword ptr fs:[0], esp
// 00633fb5  51                   push ecx
// 00633fb6  56                   push esi
// 00633fb7  8bf1                 mov esi, ecx
// 00633fb9  89742404             mov dword ptr [esp + 4], esi
// 00633fbd  8b442418             mov eax, dword ptr [esp + 0x18]
// 00633fc1  33d2                 xor edx, edx
// 00633fc3  c706c8838400         mov dword ptr [esi], 0x8483c8
// 00633fc9  895608               mov dword ptr [esi + 8], edx
// 00633fcc  8b08                 mov ecx, dword ptr [eax]
// 00633fce  89542410             mov dword ptr [esp + 0x10], edx
// 00633fd2  3bca                 cmp ecx, edx
// 00633fd4  7415                 je 0x633feb
// 00633fd6  52                   push edx
// 00633fd7  894e08               mov dword ptr [esi + 8], ecx
// 00633fda  8b08                 mov ecx, dword ptr [eax]
// 00633fdc  8d5610               lea edx, [esi + 0x10]
// 00633fdf  83c008               add eax, 8
// 00633fe2  52                   push edx
// 00633fe3  50                   push eax
// 00633fe4  8b01                 mov eax, dword ptr [ecx]
// 00633fe6  ffd0                 call eax
// 00633fe8  83c40c               add esp, 0xc
// 00633feb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633fef  8bc6                 mov eax, esi
// 00633ff1  5e                   pop esi
// 00633ff2  64890d00000000       mov dword ptr fs:[0], ecx
// 00633ff9  83c410               add esp, 0x10
// 00633ffc  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
