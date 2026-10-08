// roc 2008-06 00634c30  unit: G3D::VColor3::V?$Value::?$SignalDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634c30
//
// 00634c30  6aff                 push -1
// 00634c32  6898987d00           push 0x7d9898
// 00634c37  64a100000000         mov eax, dword ptr fs:[0]
// 00634c3d  50                   push eax
// 00634c3e  64892500000000       mov dword ptr fs:[0], esp
// 00634c45  51                   push ecx
// 00634c46  56                   push esi
// 00634c47  8bf1                 mov esi, ecx
// 00634c49  89742404             mov dword ptr [esp + 4], esi
// 00634c4d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00634c51  33d2                 xor edx, edx
// 00634c53  c70610848400         mov dword ptr [esi], 0x848410
// 00634c59  895608               mov dword ptr [esi + 8], edx
// 00634c5c  8b08                 mov ecx, dword ptr [eax]
// 00634c5e  89542410             mov dword ptr [esp + 0x10], edx
// 00634c62  3bca                 cmp ecx, edx
// 00634c64  7415                 je 0x634c7b
// 00634c66  52                   push edx
// 00634c67  894e08               mov dword ptr [esi + 8], ecx
// 00634c6a  8b08                 mov ecx, dword ptr [eax]
// 00634c6c  8d5610               lea edx, [esi + 0x10]
// 00634c6f  83c008               add eax, 8
// 00634c72  52                   push edx
// 00634c73  50                   push eax
// 00634c74  8b01                 mov eax, dword ptr [ecx]
// 00634c76  ffd0                 call eax
// 00634c78  83c40c               add esp, 0xc
// 00634c7b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634c7f  8bc6                 mov eax, esi
// 00634c81  5e                   pop esi
// 00634c82  64890d00000000       mov dword ptr fs:[0], ecx
// 00634c89  83c410               add esp, 0x10
// 00634c8c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
