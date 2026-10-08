// roc 2007-03 00573880  unit: seg_00570000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573880
//
// 00573880  64a100000000         mov eax, dword ptr fs:[0]
// 00573886  6aff                 push -1
// 00573888  6808647500           push 0x756408
// 0057388d  50                   push eax
// 0057388e  64892500000000       mov dword ptr fs:[0], esp
// 00573895  56                   push esi
// 00573896  8bf1                 mov esi, ecx
// 00573898  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057389c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005738a0  8b542418             mov edx, dword ptr [esp + 0x18]
// 005738a4  50                   push eax
// 005738a5  51                   push ecx
// 005738a6  52                   push edx
// 005738a7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005738af  e89c9cffff           call 0x56d550
// 005738b4  50                   push eax
// 005738b5  8b442424             mov eax, dword ptr [esp + 0x24]
// 005738b9  50                   push eax
// 005738ba  8bce                 mov ecx, esi
// 005738bc  e80f010100           call 0x5839d0
// 005738c1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005738c5  c70624c17a00         mov dword ptr [esi], 0x7ac124
// 005738cb  6a00                 push 0
// 005738cd  894e18               mov dword ptr [esi + 0x18], ecx
// 005738d0  e81ba80a00           call 0x61e0f0
// 005738d5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005738d9  83c404               add esp, 4
// 005738dc  8bc6                 mov eax, esi
// 005738de  64890d00000000       mov dword ptr fs:[0], ecx
// 005738e5  5e                   pop esi
// 005738e6  83c40c               add esp, 0xc
// 005738e9  c21400               ret 0x14
// library rbxgs/humanoid\Humanoid.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
