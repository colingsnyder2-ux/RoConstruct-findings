// roc 2008-06 0059a410  unit: RBX::PartInstance  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a410
//
// 0059a410  64a100000000         mov eax, dword ptr fs:[0]
// 0059a416  6aff                 push -1
// 0059a418  68483a7d00           push 0x7d3a48
// 0059a41d  50                   push eax
// 0059a41e  64892500000000       mov dword ptr fs:[0], esp
// 0059a425  56                   push esi
// 0059a426  8bf1                 mov esi, ecx
// 0059a428  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059a42c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059a430  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059a434  50                   push eax
// 0059a435  51                   push ecx
// 0059a436  52                   push edx
// 0059a437  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059a43f  e8fc2afdff           call 0x56cf40
// 0059a444  50                   push eax
// 0059a445  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059a449  50                   push eax
// 0059a44a  8bce                 mov ecx, esi
// 0059a44c  e8ff21fdff           call 0x56c650
// 0059a451  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059a455  c706f42b8300         mov dword ptr [esi], 0x832bf4
// 0059a45b  894e18               mov dword ptr [esi + 0x18], ecx
// 0059a45e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059a462  8bc6                 mov eax, esi
// 0059a464  64890d00000000       mov dword ptr fs:[0], ecx
// 0059a46b  5e                   pop esi
// 0059a46c  83c40c               add esp, 0xc
// 0059a46f  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
