// roc 2008-06 0060f2d0  unit: RBX::BlockBlockContact  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060f2d0
//
// 0060f2d0  6aff                 push -1
// 0060f2d2  68a88d7d00           push 0x7d8da8
// 0060f2d7  64a100000000         mov eax, dword ptr fs:[0]
// 0060f2dd  50                   push eax
// 0060f2de  64892500000000       mov dword ptr fs:[0], esp
// 0060f2e5  83ec0c               sub esp, 0xc
// 0060f2e8  33c0                 xor eax, eax
// 0060f2ea  56                   push esi
// 0060f2eb  89442408             mov dword ptr [esp + 8], eax
// 0060f2ef  8944240c             mov dword ptr [esp + 0xc], eax
// 0060f2f3  89442404             mov dword ptr [esp + 4], eax
// 0060f2f7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060f2fb  89442418             mov dword ptr [esp + 0x18], eax
// 0060f2ff  8d442404             lea eax, [esp + 4]
// 0060f303  50                   push eax
// 0060f304  51                   push ecx
// 0060f305  e826f8ffff           call 0x60eb30
// 0060f30a  8b742428             mov esi, dword ptr [esp + 0x28]
// 0060f30e  8d54240c             lea edx, [esp + 0xc]
// 0060f312  52                   push edx
// 0060f313  56                   push esi
// 0060f314  e8570d0000           call 0x610070
// 0060f319  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060f31d  50                   push eax
// 0060f31e  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0060f326  e8f589efff           call 0x507d20
// 0060f32b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060f32f  83c414               add esp, 0x14
// 0060f332  8bc6                 mov eax, esi
// 0060f334  5e                   pop esi
// 0060f335  64890d00000000       mov dword ptr fs:[0], ecx
// 0060f33c  83c418               add esp, 0x18
// 0060f33f  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?computeExtents@DragUtilities@RBX@@SA?AVExtents@2@ABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
