// roc 2008-06 005ecf60  unit: RBX::W4SurfaceType::$0A::?$SurfaceGetSet  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecf60
//
// 005ecf60  8b442404             mov eax, dword ptr [esp + 4]
// 005ecf64  56                   push esi
// 005ecf65  8bf1                 mov esi, ecx
// 005ecf67  85c0                 test eax, eax
// 005ecf69  7414                 je 0x5ecf7f
// 005ecf6b  8d48ec               lea ecx, [eax - 0x14]
// 005ecf6e  e86dbefaff           call 0x598de0
// 005ecf73  8d4818               lea ecx, [eax + 0x18]
// 005ecf76  8b4604               mov eax, dword ptr [esi + 4]
// 005ecf79  ffd0                 call eax
// 005ecf7b  5e                   pop esi
// 005ecf7c  c20400               ret 4
// 005ecf7f  33c9                 xor ecx, ecx
// 005ecf81  e85abefaff           call 0x598de0
// 005ecf86  8d4818               lea ecx, [eax + 0x18]
// 005ecf89  8b4604               mov eax, dword ptr [esi + 4]
// 005ecf8c  ffd0                 call eax
// 005ecf8e  5e                   pop esi
// 005ecf8f  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$0A@W4SurfaceType@RBX@@@RBX@@UBE?AW4SurfaceType@3@PBVDescribedBase@Reflection@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
