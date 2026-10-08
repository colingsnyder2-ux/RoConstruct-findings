// roc 2007-08 00577a40  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577a40
//
// 00577a40  56                   push esi
// 00577a41  8d44240c             lea eax, [esp + 0xc]
// 00577a45  8bf1                 mov esi, ecx
// 00577a47  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00577a4b  50                   push eax
// 00577a4c  51                   push ecx
// 00577a4d  e84ef6ffff           call 0x5770a0
// 00577a52  8bc8                 mov ecx, eax
// 00577a54  e847480600           call 0x5dc2a0
// 00577a59  84c0                 test al, al
// 00577a5b  7422                 je 0x577a7f
// 00577a5d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577a61  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00577a64  8954240c             mov dword ptr [esp + 0xc], edx
// 00577a68  8b01                 mov eax, dword ptr [ecx]
// 00577a6a  8b4008               mov eax, dword ptr [eax + 8]
// 00577a6d  8d54240c             lea edx, [esp + 0xc]
// 00577a71  52                   push edx
// 00577a72  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577a76  52                   push edx
// 00577a77  ffd0                 call eax
// 00577a79  b001                 mov al, 1
// 00577a7b  5e                   pop esi
// 00577a7c  c20800               ret 8
// 00577a7f  32c0                 xor al, al
// 00577a81  5e                   pop esi
// 00577a82  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
