// roc 2009-06 006b4340  unit: RBX::BlockBlockContact  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b4340
//
// 006b4340  6aff                 push -1
// 006b4342  6848098600           push 0x860948
// 006b4347  64a100000000         mov eax, dword ptr fs:[0]
// 006b434d  50                   push eax
// 006b434e  64892500000000       mov dword ptr fs:[0], esp
// 006b4355  83ec0c               sub esp, 0xc
// 006b4358  33c0                 xor eax, eax
// 006b435a  56                   push esi
// 006b435b  89442408             mov dword ptr [esp + 8], eax
// 006b435f  8944240c             mov dword ptr [esp + 0xc], eax
// 006b4363  89442404             mov dword ptr [esp + 4], eax
// 006b4367  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006b436b  89442418             mov dword ptr [esp + 0x18], eax
// 006b436f  8d442404             lea eax, [esp + 4]
// 006b4373  50                   push eax
// 006b4374  51                   push ecx
// 006b4375  e836f8ffff           call 0x6b3bb0
// 006b437a  8b742428             mov esi, dword ptr [esp + 0x28]
// 006b437e  8d54240c             lea edx, [esp + 0xc]
// 006b4382  52                   push edx
// 006b4383  56                   push esi
// 006b4384  e897020000           call 0x6b4620
// 006b4389  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b438d  50                   push eax
// 006b438e  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 006b4396  e8f56eebff           call 0x56b290
// 006b439b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006b439f  83c414               add esp, 0x14
// 006b43a2  8bc6                 mov eax, esi
// 006b43a4  5e                   pop esi
// 006b43a5  64890d00000000       mov dword ptr fs:[0], ecx
// 006b43ac  83c418               add esp, 0x18
// 006b43af  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?computeExtents@DragUtilities@RBX@@SA?AVExtents@2@ABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
