// roc 2007-03 00442a20  unit: seg_00440000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00442a20
//
// 00442a20  8b542404             mov edx, dword ptr [esp + 4]
// 00442a24  53                   push ebx
// 00442a25  56                   push esi
// 00442a26  8bf1                 mov esi, ecx
// 00442a28  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00442a2b  8b01                 mov eax, dword ptr [ecx]
// 00442a2d  8b4004               mov eax, dword ptr [eax + 4]
// 00442a30  52                   push edx
// 00442a31  ffd0                 call eax
// 00442a33  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00442a36  8b11                 mov edx, dword ptr [ecx]
// 00442a38  8b5204               mov edx, dword ptr [edx + 4]
// 00442a3b  8ad8                 mov bl, al
// 00442a3d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00442a41  50                   push eax
// 00442a42  ffd2                 call edx
// 00442a44  33c9                 xor ecx, ecx
// 00442a46  3ad8                 cmp bl, al
// 00442a48  0f94c1               sete cl
// 00442a4b  5e                   pop esi
// 00442a4c  8ac1                 mov al, cl
// 00442a4e  5b                   pop ebx
// 00442a4f  c20800               ret 8
// library openrbx-client/App\v8datamodel\DebugSettings.cpp (function ?equalValues@?$TypedPropertyDescriptor@_N@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/DebugSettings.cpp
