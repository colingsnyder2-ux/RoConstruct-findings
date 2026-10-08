// roc 2007-08 0059e080  unit: RBX::VHopperBin::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059e080
//
// 0059e080  56                   push esi
// 0059e081  8d44240c             lea eax, [esp + 0xc]
// 0059e085  8bf1                 mov esi, ecx
// 0059e087  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059e08b  50                   push eax
// 0059e08c  51                   push ecx
// 0059e08d  e84efaffff           call 0x59dae0
// 0059e092  8bc8                 mov ecx, eax
// 0059e094  e807e20300           call 0x5dc2a0
// 0059e099  84c0                 test al, al
// 0059e09b  7422                 je 0x59e0bf
// 0059e09d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059e0a1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059e0a4  8954240c             mov dword ptr [esp + 0xc], edx
// 0059e0a8  8b01                 mov eax, dword ptr [ecx]
// 0059e0aa  8b4008               mov eax, dword ptr [eax + 8]
// 0059e0ad  8d54240c             lea edx, [esp + 0xc]
// 0059e0b1  52                   push edx
// 0059e0b2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059e0b6  52                   push edx
// 0059e0b7  ffd0                 call eax
// 0059e0b9  b001                 mov al, 1
// 0059e0bb  5e                   pop esi
// 0059e0bc  c20800               ret 8
// 0059e0bf  32c0                 xor al, al
// 0059e0c1  5e                   pop esi
// 0059e0c2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
