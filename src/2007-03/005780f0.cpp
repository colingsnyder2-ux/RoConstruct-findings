// roc 2007-03 005780f0  unit: seg_00570000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005780f0
//
// 005780f0  64a100000000         mov eax, dword ptr fs:[0]
// 005780f6  6aff                 push -1
// 005780f8  6808647500           push 0x756408
// 005780fd  50                   push eax
// 005780fe  64892500000000       mov dword ptr fs:[0], esp
// 00578105  56                   push esi
// 00578106  8bf1                 mov esi, ecx
// 00578108  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057810c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00578110  8b542418             mov edx, dword ptr [esp + 0x18]
// 00578114  50                   push eax
// 00578115  51                   push ecx
// 00578116  52                   push edx
// 00578117  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057811f  e83c290600           call 0x5daa60
// 00578124  50                   push eax
// 00578125  8b442424             mov eax, dword ptr [esp + 0x24]
// 00578129  50                   push eax
// 0057812a  8bce                 mov ecx, esi
// 0057812c  e89fb80000           call 0x5839d0
// 00578131  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00578135  c70670c87a00         mov dword ptr [esi], 0x7ac870
// 0057813b  6a00                 push 0
// 0057813d  894e18               mov dword ptr [esi + 0x18], ecx
// 00578140  e8ab5f0a00           call 0x61e0f0
// 00578145  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00578149  83c404               add esp, 4
// 0057814c  8bc6                 mov eax, esi
// 0057814e  64890d00000000       mov dword ptr fs:[0], ecx
// 00578155  5e                   pop esi
// 00578156  83c40c               add esp, 0xc
// 00578159  c21400               ret 0x14
// library rbxgs/humanoid\Humanoid.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
