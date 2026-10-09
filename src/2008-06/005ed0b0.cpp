// roc 2008-06 005ed0b0  unit: RBX::$01W4SurfaceType::?$SurfaceGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed0b0
//
// 005ed0b0  8b442404             mov eax, dword ptr [esp + 4]
// 005ed0b4  56                   push esi
// 005ed0b5  8bf1                 mov esi, ecx
// 005ed0b7  85c0                 test eax, eax
// 005ed0b9  7405                 je 0x5ed0c0
// 005ed0bb  8d48ec               lea ecx, [eax - 0x14]
// 005ed0be  eb02                 jmp 0x5ed0c2
// 005ed0c0  33c9                 xor ecx, ecx
// 005ed0c2  e819bdfaff           call 0x598de0
// 005ed0c7  8d4828               lea ecx, [eax + 0x28]
// 005ed0ca  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ed0ce  8b10                 mov edx, dword ptr [eax]
// 005ed0d0  8b4608               mov eax, dword ptr [esi + 8]
// 005ed0d3  52                   push edx
// 005ed0d4  ffd0                 call eax
// 005ed0d6  5e                   pop esi
// 005ed0d7  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$01W4SurfaceType@RBX@@@RBX@@UBEXPAVDescribedBase@Reflection@3@ABW4SurfaceType@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
