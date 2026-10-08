// roc 2007-03 005b5ab0  unit: seg_005b0000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b5ab0
//
// 005b5ab0  6aff                 push -1
// 005b5ab2  6818a07500           push 0x75a018
// 005b5ab7  64a100000000         mov eax, dword ptr fs:[0]
// 005b5abd  50                   push eax
// 005b5abe  64892500000000       mov dword ptr fs:[0], esp
// 005b5ac5  83ec0c               sub esp, 0xc
// 005b5ac8  33c0                 xor eax, eax
// 005b5aca  56                   push esi
// 005b5acb  89442408             mov dword ptr [esp + 8], eax
// 005b5acf  8944240c             mov dword ptr [esp + 0xc], eax
// 005b5ad3  89442404             mov dword ptr [esp + 4], eax
// 005b5ad7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b5adb  89442418             mov dword ptr [esp + 0x18], eax
// 005b5adf  8d442404             lea eax, [esp + 4]
// 005b5ae3  50                   push eax
// 005b5ae4  51                   push ecx
// 005b5ae5  e8c6f7ffff           call 0x5b52b0
// 005b5aea  8b742428             mov esi, dword ptr [esp + 0x28]
// 005b5aee  8d54240c             lea edx, [esp + 0xc]
// 005b5af2  52                   push edx
// 005b5af3  56                   push esi
// 005b5af4  e8f7420200           call 0x5d9df0
// 005b5af9  8b442414             mov eax, dword ptr [esp + 0x14]
// 005b5afd  50                   push eax
// 005b5afe  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005b5b06  e875d8f3ff           call 0x4f3380
// 005b5b0b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b5b0f  83c414               add esp, 0x14
// 005b5b12  8bc6                 mov eax, esi
// 005b5b14  5e                   pop esi
// 005b5b15  64890d00000000       mov dword ptr fs:[0], ecx
// 005b5b1c  83c418               add esp, 0x18
// 005b5b1f  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?computeExtents@DragUtilities@RBX@@SA?AVExtents@2@ABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
