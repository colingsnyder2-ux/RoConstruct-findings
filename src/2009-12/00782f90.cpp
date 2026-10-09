// roc 2009-12 00782f90  unit: RBX::BlockBlockContact  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00782f90
//
// 00782f90  6aff                 push -1
// 00782f92  68e8369500           push 0x9536e8
// 00782f97  64a100000000         mov eax, dword ptr fs:[0]
// 00782f9d  50                   push eax
// 00782f9e  64892500000000       mov dword ptr fs:[0], esp
// 00782fa5  83ec0c               sub esp, 0xc
// 00782fa8  33c0                 xor eax, eax
// 00782faa  56                   push esi
// 00782fab  89442408             mov dword ptr [esp + 8], eax
// 00782faf  8944240c             mov dword ptr [esp + 0xc], eax
// 00782fb3  89442404             mov dword ptr [esp + 4], eax
// 00782fb7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00782fbb  89442418             mov dword ptr [esp + 0x18], eax
// 00782fbf  8d442404             lea eax, [esp + 4]
// 00782fc3  50                   push eax
// 00782fc4  51                   push ecx
// 00782fc5  e876f7ffff           call 0x782740
// 00782fca  8b742428             mov esi, dword ptr [esp + 0x28]
// 00782fce  8d54240c             lea edx, [esp + 0xc]
// 00782fd2  52                   push edx
// 00782fd3  56                   push esi
// 00782fd4  e8b7030000           call 0x783390
// 00782fd9  8b442414             mov eax, dword ptr [esp + 0x14]
// 00782fdd  50                   push eax
// 00782fde  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00782fe6  e8f573e6ff           call 0x5ea3e0
// 00782feb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00782fef  83c414               add esp, 0x14
// 00782ff2  8bc6                 mov eax, esi
// 00782ff4  5e                   pop esi
// 00782ff5  64890d00000000       mov dword ptr fs:[0], ecx
// 00782ffc  83c418               add esp, 0x18
// 00782fff  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?computeExtents@DragUtilities@RBX@@SA?AVExtents@2@ABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
