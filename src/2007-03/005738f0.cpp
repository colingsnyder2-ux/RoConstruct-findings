// roc 2007-03 005738f0  unit: seg_00570000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005738f0
//
// 005738f0  64a100000000         mov eax, dword ptr fs:[0]
// 005738f6  6aff                 push -1
// 005738f8  6808647500           push 0x756408
// 005738fd  50                   push eax
// 005738fe  64892500000000       mov dword ptr fs:[0], esp
// 00573905  56                   push esi
// 00573906  8bf1                 mov esi, ecx
// 00573908  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057390c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573910  8b542418             mov edx, dword ptr [esp + 0x18]
// 00573914  50                   push eax
// 00573915  51                   push ecx
// 00573916  52                   push edx
// 00573917  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057391f  e84c9bffff           call 0x56d470
// 00573924  50                   push eax
// 00573925  8b442424             mov eax, dword ptr [esp + 0x24]
// 00573929  50                   push eax
// 0057392a  8bce                 mov ecx, esi
// 0057392c  e89f000100           call 0x5839d0
// 00573931  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00573935  c7064cc17a00         mov dword ptr [esi], 0x7ac14c
// 0057393b  6a00                 push 0
// 0057393d  894e18               mov dword ptr [esi + 0x18], ecx
// 00573940  e8aba70a00           call 0x61e0f0
// 00573945  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00573949  83c404               add esp, 4
// 0057394c  8bc6                 mov eax, esi
// 0057394e  64890d00000000       mov dword ptr fs:[0], ecx
// 00573955  5e                   pop esi
// 00573956  83c40c               add esp, 0xc
// 00573959  c21400               ret 0x14
// library rbxgs/humanoid\Humanoid.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
