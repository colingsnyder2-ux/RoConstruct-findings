// roc 2007-08 005445d0  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005445d0
//
// 005445d0  56                   push esi
// 005445d1  8d44240c             lea eax, [esp + 0xc]
// 005445d5  8bf1                 mov esi, ecx
// 005445d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005445db  50                   push eax
// 005445dc  51                   push ecx
// 005445dd  e8def5ffff           call 0x543bc0
// 005445e2  8bc8                 mov ecx, eax
// 005445e4  e8e73a0700           call 0x5b80d0
// 005445e9  84c0                 test al, al
// 005445eb  7422                 je 0x54460f
// 005445ed  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005445f1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005445f4  8954240c             mov dword ptr [esp + 0xc], edx
// 005445f8  8b01                 mov eax, dword ptr [ecx]
// 005445fa  8b4008               mov eax, dword ptr [eax + 8]
// 005445fd  8d54240c             lea edx, [esp + 0xc]
// 00544601  52                   push edx
// 00544602  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00544606  52                   push edx
// 00544607  ffd0                 call eax
// 00544609  b001                 mov al, 1
// 0054460b  5e                   pop esi
// 0054460c  c20800               ret 8
// 0054460f  32c0                 xor al, al
// 00544611  5e                   pop esi
// 00544612  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
