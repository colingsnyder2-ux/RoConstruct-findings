// roc 2007-08 0059b4a0  unit: RBX::VCamera::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b4a0
//
// 0059b4a0  56                   push esi
// 0059b4a1  8d44240c             lea eax, [esp + 0xc]
// 0059b4a5  8bf1                 mov esi, ecx
// 0059b4a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059b4ab  50                   push eax
// 0059b4ac  51                   push ecx
// 0059b4ad  e88efaffff           call 0x59af40
// 0059b4b2  8bc8                 mov ecx, eax
// 0059b4b4  e817cc0100           call 0x5b80d0
// 0059b4b9  84c0                 test al, al
// 0059b4bb  7422                 je 0x59b4df
// 0059b4bd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059b4c1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059b4c4  8954240c             mov dword ptr [esp + 0xc], edx
// 0059b4c8  8b01                 mov eax, dword ptr [ecx]
// 0059b4ca  8b4008               mov eax, dword ptr [eax + 8]
// 0059b4cd  8d54240c             lea edx, [esp + 0xc]
// 0059b4d1  52                   push edx
// 0059b4d2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059b4d6  52                   push edx
// 0059b4d7  ffd0                 call eax
// 0059b4d9  b001                 mov al, 1
// 0059b4db  5e                   pop esi
// 0059b4dc  c20800               ret 8
// 0059b4df  32c0                 xor al, al
// 0059b4e1  5e                   pop esi
// 0059b4e2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
