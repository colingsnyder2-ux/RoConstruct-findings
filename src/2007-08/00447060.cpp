// roc 2007-08 00447060  unit: VCRenderSettings::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00447060
//
// 00447060  56                   push esi
// 00447061  8d44240c             lea eax, [esp + 0xc]
// 00447065  8bf1                 mov esi, ecx
// 00447067  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044706b  50                   push eax
// 0044706c  51                   push ecx
// 0044706d  e83ef7ffff           call 0x4467b0
// 00447072  8bc8                 mov ecx, eax
// 00447074  e857101700           call 0x5b80d0
// 00447079  84c0                 test al, al
// 0044707b  7422                 je 0x44709f
// 0044707d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00447081  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00447084  8954240c             mov dword ptr [esp + 0xc], edx
// 00447088  8b01                 mov eax, dword ptr [ecx]
// 0044708a  8b4008               mov eax, dword ptr [eax + 8]
// 0044708d  8d54240c             lea edx, [esp + 0xc]
// 00447091  52                   push edx
// 00447092  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00447096  52                   push edx
// 00447097  ffd0                 call eax
// 00447099  b001                 mov al, 1
// 0044709b  5e                   pop esi
// 0044709c  c20800               ret 8
// 0044709f  32c0                 xor al, al
// 004470a1  5e                   pop esi
// 004470a2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
