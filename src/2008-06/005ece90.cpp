// roc 2008-06 005ece90  unit: RBX::$02W4SurfaceType::?$SurfaceGetSet  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ece90
//
// 005ece90  8b442404             mov eax, dword ptr [esp + 4]
// 005ece94  56                   push esi
// 005ece95  8bf1                 mov esi, ecx
// 005ece97  85c0                 test eax, eax
// 005ece99  7414                 je 0x5eceaf
// 005ece9b  8d48ec               lea ecx, [eax - 0x14]
// 005ece9e  e83dbffaff           call 0x598de0
// 005ecea3  8d4810               lea ecx, [eax + 0x10]
// 005ecea6  8b4604               mov eax, dword ptr [esi + 4]
// 005ecea9  ffd0                 call eax
// 005eceab  5e                   pop esi
// 005eceac  c20400               ret 4
// 005eceaf  33c9                 xor ecx, ecx
// 005eceb1  e82abffaff           call 0x598de0
// 005eceb6  8d4810               lea ecx, [eax + 0x10]
// 005eceb9  8b4604               mov eax, dword ptr [esi + 4]
// 005ecebc  ffd0                 call eax
// 005ecebe  5e                   pop esi
// 005ecebf  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$02W4SurfaceType@RBX@@@RBX@@UBE?AW4SurfaceType@3@PBVDescribedBase@Reflection@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
