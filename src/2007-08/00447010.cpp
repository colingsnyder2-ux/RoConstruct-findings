// roc 2007-08 00447010  unit: VCRenderSettings::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00447010
//
// 00447010  56                   push esi
// 00447011  8d44240c             lea eax, [esp + 0xc]
// 00447015  8bf1                 mov esi, ecx
// 00447017  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044701b  50                   push eax
// 0044701c  51                   push ecx
// 0044701d  e88ef7ffff           call 0x4467b0
// 00447022  8bc8                 mov ecx, eax
// 00447024  e877521900           call 0x5dc2a0
// 00447029  84c0                 test al, al
// 0044702b  7422                 je 0x44704f
// 0044702d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00447031  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00447034  8954240c             mov dword ptr [esp + 0xc], edx
// 00447038  8b01                 mov eax, dword ptr [ecx]
// 0044703a  8b4008               mov eax, dword ptr [eax + 8]
// 0044703d  8d54240c             lea edx, [esp + 0xc]
// 00447041  52                   push edx
// 00447042  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00447046  52                   push edx
// 00447047  ffd0                 call eax
// 00447049  b001                 mov al, 1
// 0044704b  5e                   pop esi
// 0044704c  c20800               ret 8
// 0044704f  32c0                 xor al, al
// 00447051  5e                   pop esi
// 00447052  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
