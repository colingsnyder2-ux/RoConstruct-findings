// roc 2008-06 00443230  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443230
//
// 00443230  64a100000000         mov eax, dword ptr fs:[0]
// 00443236  6aff                 push -1
// 00443238  68483a7d00           push 0x7d3a48
// 0044323d  50                   push eax
// 0044323e  64892500000000       mov dword ptr fs:[0], esp
// 00443245  56                   push esi
// 00443246  8bf1                 mov esi, ecx
// 00443248  8b442424             mov eax, dword ptr [esp + 0x24]
// 0044324c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00443250  8b542418             mov edx, dword ptr [esp + 0x18]
// 00443254  50                   push eax
// 00443255  51                   push ecx
// 00443256  52                   push edx
// 00443257  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0044325f  e88c9b1200           call 0x56cdf0
// 00443264  50                   push eax
// 00443265  8b442424             mov eax, dword ptr [esp + 0x24]
// 00443269  50                   push eax
// 0044326a  8bce                 mov ecx, esi
// 0044326c  e8df931200           call 0x56c650
// 00443271  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00443275  c706d4588100         mov dword ptr [esi], 0x8158d4
// 0044327b  894e18               mov dword ptr [esi + 0x18], ecx
// 0044327e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00443282  8bc6                 mov eax, esi
// 00443284  64890d00000000       mov dword ptr fs:[0], ecx
// 0044328b  5e                   pop esi
// 0044328c  83c40c               add esp, 0xc
// 0044328f  c21400               ret 0x14
// library rbxgs/script\Script.cpp (function ??0?$TypedPropertyDescriptor@_N@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@_N@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
