// roc 2007-08 005442b0  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005442b0
//
// 005442b0  56                   push esi
// 005442b1  8d44240c             lea eax, [esp + 0xc]
// 005442b5  8bf1                 mov esi, ecx
// 005442b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005442bb  50                   push eax
// 005442bc  51                   push ecx
// 005442bd  e85ef9ffff           call 0x543c20
// 005442c2  8bc8                 mov ecx, eax
// 005442c4  e8d77f0900           call 0x5dc2a0
// 005442c9  84c0                 test al, al
// 005442cb  7422                 je 0x5442ef
// 005442cd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005442d1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005442d4  8954240c             mov dword ptr [esp + 0xc], edx
// 005442d8  8b01                 mov eax, dword ptr [ecx]
// 005442da  8b4008               mov eax, dword ptr [eax + 8]
// 005442dd  8d54240c             lea edx, [esp + 0xc]
// 005442e1  52                   push edx
// 005442e2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005442e6  52                   push edx
// 005442e7  ffd0                 call eax
// 005442e9  b001                 mov al, 1
// 005442eb  5e                   pop esi
// 005442ec  c20800               ret 8
// 005442ef  32c0                 xor al, al
// 005442f1  5e                   pop esi
// 005442f2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
