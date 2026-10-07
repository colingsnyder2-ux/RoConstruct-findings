// roc 2008-06 00584440  unit: RBX::ModelInstance  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584440
//
// 00584440  64a100000000         mov eax, dword ptr fs:[0]
// 00584446  6aff                 push -1
// 00584448  68483a7d00           push 0x7d3a48
// 0058444d  50                   push eax
// 0058444e  64892500000000       mov dword ptr fs:[0], esp
// 00584455  56                   push esi
// 00584456  8bf1                 mov esi, ecx
// 00584458  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058445c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00584460  8b542418             mov edx, dword ptr [esp + 0x18]
// 00584464  50                   push eax
// 00584465  51                   push ecx
// 00584466  52                   push edx
// 00584467  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058446f  e88c550100           call 0x599a00
// 00584474  50                   push eax
// 00584475  8b442424             mov eax, dword ptr [esp + 0x24]
// 00584479  50                   push eax
// 0058447a  8bce                 mov ecx, esi
// 0058447c  e8cf81feff           call 0x56c650
// 00584481  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00584485  c706c00c8300         mov dword ptr [esi], 0x830cc0
// 0058448b  894e18               mov dword ptr [esi + 0x18], ecx
// 0058448e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00584492  8bc6                 mov eax, esi
// 00584494  64890d00000000       mov dword ptr fs:[0], ecx
// 0058449b  5e                   pop esi
// 0058449c  83c40c               add esp, 0xc
// 0058449f  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
