// roc 2007-08 0059e0d0  unit: RBX::VHopperBin::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059e0d0
//
// 0059e0d0  56                   push esi
// 0059e0d1  8d44240c             lea eax, [esp + 0xc]
// 0059e0d5  8bf1                 mov esi, ecx
// 0059e0d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059e0db  50                   push eax
// 0059e0dc  51                   push ecx
// 0059e0dd  e8fef9ffff           call 0x59dae0
// 0059e0e2  8bc8                 mov ecx, eax
// 0059e0e4  e8e79f0100           call 0x5b80d0
// 0059e0e9  84c0                 test al, al
// 0059e0eb  7422                 je 0x59e10f
// 0059e0ed  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059e0f1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059e0f4  8954240c             mov dword ptr [esp + 0xc], edx
// 0059e0f8  8b01                 mov eax, dword ptr [ecx]
// 0059e0fa  8b4008               mov eax, dword ptr [eax + 8]
// 0059e0fd  8d54240c             lea edx, [esp + 0xc]
// 0059e101  52                   push edx
// 0059e102  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059e106  52                   push edx
// 0059e107  ffd0                 call eax
// 0059e109  b001                 mov al, 1
// 0059e10b  5e                   pop esi
// 0059e10c  c20800               ret 8
// 0059e10f  32c0                 xor al, al
// 0059e111  5e                   pop esi
// 0059e112  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
