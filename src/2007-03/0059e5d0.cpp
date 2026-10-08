// roc 2007-03 0059e5d0  unit: seg_00590000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059e5d0
//
// 0059e5d0  56                   push esi
// 0059e5d1  8d44240c             lea eax, [esp + 0xc]
// 0059e5d5  8bf1                 mov esi, ecx
// 0059e5d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059e5db  50                   push eax
// 0059e5dc  51                   push ecx
// 0059e5dd  e8cef9ffff           call 0x59dfb0
// 0059e5e2  8bc8                 mov ecx, eax
// 0059e5e4  e857f4ffff           call 0x59da40
// 0059e5e9  84c0                 test al, al
// 0059e5eb  7422                 je 0x59e60f
// 0059e5ed  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059e5f1  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0059e5f4  8954240c             mov dword ptr [esp + 0xc], edx
// 0059e5f8  8b01                 mov eax, dword ptr [ecx]
// 0059e5fa  8b4008               mov eax, dword ptr [eax + 8]
// 0059e5fd  8d54240c             lea edx, [esp + 0xc]
// 0059e601  52                   push edx
// 0059e602  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0059e606  52                   push edx
// 0059e607  ffd0                 call eax
// 0059e609  b001                 mov al, 1
// 0059e60b  5e                   pop esi
// 0059e60c  c20800               ret 8
// 0059e60f  32c0                 xor al, al
// 0059e611  5e                   pop esi
// 0059e612  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?setStringValue@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABVName@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
