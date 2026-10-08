// roc 2007-08 005dc630  unit: RBX::VFeature::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dc630
//
// 005dc630  56                   push esi
// 005dc631  8d44240c             lea eax, [esp + 0xc]
// 005dc635  8bf1                 mov esi, ecx
// 005dc637  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dc63b  50                   push eax
// 005dc63c  51                   push ecx
// 005dc63d  e8cef9ffff           call 0x5dc010
// 005dc642  8bc8                 mov ecx, eax
// 005dc644  e857fcffff           call 0x5dc2a0
// 005dc649  84c0                 test al, al
// 005dc64b  7422                 je 0x5dc66f
// 005dc64d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dc651  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dc654  8954240c             mov dword ptr [esp + 0xc], edx
// 005dc658  8b01                 mov eax, dword ptr [ecx]
// 005dc65a  8b4008               mov eax, dword ptr [eax + 8]
// 005dc65d  8d54240c             lea edx, [esp + 0xc]
// 005dc661  52                   push edx
// 005dc662  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005dc666  52                   push edx
// 005dc667  ffd0                 call eax
// 005dc669  b001                 mov al, 1
// 005dc66b  5e                   pop esi
// 005dc66c  c20800               ret 8
// 005dc66f  32c0                 xor al, al
// 005dc671  5e                   pop esi
// 005dc672  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
