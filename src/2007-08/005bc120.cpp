// roc 2007-08 005bc120  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc120
//
// 005bc120  56                   push esi
// 005bc121  8d44240c             lea eax, [esp + 0xc]
// 005bc125  8bf1                 mov esi, ecx
// 005bc127  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bc12b  50                   push eax
// 005bc12c  51                   push ecx
// 005bc12d  e81efbffff           call 0x5bbc50
// 005bc132  8bc8                 mov ecx, eax
// 005bc134  e867010200           call 0x5dc2a0
// 005bc139  84c0                 test al, al
// 005bc13b  7422                 je 0x5bc15f
// 005bc13d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005bc141  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005bc144  8954240c             mov dword ptr [esp + 0xc], edx
// 005bc148  8b01                 mov eax, dword ptr [ecx]
// 005bc14a  8b4008               mov eax, dword ptr [eax + 8]
// 005bc14d  8d54240c             lea edx, [esp + 0xc]
// 005bc151  52                   push edx
// 005bc152  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005bc156  52                   push edx
// 005bc157  ffd0                 call eax
// 005bc159  b001                 mov al, 1
// 005bc15b  5e                   pop esi
// 005bc15c  c20800               ret 8
// 005bc15f  32c0                 xor al, al
// 005bc161  5e                   pop esi
// 005bc162  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
