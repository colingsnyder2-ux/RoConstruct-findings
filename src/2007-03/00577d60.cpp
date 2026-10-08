// roc 2007-03 00577d60  unit: seg_00570000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00577d60
//
// 00577d60  56                   push esi
// 00577d61  8d44240c             lea eax, [esp + 0xc]
// 00577d65  8bf1                 mov esi, ecx
// 00577d67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00577d6b  50                   push eax
// 00577d6c  51                   push ecx
// 00577d6d  e84ef6ffff           call 0x5773c0
// 00577d72  8bc8                 mov ecx, eax
// 00577d74  e887ee0300           call 0x5b6c00
// 00577d79  84c0                 test al, al
// 00577d7b  7422                 je 0x577d9f
// 00577d7d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577d81  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00577d84  8954240c             mov dword ptr [esp + 0xc], edx
// 00577d88  8b01                 mov eax, dword ptr [ecx]
// 00577d8a  8b4008               mov eax, dword ptr [eax + 8]
// 00577d8d  8d54240c             lea edx, [esp + 0xc]
// 00577d91  52                   push edx
// 00577d92  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00577d96  52                   push edx
// 00577d97  ffd0                 call eax
// 00577d99  b001                 mov al, 1
// 00577d9b  5e                   pop esi
// 00577d9c  c20800               ret 8
// 00577d9f  32c0                 xor al, al
// 00577da1  5e                   pop esi
// 00577da2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
