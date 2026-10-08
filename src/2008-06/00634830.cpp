// roc 2008-06 00634830  unit: G3D::VCoordinateFrame::V?$Value::?$SignalDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634830
//
// 00634830  6aff                 push -1
// 00634832  6898987d00           push 0x7d9898
// 00634837  64a100000000         mov eax, dword ptr fs:[0]
// 0063483d  50                   push eax
// 0063483e  64892500000000       mov dword ptr fs:[0], esp
// 00634845  51                   push ecx
// 00634846  56                   push esi
// 00634847  8bf1                 mov esi, ecx
// 00634849  89742404             mov dword ptr [esp + 4], esi
// 0063484d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00634851  33d2                 xor edx, edx
// 00634853  c706f8838400         mov dword ptr [esi], 0x8483f8
// 00634859  895608               mov dword ptr [esi + 8], edx
// 0063485c  8b08                 mov ecx, dword ptr [eax]
// 0063485e  89542410             mov dword ptr [esp + 0x10], edx
// 00634862  3bca                 cmp ecx, edx
// 00634864  7415                 je 0x63487b
// 00634866  52                   push edx
// 00634867  894e08               mov dword ptr [esi + 8], ecx
// 0063486a  8b08                 mov ecx, dword ptr [eax]
// 0063486c  8d5610               lea edx, [esi + 0x10]
// 0063486f  83c008               add eax, 8
// 00634872  52                   push edx
// 00634873  50                   push eax
// 00634874  8b01                 mov eax, dword ptr [ecx]
// 00634876  ffd0                 call eax
// 00634878  83c40c               add esp, 0xc
// 0063487b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063487f  8bc6                 mov eax, esi
// 00634881  5e                   pop esi
// 00634882  64890d00000000       mov dword ptr fs:[0], ecx
// 00634889  83c410               add esp, 0x10
// 0063488c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
