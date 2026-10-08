// roc 2007-08 00579540  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579540
//
// 00579540  56                   push esi
// 00579541  8d44240c             lea eax, [esp + 0xc]
// 00579545  8bf1                 mov esi, ecx
// 00579547  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057954b  50                   push eax
// 0057954c  51                   push ecx
// 0057954d  e8eef6ffff           call 0x578c40
// 00579552  8bc8                 mov ecx, eax
// 00579554  e8472d0600           call 0x5dc2a0
// 00579559  84c0                 test al, al
// 0057955b  7422                 je 0x57957f
// 0057955d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00579561  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00579564  8954240c             mov dword ptr [esp + 0xc], edx
// 00579568  8b01                 mov eax, dword ptr [ecx]
// 0057956a  8b4008               mov eax, dword ptr [eax + 8]
// 0057956d  8d54240c             lea edx, [esp + 0xc]
// 00579571  52                   push edx
// 00579572  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00579576  52                   push edx
// 00579577  ffd0                 call eax
// 00579579  b001                 mov al, 1
// 0057957b  5e                   pop esi
// 0057957c  c20800               ret 8
// 0057957f  32c0                 xor al, al
// 00579581  5e                   pop esi
// 00579582  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
