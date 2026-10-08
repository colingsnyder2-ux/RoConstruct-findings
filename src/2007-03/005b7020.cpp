// roc 2007-03 005b7020  unit: seg_005b0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b7020
//
// 005b7020  56                   push esi
// 005b7021  8d44240c             lea eax, [esp + 0xc]
// 005b7025  8bf1                 mov esi, ecx
// 005b7027  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b702b  50                   push eax
// 005b702c  51                   push ecx
// 005b702d  e8aefaffff           call 0x5b6ae0
// 005b7032  8bc8                 mov ecx, eax
// 005b7034  e8076afeff           call 0x59da40
// 005b7039  84c0                 test al, al
// 005b703b  7422                 je 0x5b705f
// 005b703d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b7041  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b7044  8954240c             mov dword ptr [esp + 0xc], edx
// 005b7048  8b01                 mov eax, dword ptr [ecx]
// 005b704a  8b4008               mov eax, dword ptr [eax + 8]
// 005b704d  8d54240c             lea edx, [esp + 0xc]
// 005b7051  52                   push edx
// 005b7052  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b7056  52                   push edx
// 005b7057  ffd0                 call eax
// 005b7059  b001                 mov al, 1
// 005b705b  5e                   pop esi
// 005b705c  c20800               ret 8
// 005b705f  32c0                 xor al, al
// 005b7061  5e                   pop esi
// 005b7062  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
