// roc 2008-06 006343a0  unit: G3D::VVector3::V?$Value::?$SignalDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006343a0
//
// 006343a0  6aff                 push -1
// 006343a2  6898987d00           push 0x7d9898
// 006343a7  64a100000000         mov eax, dword ptr fs:[0]
// 006343ad  50                   push eax
// 006343ae  64892500000000       mov dword ptr fs:[0], esp
// 006343b5  51                   push ecx
// 006343b6  56                   push esi
// 006343b7  8bf1                 mov esi, ecx
// 006343b9  89742404             mov dword ptr [esp + 4], esi
// 006343bd  8b442418             mov eax, dword ptr [esp + 0x18]
// 006343c1  33d2                 xor edx, edx
// 006343c3  c706e0838400         mov dword ptr [esi], 0x8483e0
// 006343c9  895608               mov dword ptr [esi + 8], edx
// 006343cc  8b08                 mov ecx, dword ptr [eax]
// 006343ce  89542410             mov dword ptr [esp + 0x10], edx
// 006343d2  3bca                 cmp ecx, edx
// 006343d4  7415                 je 0x6343eb
// 006343d6  52                   push edx
// 006343d7  894e08               mov dword ptr [esi + 8], ecx
// 006343da  8b08                 mov ecx, dword ptr [eax]
// 006343dc  8d5610               lea edx, [esi + 0x10]
// 006343df  83c008               add eax, 8
// 006343e2  52                   push edx
// 006343e3  50                   push eax
// 006343e4  8b01                 mov eax, dword ptr [ecx]
// 006343e6  ffd0                 call eax
// 006343e8  83c40c               add esp, 0xc
// 006343eb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006343ef  8bc6                 mov eax, esi
// 006343f1  5e                   pop esi
// 006343f2  64890d00000000       mov dword ptr fs:[0], ecx
// 006343f9  83c410               add esp, 0x10
// 006343fc  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
