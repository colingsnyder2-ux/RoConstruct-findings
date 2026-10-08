// roc 2008-06 00633ba0  unit: RBX::H$1?sIntValue::V?$Value::?$SignalDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633ba0
//
// 00633ba0  6aff                 push -1
// 00633ba2  6898987d00           push 0x7d9898
// 00633ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00633bad  50                   push eax
// 00633bae  64892500000000       mov dword ptr fs:[0], esp
// 00633bb5  51                   push ecx
// 00633bb6  56                   push esi
// 00633bb7  8bf1                 mov esi, ecx
// 00633bb9  89742404             mov dword ptr [esp + 4], esi
// 00633bbd  8b442418             mov eax, dword ptr [esp + 0x18]
// 00633bc1  33d2                 xor edx, edx
// 00633bc3  c706b0838400         mov dword ptr [esi], 0x8483b0
// 00633bc9  895608               mov dword ptr [esi + 8], edx
// 00633bcc  8b08                 mov ecx, dword ptr [eax]
// 00633bce  89542410             mov dword ptr [esp + 0x10], edx
// 00633bd2  3bca                 cmp ecx, edx
// 00633bd4  7415                 je 0x633beb
// 00633bd6  52                   push edx
// 00633bd7  894e08               mov dword ptr [esi + 8], ecx
// 00633bda  8b08                 mov ecx, dword ptr [eax]
// 00633bdc  8d5610               lea edx, [esi + 0x10]
// 00633bdf  83c008               add eax, 8
// 00633be2  52                   push edx
// 00633be3  50                   push eax
// 00633be4  8b01                 mov eax, dword ptr [ecx]
// 00633be6  ffd0                 call eax
// 00633be8  83c40c               add esp, 0xc
// 00633beb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633bef  8bc6                 mov eax, esi
// 00633bf1  5e                   pop esi
// 00633bf2  64890d00000000       mov dword ptr fs:[0], ecx
// 00633bf9  83c410               add esp, 0x10
// 00633bfc  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
