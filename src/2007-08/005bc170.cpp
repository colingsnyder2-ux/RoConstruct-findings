// roc 2007-08 005bc170  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bc170
//
// 005bc170  56                   push esi
// 005bc171  8d44240c             lea eax, [esp + 0xc]
// 005bc175  8bf1                 mov esi, ecx
// 005bc177  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005bc17b  50                   push eax
// 005bc17c  51                   push ecx
// 005bc17d  e8cefaffff           call 0x5bbc50
// 005bc182  8bc8                 mov ecx, eax
// 005bc184  e847bfffff           call 0x5b80d0
// 005bc189  84c0                 test al, al
// 005bc18b  7422                 je 0x5bc1af
// 005bc18d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005bc191  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005bc194  8954240c             mov dword ptr [esp + 0xc], edx
// 005bc198  8b01                 mov eax, dword ptr [ecx]
// 005bc19a  8b4008               mov eax, dword ptr [eax + 8]
// 005bc19d  8d54240c             lea edx, [esp + 0xc]
// 005bc1a1  52                   push edx
// 005bc1a2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005bc1a6  52                   push edx
// 005bc1a7  ffd0                 call eax
// 005bc1a9  b001                 mov al, 1
// 005bc1ab  5e                   pop esi
// 005bc1ac  c20800               ret 8
// 005bc1af  32c0                 xor al, al
// 005bc1b1  5e                   pop esi
// 005bc1b2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
