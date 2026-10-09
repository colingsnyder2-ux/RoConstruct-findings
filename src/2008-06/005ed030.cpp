// roc 2008-06 005ed030  unit: RBX::$04W4SurfaceType::?$SurfaceGetSet  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed030
//
// 005ed030  8b442404             mov eax, dword ptr [esp + 4]
// 005ed034  56                   push esi
// 005ed035  8bf1                 mov esi, ecx
// 005ed037  85c0                 test eax, eax
// 005ed039  7414                 je 0x5ed04f
// 005ed03b  8d48ec               lea ecx, [eax - 0x14]
// 005ed03e  e89dbdfaff           call 0x598de0
// 005ed043  8d4820               lea ecx, [eax + 0x20]
// 005ed046  8b4604               mov eax, dword ptr [esi + 4]
// 005ed049  ffd0                 call eax
// 005ed04b  5e                   pop esi
// 005ed04c  c20400               ret 4
// 005ed04f  33c9                 xor ecx, ecx
// 005ed051  e88abdfaff           call 0x598de0
// 005ed056  8d4820               lea ecx, [eax + 0x20]
// 005ed059  8b4604               mov eax, dword ptr [esi + 4]
// 005ed05c  ffd0                 call eax
// 005ed05e  5e                   pop esi
// 005ed05f  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$04W4SurfaceType@RBX@@@RBX@@UBE?AW4SurfaceType@3@PBVDescribedBase@Reflection@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
