// roc 2007-08 00544300  unit: RBX::VDebugSettings::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544300
//
// 00544300  56                   push esi
// 00544301  8d44240c             lea eax, [esp + 0xc]
// 00544305  8bf1                 mov esi, ecx
// 00544307  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054430b  50                   push eax
// 0054430c  51                   push ecx
// 0054430d  e80ef9ffff           call 0x543c20
// 00544312  8bc8                 mov ecx, eax
// 00544314  e8b73d0700           call 0x5b80d0
// 00544319  84c0                 test al, al
// 0054431b  7422                 je 0x54433f
// 0054431d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00544321  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00544324  8954240c             mov dword ptr [esp + 0xc], edx
// 00544328  8b01                 mov eax, dword ptr [ecx]
// 0054432a  8b4008               mov eax, dword ptr [eax + 8]
// 0054432d  8d54240c             lea edx, [esp + 0xc]
// 00544331  52                   push edx
// 00544332  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00544336  52                   push edx
// 00544337  ffd0                 call eax
// 00544339  b001                 mov al, 1
// 0054433b  5e                   pop esi
// 0054433c  c20800               ret 8
// 0054433f  32c0                 xor al, al
// 00544341  5e                   pop esi
// 00544342  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
