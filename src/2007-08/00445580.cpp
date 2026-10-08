// roc 2007-08 00445580  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445580
//
// 00445580  83ec08               sub esp, 8
// 00445583  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00445587  56                   push esi
// 00445588  8bf1                 mov esi, ecx
// 0044558a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044558d  8b01                 mov eax, dword ptr [ecx]
// 0044558f  8b4004               mov eax, dword ptr [eax + 4]
// 00445592  52                   push edx
// 00445593  ffd0                 call eax
// 00445595  d95c2410             fstp dword ptr [esp + 0x10]
// 00445599  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044559c  d9442410             fld dword ptr [esp + 0x10]
// 004455a0  8b11                 mov edx, dword ptr [ecx]
// 004455a2  dd5c2404             fstp qword ptr [esp + 4]
// 004455a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 004455aa  8b5204               mov edx, dword ptr [edx + 4]
// 004455ad  50                   push eax
// 004455ae  ffd2                 call edx
// 004455b0  dd442404             fld qword ptr [esp + 4]
// 004455b4  dae9                 fucompp 
// 004455b6  5e                   pop esi
// 004455b7  dfe0                 fnstsw ax
// 004455b9  f6c444               test ah, 0x44
// 004455bc  7a0b                 jp 0x4455c9
// 004455be  b801000000           mov eax, 1
// 004455c3  83c408               add esp, 8
// 004455c6  c20800               ret 8
// 004455c9  33c0                 xor eax, eax
// 004455cb  83c408               add esp, 8
// 004455ce  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?equalValues@?$TypedPropertyDescriptor@M@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
