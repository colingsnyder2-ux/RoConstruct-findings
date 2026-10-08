// roc 2007-03 00543d30  unit: seg_00540000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543d30
//
// 00543d30  56                   push esi
// 00543d31  8d44240c             lea eax, [esp + 0xc]
// 00543d35  8bf1                 mov esi, ecx
// 00543d37  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00543d3b  50                   push eax
// 00543d3c  51                   push ecx
// 00543d3d  e8aef9ffff           call 0x5436f0
// 00543d42  8bc8                 mov ecx, eax
// 00543d44  e8f79c0500           call 0x59da40
// 00543d49  84c0                 test al, al
// 00543d4b  7422                 je 0x543d6f
// 00543d4d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00543d51  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00543d54  8954240c             mov dword ptr [esp + 0xc], edx
// 00543d58  8b01                 mov eax, dword ptr [ecx]
// 00543d5a  8b4008               mov eax, dword ptr [eax + 8]
// 00543d5d  8d54240c             lea edx, [esp + 0xc]
// 00543d61  52                   push edx
// 00543d62  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00543d66  52                   push edx
// 00543d67  ffd0                 call eax
// 00543d69  b001                 mov al, 1
// 00543d6b  5e                   pop esi
// 00543d6c  c20800               ret 8
// 00543d6f  32c0                 xor al, al
// 00543d71  5e                   pop esi
// 00543d72  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
