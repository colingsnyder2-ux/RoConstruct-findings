// roc 2007-08 00579590  unit: RBX::VPartInstance::?$EnumPropDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00579590
//
// 00579590  56                   push esi
// 00579591  8d44240c             lea eax, [esp + 0xc]
// 00579595  8bf1                 mov esi, ecx
// 00579597  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057959b  50                   push eax
// 0057959c  51                   push ecx
// 0057959d  e89ef6ffff           call 0x578c40
// 005795a2  8bc8                 mov ecx, eax
// 005795a4  e827eb0300           call 0x5b80d0
// 005795a9  84c0                 test al, al
// 005795ab  7422                 je 0x5795cf
// 005795ad  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005795b1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005795b4  8954240c             mov dword ptr [esp + 0xc], edx
// 005795b8  8b01                 mov eax, dword ptr [ecx]
// 005795ba  8b4008               mov eax, dword ptr [eax + 8]
// 005795bd  8d54240c             lea edx, [esp + 0xc]
// 005795c1  52                   push edx
// 005795c2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005795c6  52                   push edx
// 005795c7  ffd0                 call eax
// 005795c9  b001                 mov al, 1
// 005795cb  5e                   pop esi
// 005795cc  c20800               ret 8
// 005795cf  32c0                 xor al, al
// 005795d1  5e                   pop esi
// 005795d2  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
