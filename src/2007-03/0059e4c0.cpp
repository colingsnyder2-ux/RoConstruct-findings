// roc 2007-03 0059e4c0  unit: seg_00590000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059e4c0
//
// 0059e4c0  56                   push esi
// 0059e4c1  57                   push edi
// 0059e4c2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0059e4c6  57                   push edi
// 0059e4c7  8bf1                 mov esi, ecx
// 0059e4c9  e8e2faffff           call 0x59dfb0
// 0059e4ce  8bc8                 mov ecx, eax
// 0059e4d0  e83b7deaff           call 0x446210
// 0059e4d5  84c0                 test al, al
// 0059e4d7  741f                 je 0x59e4f8
// 0059e4d9  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059e4dc  8d542410             lea edx, [esp + 0x10]
// 0059e4e0  52                   push edx
// 0059e4e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059e4e5  897c2414             mov dword ptr [esp + 0x14], edi
// 0059e4e9  8b01                 mov eax, dword ptr [ecx]
// 0059e4eb  8b4008               mov eax, dword ptr [eax + 8]
// 0059e4ee  52                   push edx
// 0059e4ef  ffd0                 call eax
// 0059e4f1  5f                   pop edi
// 0059e4f2  b001                 mov al, 1
// 0059e4f4  5e                   pop esi
// 0059e4f5  c20800               ret 8
// 0059e4f8  5f                   pop edi
// 0059e4f9  32c0                 xor al, al
// 0059e4fb  5e                   pop esi
// 0059e4fc  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setEnumValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
