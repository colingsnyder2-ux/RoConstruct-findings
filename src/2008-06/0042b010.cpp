// roc 2008-06 0042b010  unit: EventHandler  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b010
//
// 0042b010  6aff                 push -1
// 0042b012  6898987d00           push 0x7d9898
// 0042b017  64a100000000         mov eax, dword ptr fs:[0]
// 0042b01d  50                   push eax
// 0042b01e  64892500000000       mov dword ptr fs:[0], esp
// 0042b025  51                   push ecx
// 0042b026  56                   push esi
// 0042b027  8bf1                 mov esi, ecx
// 0042b029  89742404             mov dword ptr [esp + 4], esi
// 0042b02d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0042b031  33d2                 xor edx, edx
// 0042b033  c70604068100         mov dword ptr [esi], 0x810604
// 0042b039  895608               mov dword ptr [esi + 8], edx
// 0042b03c  8b08                 mov ecx, dword ptr [eax]
// 0042b03e  89542410             mov dword ptr [esp + 0x10], edx
// 0042b042  3bca                 cmp ecx, edx
// 0042b044  7415                 je 0x42b05b
// 0042b046  52                   push edx
// 0042b047  894e08               mov dword ptr [esi + 8], ecx
// 0042b04a  8b08                 mov ecx, dword ptr [eax]
// 0042b04c  8d5610               lea edx, [esi + 0x10]
// 0042b04f  83c008               add eax, 8
// 0042b052  52                   push edx
// 0042b053  50                   push eax
// 0042b054  8b01                 mov eax, dword ptr [ecx]
// 0042b056  ffd0                 call eax
// 0042b058  83c40c               add esp, 0xc
// 0042b05b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042b05f  8bc6                 mov eax, esi
// 0042b061  5e                   pop esi
// 0042b062  64890d00000000       mov dword ptr fs:[0], ecx
// 0042b069  83c410               add esp, 0x10
// 0042b06c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
