// roc 2008-06 0048dc30  unit: RBX::VInstance::V?$shared_ptr::?$holder  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048dc30
//
// 0048dc30  6aff                 push -1
// 0048dc32  6898987d00           push 0x7d9898
// 0048dc37  64a100000000         mov eax, dword ptr fs:[0]
// 0048dc3d  50                   push eax
// 0048dc3e  64892500000000       mov dword ptr fs:[0], esp
// 0048dc45  51                   push ecx
// 0048dc46  56                   push esi
// 0048dc47  8bf1                 mov esi, ecx
// 0048dc49  89742404             mov dword ptr [esp + 4], esi
// 0048dc4d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048dc51  33d2                 xor edx, edx
// 0048dc53  c70628178200         mov dword ptr [esi], 0x821728
// 0048dc59  895608               mov dword ptr [esi + 8], edx
// 0048dc5c  8b08                 mov ecx, dword ptr [eax]
// 0048dc5e  89542410             mov dword ptr [esp + 0x10], edx
// 0048dc62  3bca                 cmp ecx, edx
// 0048dc64  7415                 je 0x48dc7b
// 0048dc66  52                   push edx
// 0048dc67  894e08               mov dword ptr [esi + 8], ecx
// 0048dc6a  8b08                 mov ecx, dword ptr [eax]
// 0048dc6c  8d5610               lea edx, [esi + 0x10]
// 0048dc6f  83c008               add eax, 8
// 0048dc72  52                   push edx
// 0048dc73  50                   push eax
// 0048dc74  8b01                 mov eax, dword ptr [ecx]
// 0048dc76  ffd0                 call eax
// 0048dc78  83c40c               add esp, 0xc
// 0048dc7b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048dc7f  8bc6                 mov eax, esi
// 0048dc81  5e                   pop esi
// 0048dc82  64890d00000000       mov dword ptr fs:[0], ecx
// 0048dc89  83c410               add esp, 0x10
// 0048dc8c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
