// roc 2008-06 005ecd90  unit: RBX::$00W4SurfaceType::?$SurfaceGetSet  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecd90
//
// 005ecd90  8b442404             mov eax, dword ptr [esp + 4]
// 005ecd94  56                   push esi
// 005ecd95  8bf1                 mov esi, ecx
// 005ecd97  85c0                 test eax, eax
// 005ecd99  7413                 je 0x5ecdae
// 005ecd9b  8d48ec               lea ecx, [eax - 0x14]
// 005ecd9e  e83dc0faff           call 0x598de0
// 005ecda3  8bc8                 mov ecx, eax
// 005ecda5  8b4604               mov eax, dword ptr [esi + 4]
// 005ecda8  ffd0                 call eax
// 005ecdaa  5e                   pop esi
// 005ecdab  c20400               ret 4
// 005ecdae  33c9                 xor ecx, ecx
// 005ecdb0  e82bc0faff           call 0x598de0
// 005ecdb5  8bc8                 mov ecx, eax
// 005ecdb7  8b4604               mov eax, dword ptr [esi + 4]
// 005ecdba  ffd0                 call eax
// 005ecdbc  5e                   pop esi
// 005ecdbd  c20400               ret 4
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@UBE?AW4SurfaceType@3@PBVDescribedBase@Reflection@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
