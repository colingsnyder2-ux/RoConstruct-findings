// roc 2007-03 00444b50  unit: seg_00440000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444b50
//
// 00444b50  83ec08               sub esp, 8
// 00444b53  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00444b57  56                   push esi
// 00444b58  8bf1                 mov esi, ecx
// 00444b5a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00444b5d  8b01                 mov eax, dword ptr [ecx]
// 00444b5f  8b4004               mov eax, dword ptr [eax + 4]
// 00444b62  52                   push edx
// 00444b63  ffd0                 call eax
// 00444b65  d95c2410             fstp dword ptr [esp + 0x10]
// 00444b69  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00444b6c  d9442410             fld dword ptr [esp + 0x10]
// 00444b70  8b11                 mov edx, dword ptr [ecx]
// 00444b72  dd5c2404             fstp qword ptr [esp + 4]
// 00444b76  8b442414             mov eax, dword ptr [esp + 0x14]
// 00444b7a  8b5204               mov edx, dword ptr [edx + 4]
// 00444b7d  50                   push eax
// 00444b7e  ffd2                 call edx
// 00444b80  dd442404             fld qword ptr [esp + 4]
// 00444b84  dae9                 fucompp 
// 00444b86  5e                   pop esi
// 00444b87  dfe0                 fnstsw ax
// 00444b89  f6c444               test ah, 0x44
// 00444b8c  7a0b                 jp 0x444b99
// 00444b8e  b801000000           mov eax, 1
// 00444b93  83c408               add esp, 8
// 00444b96  c20800               ret 8
// 00444b99  33c0                 xor eax, eax
// 00444b9b  83c408               add esp, 8
// 00444b9e  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?equalValues@?$TypedPropertyDescriptor@M@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
