// roc 2008-06 005ecd60  unit: RBX::$00W4SurfaceType::?$SurfaceGetSet  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecd60
//
// 005ecd60  8b442404             mov eax, dword ptr [esp + 4]
// 005ecd64  56                   push esi
// 005ecd65  8bf1                 mov esi, ecx
// 005ecd67  85c0                 test eax, eax
// 005ecd69  7405                 je 0x5ecd70
// 005ecd6b  8d48ec               lea ecx, [eax - 0x14]
// 005ecd6e  eb02                 jmp 0x5ecd72
// 005ecd70  33c9                 xor ecx, ecx
// 005ecd72  e869c0faff           call 0x598de0
// 005ecd77  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ecd7b  8b11                 mov edx, dword ptr [ecx]
// 005ecd7d  8bc8                 mov ecx, eax
// 005ecd7f  8b4608               mov eax, dword ptr [esi + 8]
// 005ecd82  52                   push edx
// 005ecd83  ffd0                 call eax
// 005ecd85  5e                   pop esi
// 005ecd86  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$00W4SurfaceType@RBX@@@RBX@@UBEXPAVDescribedBase@Reflection@3@ABW4SurfaceType@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
