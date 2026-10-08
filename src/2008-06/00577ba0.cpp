// roc 2008-06 00577ba0  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577ba0
//
// 00577ba0  6aff                 push -1
// 00577ba2  6898987d00           push 0x7d9898
// 00577ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00577bad  50                   push eax
// 00577bae  64892500000000       mov dword ptr fs:[0], esp
// 00577bb5  51                   push ecx
// 00577bb6  56                   push esi
// 00577bb7  8bf1                 mov esi, ecx
// 00577bb9  89742404             mov dword ptr [esp + 4], esi
// 00577bbd  8b442418             mov eax, dword ptr [esp + 0x18]
// 00577bc1  33d2                 xor edx, edx
// 00577bc3  c706e4ff8200         mov dword ptr [esi], 0x82ffe4
// 00577bc9  895608               mov dword ptr [esi + 8], edx
// 00577bcc  8b08                 mov ecx, dword ptr [eax]
// 00577bce  89542410             mov dword ptr [esp + 0x10], edx
// 00577bd2  3bca                 cmp ecx, edx
// 00577bd4  7415                 je 0x577beb
// 00577bd6  52                   push edx
// 00577bd7  894e08               mov dword ptr [esi + 8], ecx
// 00577bda  8b08                 mov ecx, dword ptr [eax]
// 00577bdc  8d5610               lea edx, [esi + 0x10]
// 00577bdf  83c008               add eax, 8
// 00577be2  52                   push edx
// 00577be3  50                   push eax
// 00577be4  8b01                 mov eax, dword ptr [ecx]
// 00577be6  ffd0                 call eax
// 00577be8  83c40c               add esp, 0xc
// 00577beb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577bef  8bc6                 mov eax, esi
// 00577bf1  5e                   pop esi
// 00577bf2  64890d00000000       mov dword ptr fs:[0], ecx
// 00577bf9  83c410               add esp, 0x10
// 00577bfc  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
