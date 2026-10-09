// roc 2008-06 005ed070  unit: RBX::$01W4SurfaceType::?$SurfaceGetSet  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed070
//
// 005ed070  8b442404             mov eax, dword ptr [esp + 4]
// 005ed074  56                   push esi
// 005ed075  8bf1                 mov esi, ecx
// 005ed077  85c0                 test eax, eax
// 005ed079  7414                 je 0x5ed08f
// 005ed07b  8d48ec               lea ecx, [eax - 0x14]
// 005ed07e  e85dbdfaff           call 0x598de0
// 005ed083  8d4828               lea ecx, [eax + 0x28]
// 005ed086  8b4604               mov eax, dword ptr [esi + 4]
// 005ed089  ffd0                 call eax
// 005ed08b  5e                   pop esi
// 005ed08c  c20400               ret 4
// 005ed08f  33c9                 xor ecx, ecx
// 005ed091  e84abdfaff           call 0x598de0
// 005ed096  8d4828               lea ecx, [eax + 0x28]
// 005ed099  8b4604               mov eax, dword ptr [esi + 4]
// 005ed09c  ffd0                 call eax
// 005ed09e  5e                   pop esi
// 005ed09f  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$01W4SurfaceType@RBX@@@RBX@@UBE?AW4SurfaceType@3@PBVDescribedBase@Reflection@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
