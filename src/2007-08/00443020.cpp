// roc 2007-08 00443020  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00443020
//
// 00443020  8b542404             mov edx, dword ptr [esp + 4]
// 00443024  53                   push ebx
// 00443025  56                   push esi
// 00443026  8bf1                 mov esi, ecx
// 00443028  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044302b  8b01                 mov eax, dword ptr [ecx]
// 0044302d  8b4004               mov eax, dword ptr [eax + 4]
// 00443030  52                   push edx
// 00443031  ffd0                 call eax
// 00443033  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00443036  8b11                 mov edx, dword ptr [ecx]
// 00443038  8b5204               mov edx, dword ptr [edx + 4]
// 0044303b  8ad8                 mov bl, al
// 0044303d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00443041  50                   push eax
// 00443042  ffd2                 call edx
// 00443044  33c9                 xor ecx, ecx
// 00443046  3ad8                 cmp bl, al
// 00443048  0f94c1               sete cl
// 0044304b  5e                   pop esi
// 0044304c  8ac1                 mov al, cl
// 0044304e  5b                   pop ebx
// 0044304f  c20800               ret 8
// library openrbx-client/App\v8datamodel\DebugSettings.cpp (function ?equalValues@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/DebugSettings.cpp
