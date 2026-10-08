// roc 2007-03 006054c0  unit: seg_00600000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006054c0
//
// 006054c0  8b542404             mov edx, dword ptr [esp + 4]
// 006054c4  56                   push esi
// 006054c5  8bf1                 mov esi, ecx
// 006054c7  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006054ca  8b01                 mov eax, dword ptr [ecx]
// 006054cc  8b4004               mov eax, dword ptr [eax + 4]
// 006054cf  57                   push edi
// 006054d0  52                   push edx
// 006054d1  ffd0                 call eax
// 006054d3  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006054d6  8b11                 mov edx, dword ptr [ecx]
// 006054d8  8b5204               mov edx, dword ptr [edx + 4]
// 006054db  8bf8                 mov edi, eax
// 006054dd  8b442410             mov eax, dword ptr [esp + 0x10]
// 006054e1  50                   push eax
// 006054e2  ffd2                 call edx
// 006054e4  33c9                 xor ecx, ecx
// 006054e6  3bf8                 cmp edi, eax
// 006054e8  0f94c1               sete cl
// 006054eb  5f                   pop edi
// 006054ec  8ac1                 mov al, cl
// 006054ee  5e                   pop esi
// 006054ef  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?equalValues@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
