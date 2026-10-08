// roc 2007-08 00445540  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445540
//
// 00445540  51                   push ecx
// 00445541  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00445545  56                   push esi
// 00445546  8bf1                 mov esi, ecx
// 00445548  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044554b  8b01                 mov eax, dword ptr [ecx]
// 0044554d  8b4004               mov eax, dword ptr [eax + 4]
// 00445550  52                   push edx
// 00445551  8d542408             lea edx, [esp + 8]
// 00445555  52                   push edx
// 00445556  ffd0                 call eax
// 00445558  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044555c  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0044555f  8b11                 mov edx, dword ptr [ecx]
// 00445561  8b5204               mov edx, dword ptr [edx + 4]
// 00445564  50                   push eax
// 00445565  8d442414             lea eax, [esp + 0x14]
// 00445569  50                   push eax
// 0044556a  ffd2                 call edx
// 0044556c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00445570  33c0                 xor eax, eax
// 00445572  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 00445576  5e                   pop esi
// 00445577  0f94c0               sete al
// 0044557a  59                   pop ecx
// 0044557b  c20800               ret 8
// library openrbx-client/App\v8datamodel\Flag.cpp (function ?equalValues@?$TypedPropertyDescriptor@VBrickColor@RBX@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Flag.cpp
