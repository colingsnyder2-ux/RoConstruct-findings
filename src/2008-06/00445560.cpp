// roc 2008-06 00445560  unit: VCRenderSettings::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445560
//
// 00445560  64a100000000         mov eax, dword ptr fs:[0]
// 00445566  6aff                 push -1
// 00445568  68483a7d00           push 0x7d3a48
// 0044556d  50                   push eax
// 0044556e  64892500000000       mov dword ptr fs:[0], esp
// 00445575  56                   push esi
// 00445576  8bf1                 mov esi, ecx
// 00445578  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044557c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00445580  8b542418             mov edx, dword ptr [esp + 0x18]
// 00445584  50                   push eax
// 00445585  51                   push ecx
// 00445586  52                   push edx
// 00445587  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0044558f  e83c791200           call 0x56ced0
// 00445594  50                   push eax
// 00445595  8b442424             mov eax, dword ptr [esp + 0x24]
// 00445599  50                   push eax
// 0044559a  8bce                 mov ecx, esi
// 0044559c  e8af701200           call 0x56c650
// 004455a1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004455a5  c706905d8100         mov dword ptr [esi], 0x815d90
// 004455ab  894e18               mov dword ptr [esi + 0x18], ecx
// 004455ae  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004455b2  8bc6                 mov eax, esi
// 004455b4  64890d00000000       mov dword ptr fs:[0], ecx
// 004455bb  5e                   pop esi
// 004455bc  83c40c               add esp, 0xc
// 004455bf  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
