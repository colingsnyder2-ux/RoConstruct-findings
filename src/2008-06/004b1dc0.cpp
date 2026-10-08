// roc 2008-06 004b1dc0  unit: RBX::VPartInstance::?$SignalDesc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1dc0
//
// 004b1dc0  6aff                 push -1
// 004b1dc2  6898987d00           push 0x7d9898
// 004b1dc7  64a100000000         mov eax, dword ptr fs:[0]
// 004b1dcd  50                   push eax
// 004b1dce  64892500000000       mov dword ptr fs:[0], esp
// 004b1dd5  51                   push ecx
// 004b1dd6  56                   push esi
// 004b1dd7  8bf1                 mov esi, ecx
// 004b1dd9  89742404             mov dword ptr [esp + 4], esi
// 004b1ddd  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b1de1  33d2                 xor edx, edx
// 004b1de3  c706944b8200         mov dword ptr [esi], 0x824b94
// 004b1de9  895608               mov dword ptr [esi + 8], edx
// 004b1dec  8b08                 mov ecx, dword ptr [eax]
// 004b1dee  89542410             mov dword ptr [esp + 0x10], edx
// 004b1df2  3bca                 cmp ecx, edx
// 004b1df4  7415                 je 0x4b1e0b
// 004b1df6  52                   push edx
// 004b1df7  894e08               mov dword ptr [esi + 8], ecx
// 004b1dfa  8b08                 mov ecx, dword ptr [eax]
// 004b1dfc  8d5610               lea edx, [esi + 0x10]
// 004b1dff  83c008               add eax, 8
// 004b1e02  52                   push edx
// 004b1e03  50                   push eax
// 004b1e04  8b01                 mov eax, dword ptr [ecx]
// 004b1e06  ffd0                 call eax
// 004b1e08  83c40c               add esp, 0xc
// 004b1e0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1e0f  8bc6                 mov eax, esi
// 004b1e11  5e                   pop esi
// 004b1e12  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1e19  83c410               add esp, 0x10
// 004b1e1c  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ??0?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@QAE@ABV?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
