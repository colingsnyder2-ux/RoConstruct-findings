// roc 2007-03 00578d50  unit: seg_00570000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578d50
//
// 00578d50  56                   push esi
// 00578d51  8d44240c             lea eax, [esp + 0xc]
// 00578d55  8bf1                 mov esi, ecx
// 00578d57  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00578d5b  50                   push eax
// 00578d5c  51                   push ecx
// 00578d5d  e82efbffff           call 0x578890
// 00578d62  8bc8                 mov ecx, eax
// 00578d64  e8d74c0200           call 0x59da40
// 00578d69  84c0                 test al, al
// 00578d6b  7422                 je 0x578d8f
// 00578d6d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00578d71  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00578d74  8954240c             mov dword ptr [esp + 0xc], edx
// 00578d78  8b01                 mov eax, dword ptr [ecx]
// 00578d7a  8b4008               mov eax, dword ptr [eax + 8]
// 00578d7d  8d54240c             lea edx, [esp + 0xc]
// 00578d81  52                   push edx
// 00578d82  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00578d86  52                   push edx
// 00578d87  ffd0                 call eax
// 00578d89  b001                 mov al, 1
// 00578d8b  5e                   pop esi
// 00578d8c  c20800               ret 8
// 00578d8f  32c0                 xor al, al
// 00578d91  5e                   pop esi
// 00578d92  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
