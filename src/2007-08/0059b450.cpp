// roc 2007-08 0059b450  unit: RBX::VCamera::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b450
//
// 0059b450  56                   push esi
// 0059b451  8d44240c             lea eax, [esp + 0xc]
// 0059b455  8bf1                 mov esi, ecx
// 0059b457  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059b45b  50                   push eax
// 0059b45c  51                   push ecx
// 0059b45d  e8defaffff           call 0x59af40
// 0059b462  8bc8                 mov ecx, eax
// 0059b464  e8370e0400           call 0x5dc2a0
// 0059b469  84c0                 test al, al
// 0059b46b  7422                 je 0x59b48f
// 0059b46d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059b471  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059b474  8954240c             mov dword ptr [esp + 0xc], edx
// 0059b478  8b01                 mov eax, dword ptr [ecx]
// 0059b47a  8b4008               mov eax, dword ptr [eax + 8]
// 0059b47d  8d54240c             lea edx, [esp + 0xc]
// 0059b481  52                   push edx
// 0059b482  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059b486  52                   push edx
// 0059b487  ffd0                 call eax
// 0059b489  b001                 mov al, 1
// 0059b48b  5e                   pop esi
// 0059b48c  c20800               ret 8
// 0059b48f  32c0                 xor al, al
// 0059b491  5e                   pop esi
// 0059b492  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
