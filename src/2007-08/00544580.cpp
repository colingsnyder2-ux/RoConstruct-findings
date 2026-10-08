// roc 2007-08 00544580  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544580
//
// 00544580  56                   push esi
// 00544581  8d44240c             lea eax, [esp + 0xc]
// 00544585  8bf1                 mov esi, ecx
// 00544587  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054458b  50                   push eax
// 0054458c  51                   push ecx
// 0054458d  e82ef6ffff           call 0x543bc0
// 00544592  8bc8                 mov ecx, eax
// 00544594  e8077d0900           call 0x5dc2a0
// 00544599  84c0                 test al, al
// 0054459b  7422                 je 0x5445bf
// 0054459d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005445a1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005445a4  8954240c             mov dword ptr [esp + 0xc], edx
// 005445a8  8b01                 mov eax, dword ptr [ecx]
// 005445aa  8b4008               mov eax, dword ptr [eax + 8]
// 005445ad  8d54240c             lea edx, [esp + 0xc]
// 005445b1  52                   push edx
// 005445b2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005445b6  52                   push edx
// 005445b7  ffd0                 call eax
// 005445b9  b001                 mov al, 1
// 005445bb  5e                   pop esi
// 005445bc  c20800               ret 8
// 005445bf  32c0                 xor al, al
// 005445c1  5e                   pop esi
// 005445c2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
