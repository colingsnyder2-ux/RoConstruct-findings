// roc 2007-08 005bad30  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bad30
//
// 005bad30  6aff                 push -1
// 005bad32  6888937500           push 0x759388
// 005bad37  64a100000000         mov eax, dword ptr fs:[0]
// 005bad3d  50                   push eax
// 005bad3e  64892500000000       mov dword ptr fs:[0], esp
// 005bad45  83ec0c               sub esp, 0xc
// 005bad48  33c0                 xor eax, eax
// 005bad4a  56                   push esi
// 005bad4b  89442408             mov dword ptr [esp + 8], eax
// 005bad4f  8944240c             mov dword ptr [esp + 0xc], eax
// 005bad53  89442404             mov dword ptr [esp + 4], eax
// 005bad57  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005bad5b  89442418             mov dword ptr [esp + 0x18], eax
// 005bad5f  8d442404             lea eax, [esp + 4]
// 005bad63  50                   push eax
// 005bad64  51                   push ecx
// 005bad65  e8c6f7ffff           call 0x5ba530
// 005bad6a  8b742428             mov esi, dword ptr [esp + 0x28]
// 005bad6e  8d54240c             lea edx, [esp + 0xc]
// 005bad72  52                   push edx
// 005bad73  56                   push esi
// 005bad74  e867640200           call 0x5e11e0
// 005bad79  8b442414             mov eax, dword ptr [esp + 0x14]
// 005bad7d  50                   push eax
// 005bad7e  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005bad86  e8854af4ff           call 0x4ff810
// 005bad8b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005bad8f  83c414               add esp, 0x14
// 005bad92  8bc6                 mov eax, esi
// 005bad94  5e                   pop esi
// 005bad95  64890d00000000       mov dword ptr fs:[0], ecx
// 005bad9c  83c418               add esp, 0x18
// 005bad9f  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?computeExtents@DragUtilities@RBX@@SA?AVExtents@2@ABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
