// roc 2007-03 005b7070  unit: seg_005b0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b7070
//
// 005b7070  56                   push esi
// 005b7071  8d44240c             lea eax, [esp + 0xc]
// 005b7075  8bf1                 mov esi, ecx
// 005b7077  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b707b  50                   push eax
// 005b707c  51                   push ecx
// 005b707d  e85efaffff           call 0x5b6ae0
// 005b7082  8bc8                 mov ecx, eax
// 005b7084  e877fbffff           call 0x5b6c00
// 005b7089  84c0                 test al, al
// 005b708b  7422                 je 0x5b70af
// 005b708d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b7091  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005b7094  8954240c             mov dword ptr [esp + 0xc], edx
// 005b7098  8b01                 mov eax, dword ptr [ecx]
// 005b709a  8b4008               mov eax, dword ptr [eax + 8]
// 005b709d  8d54240c             lea edx, [esp + 0xc]
// 005b70a1  52                   push edx
// 005b70a2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005b70a6  52                   push edx
// 005b70a7  ffd0                 call eax
// 005b70a9  b001                 mov al, 1
// 005b70ab  5e                   pop esi
// 005b70ac  c20800               ret 8
// 005b70af  32c0                 xor al, al
// 005b70b1  5e                   pop esi
// 005b70b2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
