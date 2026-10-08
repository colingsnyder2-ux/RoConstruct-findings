// roc 2008-06 0049f5b0  unit: RBX::Network::VClient::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f5b0
//
// 0049f5b0  6aff                 push -1
// 0049f5b2  6898987d00           push 0x7d9898
// 0049f5b7  64a100000000         mov eax, dword ptr fs:[0]
// 0049f5bd  50                   push eax
// 0049f5be  64892500000000       mov dword ptr fs:[0], esp
// 0049f5c5  51                   push ecx
// 0049f5c6  56                   push esi
// 0049f5c7  8bf1                 mov esi, ecx
// 0049f5c9  89742404             mov dword ptr [esp + 4], esi
// 0049f5cd  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049f5d1  33d2                 xor edx, edx
// 0049f5d3  c706902f8200         mov dword ptr [esi], 0x822f90
// 0049f5d9  895608               mov dword ptr [esi + 8], edx
// 0049f5dc  8b08                 mov ecx, dword ptr [eax]
// 0049f5de  89542410             mov dword ptr [esp + 0x10], edx
// 0049f5e2  3bca                 cmp ecx, edx
// 0049f5e4  7415                 je 0x49f5fb
// 0049f5e6  52                   push edx
// 0049f5e7  894e08               mov dword ptr [esi + 8], ecx
// 0049f5ea  8b08                 mov ecx, dword ptr [eax]
// 0049f5ec  8d5610               lea edx, [esi + 0x10]
// 0049f5ef  83c008               add eax, 8
// 0049f5f2  52                   push edx
// 0049f5f3  50                   push eax
// 0049f5f4  8b01                 mov eax, dword ptr [ecx]
// 0049f5f6  ffd0                 call eax
// 0049f5f8  83c40c               add esp, 0xc
// 0049f5fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049f5ff  8bc6                 mov eax, esi
// 0049f601  5e                   pop esi
// 0049f602  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f609  83c410               add esp, 0x10
// 0049f60c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
