// roc 2007-08 005dcf40  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dcf40
//
// 005dcf40  8b542404             mov edx, dword ptr [esp + 4]
// 005dcf44  56                   push esi
// 005dcf45  8bf1                 mov esi, ecx
// 005dcf47  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dcf4a  8b01                 mov eax, dword ptr [ecx]
// 005dcf4c  8b4004               mov eax, dword ptr [eax + 4]
// 005dcf4f  57                   push edi
// 005dcf50  52                   push edx
// 005dcf51  ffd0                 call eax
// 005dcf53  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005dcf56  8b11                 mov edx, dword ptr [ecx]
// 005dcf58  8b5204               mov edx, dword ptr [edx + 4]
// 005dcf5b  8bf8                 mov edi, eax
// 005dcf5d  8b442410             mov eax, dword ptr [esp + 0x10]
// 005dcf61  50                   push eax
// 005dcf62  ffd2                 call edx
// 005dcf64  33c9                 xor ecx, ecx
// 005dcf66  3bf8                 cmp edi, eax
// 005dcf68  0f94c1               sete cl
// 005dcf6b  5f                   pop edi
// 005dcf6c  8ac1                 mov al, cl
// 005dcf6e  5e                   pop esi
// 005dcf6f  c20800               ret 8
// library rbxgs/v8datamodel\FaceInstance.cpp (function ?equalValues@?$EnumPropDescriptor@VFaceInstance@RBX@@W4NormalId@2@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FaceInstance.cpp
