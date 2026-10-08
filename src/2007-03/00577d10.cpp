// roc 2007-03 00577d10  unit: seg_00570000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577d10
//
// 00577d10  56                   push esi
// 00577d11  8d44240c             lea eax, [esp + 0xc]
// 00577d15  8bf1                 mov esi, ecx
// 00577d17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00577d1b  50                   push eax
// 00577d1c  51                   push ecx
// 00577d1d  e89ef6ffff           call 0x5773c0
// 00577d22  8bc8                 mov ecx, eax
// 00577d24  e8175d0200           call 0x59da40
// 00577d29  84c0                 test al, al
// 00577d2b  7422                 je 0x577d4f
// 00577d2d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577d31  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00577d34  8954240c             mov dword ptr [esp + 0xc], edx
// 00577d38  8b01                 mov eax, dword ptr [ecx]
// 00577d3a  8b4008               mov eax, dword ptr [eax + 8]
// 00577d3d  8d54240c             lea edx, [esp + 0xc]
// 00577d41  52                   push edx
// 00577d42  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577d46  52                   push edx
// 00577d47  ffd0                 call eax
// 00577d49  b001                 mov al, 1
// 00577d4b  5e                   pop esi
// 00577d4c  c20800               ret 8
// 00577d4f  32c0                 xor al, al
// 00577d51  5e                   pop esi
// 00577d52  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
