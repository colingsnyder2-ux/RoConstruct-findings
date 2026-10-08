// roc 2007-08 0059df80  unit: RBX::VHopperBin::?$EnumPropDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059df80
//
// 0059df80  56                   push esi
// 0059df81  57                   push edi
// 0059df82  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0059df86  57                   push edi
// 0059df87  8bf1                 mov esi, ecx
// 0059df89  e852fbffff           call 0x59dae0
// 0059df8e  8bc8                 mov ecx, eax
// 0059df90  e82b8deaff           call 0x446cc0
// 0059df95  84c0                 test al, al
// 0059df97  741f                 je 0x59dfb8
// 0059df99  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059df9c  8d542410             lea edx, [esp + 0x10]
// 0059dfa0  52                   push edx
// 0059dfa1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059dfa5  897c2414             mov dword ptr [esp + 0x14], edi
// 0059dfa9  8b01                 mov eax, dword ptr [ecx]
// 0059dfab  8b4008               mov eax, dword ptr [eax + 8]
// 0059dfae  52                   push edx
// 0059dfaf  ffd0                 call eax
// 0059dfb1  5f                   pop edi
// 0059dfb2  b001                 mov al, 1
// 0059dfb4  5e                   pop esi
// 0059dfb5  c20800               ret 8
// 0059dfb8  5f                   pop edi
// 0059dfb9  32c0                 xor al, al
// 0059dfbb  5e                   pop esi
// 0059dfbc  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
