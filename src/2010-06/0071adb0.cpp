// roc 2010-06 0071adb0  unit: RBX::BlockBlockContact  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071adb0
//
// 0071adb0  6aff                 push -1
// 0071adb2  68e8829a00           push 0x9a82e8
// 0071adb7  64a100000000         mov eax, dword ptr fs:[0]
// 0071adbd  50                   push eax
// 0071adbe  64892500000000       mov dword ptr fs:[0], esp
// 0071adc5  83ec0c               sub esp, 0xc
// 0071adc8  33c0                 xor eax, eax
// 0071adca  56                   push esi
// 0071adcb  89442408             mov dword ptr [esp + 8], eax
// 0071adcf  8944240c             mov dword ptr [esp + 0xc], eax
// 0071add3  89442404             mov dword ptr [esp + 4], eax
// 0071add7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071addb  89442418             mov dword ptr [esp + 0x18], eax
// 0071addf  8d442404             lea eax, [esp + 4]
// 0071ade3  50                   push eax
// 0071ade4  51                   push ecx
// 0071ade5  e876f7ffff           call 0x71a560
// 0071adea  8b742428             mov esi, dword ptr [esp + 0x28]
// 0071adee  8d54240c             lea edx, [esp + 0xc]
// 0071adf2  52                   push edx
// 0071adf3  56                   push esi
// 0071adf4  e827040000           call 0x71b220
// 0071adf9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0071adfd  50                   push eax
// 0071adfe  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0071ae06  e8b52be3ff           call 0x54d9c0
// 0071ae0b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071ae0f  83c414               add esp, 0x14
// 0071ae12  8bc6                 mov eax, esi
// 0071ae14  5e                   pop esi
// 0071ae15  64890d00000000       mov dword ptr fs:[0], ecx
// 0071ae1c  83c418               add esp, 0x18
// 0071ae1f  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?computeExtents@DragUtilities@RBX@@SA?AVExtents@2@ABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
