// roc 2007-03 00576250  unit: seg_00570000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00576250
//
// 00576250  56                   push esi
// 00576251  8d44240c             lea eax, [esp + 0xc]
// 00576255  8bf1                 mov esi, ecx
// 00576257  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057625b  50                   push eax
// 0057625c  51                   push ecx
// 0057625d  e83ef6ffff           call 0x5758a0
// 00576262  8bc8                 mov ecx, eax
// 00576264  e8d7770200           call 0x59da40
// 00576269  84c0                 test al, al
// 0057626b  7422                 je 0x57628f
// 0057626d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00576271  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00576274  8954240c             mov dword ptr [esp + 0xc], edx
// 00576278  8b01                 mov eax, dword ptr [ecx]
// 0057627a  8b4008               mov eax, dword ptr [eax + 8]
// 0057627d  8d54240c             lea edx, [esp + 0xc]
// 00576281  52                   push edx
// 00576282  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00576286  52                   push edx
// 00576287  ffd0                 call eax
// 00576289  b001                 mov al, 1
// 0057628b  5e                   pop esi
// 0057628c  c20800               ret 8
// 0057628f  32c0                 xor al, al
// 00576291  5e                   pop esi
// 00576292  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
