// roc 2008-06 005ece50  unit: RBX::$03W4SurfaceType::?$SurfaceGetSet  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ece50
//
// 005ece50  8b442404             mov eax, dword ptr [esp + 4]
// 005ece54  56                   push esi
// 005ece55  8bf1                 mov esi, ecx
// 005ece57  85c0                 test eax, eax
// 005ece59  7414                 je 0x5ece6f
// 005ece5b  8d48ec               lea ecx, [eax - 0x14]
// 005ece5e  e87dbffaff           call 0x598de0
// 005ece63  8d4808               lea ecx, [eax + 8]
// 005ece66  8b4604               mov eax, dword ptr [esi + 4]
// 005ece69  ffd0                 call eax
// 005ece6b  5e                   pop esi
// 005ece6c  c20400               ret 4
// 005ece6f  33c9                 xor ecx, ecx
// 005ece71  e86abffaff           call 0x598de0
// 005ece76  8d4808               lea ecx, [eax + 8]
// 005ece79  8b4604               mov eax, dword ptr [esi + 4]
// 005ece7c  ffd0                 call eax
// 005ece7e  5e                   pop esi
// 005ece7f  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$03W4SurfaceType@RBX@@@RBX@@UBE?AW4SurfaceType@3@PBVDescribedBase@Reflection@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
