// roc 2007-08 00574fc0  unit: RBX::PartInstance  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574fc0
//
// 00574fc0  64a100000000         mov eax, dword ptr fs:[0]
// 00574fc6  6aff                 push -1
// 00574fc8  6848117500           push 0x751148
// 00574fcd  50                   push eax
// 00574fce  64892500000000       mov dword ptr fs:[0], esp
// 00574fd5  56                   push esi
// 00574fd6  8bf1                 mov esi, ecx
// 00574fd8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00574fdc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00574fe0  8b542418             mov edx, dword ptr [esp + 0x18]
// 00574fe4  50                   push eax
// 00574fe5  51                   push ecx
// 00574fe6  52                   push edx
// 00574fe7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00574fef  e87c8affff           call 0x56da70
// 00574ff4  50                   push eax
// 00574ff5  8b442424             mov eax, dword ptr [esp + 0x24]
// 00574ff9  50                   push eax
// 00574ffa  8bce                 mov ecx, esi
// 00574ffc  e8df230100           call 0x5873e0
// 00575001  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00575005  c7068caa7a00         mov dword ptr [esi], 0x7aaa8c
// 0057500b  6a00                 push 0
// 0057500d  894e18               mov dword ptr [esi + 0x18], ecx
// 00575010  e84dac0b00           call 0x62fc62
// 00575015  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00575019  83c404               add esp, 4
// 0057501c  8bc6                 mov eax, esi
// 0057501e  64890d00000000       mov dword ptr fs:[0], ecx
// 00575025  5e                   pop esi
// 00575026  83c40c               add esp, 0xc
// 00575029  c21400               ret 0x14
// library rbxgs/humanoid\Humanoid.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
