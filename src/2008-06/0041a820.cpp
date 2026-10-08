// roc 2008-06 0041a820  unit: boost::X::U?$last_value::?$holder  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a820
//
// 0041a820  6aff                 push -1
// 0041a822  6898987d00           push 0x7d9898
// 0041a827  64a100000000         mov eax, dword ptr fs:[0]
// 0041a82d  50                   push eax
// 0041a82e  64892500000000       mov dword ptr fs:[0], esp
// 0041a835  51                   push ecx
// 0041a836  56                   push esi
// 0041a837  8bf1                 mov esi, ecx
// 0041a839  89742404             mov dword ptr [esp + 4], esi
// 0041a83d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041a841  33d2                 xor edx, edx
// 0041a843  c70628ed8000         mov dword ptr [esi], 0x80ed28
// 0041a849  895608               mov dword ptr [esi + 8], edx
// 0041a84c  8b08                 mov ecx, dword ptr [eax]
// 0041a84e  89542410             mov dword ptr [esp + 0x10], edx
// 0041a852  3bca                 cmp ecx, edx
// 0041a854  7415                 je 0x41a86b
// 0041a856  52                   push edx
// 0041a857  894e08               mov dword ptr [esi + 8], ecx
// 0041a85a  8b08                 mov ecx, dword ptr [eax]
// 0041a85c  8d5610               lea edx, [esi + 0x10]
// 0041a85f  83c008               add eax, 8
// 0041a862  52                   push edx
// 0041a863  50                   push eax
// 0041a864  8b01                 mov eax, dword ptr [ecx]
// 0041a866  ffd0                 call eax
// 0041a868  83c40c               add esp, 0xc
// 0041a86b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041a86f  8bc6                 mov eax, esi
// 0041a871  5e                   pop esi
// 0041a872  64890d00000000       mov dword ptr fs:[0], ecx
// 0041a879  83c410               add esp, 0x10
// 0041a87c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
