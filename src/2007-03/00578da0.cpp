// roc 2007-03 00578da0  unit: seg_00570000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578da0
//
// 00578da0  56                   push esi
// 00578da1  8d44240c             lea eax, [esp + 0xc]
// 00578da5  8bf1                 mov esi, ecx
// 00578da7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00578dab  50                   push eax
// 00578dac  51                   push ecx
// 00578dad  e8defaffff           call 0x578890
// 00578db2  8bc8                 mov ecx, eax
// 00578db4  e847de0300           call 0x5b6c00
// 00578db9  84c0                 test al, al
// 00578dbb  7422                 je 0x578ddf
// 00578dbd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00578dc1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00578dc4  8954240c             mov dword ptr [esp + 0xc], edx
// 00578dc8  8b01                 mov eax, dword ptr [ecx]
// 00578dca  8b4008               mov eax, dword ptr [eax + 8]
// 00578dcd  8d54240c             lea edx, [esp + 0xc]
// 00578dd1  52                   push edx
// 00578dd2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00578dd6  52                   push edx
// 00578dd7  ffd0                 call eax
// 00578dd9  b001                 mov al, 1
// 00578ddb  5e                   pop esi
// 00578ddc  c20800               ret 8
// 00578ddf  32c0                 xor al, al
// 00578de1  5e                   pop esi
// 00578de2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
