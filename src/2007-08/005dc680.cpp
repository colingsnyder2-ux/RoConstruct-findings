// roc 2007-08 005dc680  unit: RBX::VFeature::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc680
//
// 005dc680  56                   push esi
// 005dc681  8d44240c             lea eax, [esp + 0xc]
// 005dc685  8bf1                 mov esi, ecx
// 005dc687  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dc68b  50                   push eax
// 005dc68c  51                   push ecx
// 005dc68d  e87ef9ffff           call 0x5dc010
// 005dc692  8bc8                 mov ecx, eax
// 005dc694  e837bafdff           call 0x5b80d0
// 005dc699  84c0                 test al, al
// 005dc69b  7422                 je 0x5dc6bf
// 005dc69d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dc6a1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dc6a4  8954240c             mov dword ptr [esp + 0xc], edx
// 005dc6a8  8b01                 mov eax, dword ptr [ecx]
// 005dc6aa  8b4008               mov eax, dword ptr [eax + 8]
// 005dc6ad  8d54240c             lea edx, [esp + 0xc]
// 005dc6b1  52                   push edx
// 005dc6b2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dc6b6  52                   push edx
// 005dc6b7  ffd0                 call eax
// 005dc6b9  b001                 mov al, 1
// 005dc6bb  5e                   pop esi
// 005dc6bc  c20800               ret 8
// 005dc6bf  32c0                 xor al, al
// 005dc6c1  5e                   pop esi
// 005dc6c2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
