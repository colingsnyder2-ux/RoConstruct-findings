// roc 2008-06 005eced0  unit: RBX::$02W4SurfaceType::?$SurfaceGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eced0
//
// 005eced0  8b442404             mov eax, dword ptr [esp + 4]
// 005eced4  56                   push esi
// 005eced5  8bf1                 mov esi, ecx
// 005eced7  85c0                 test eax, eax
// 005eced9  7405                 je 0x5ecee0
// 005ecedb  8d48ec               lea ecx, [eax - 0x14]
// 005ecede  eb02                 jmp 0x5ecee2
// 005ecee0  33c9                 xor ecx, ecx
// 005ecee2  e8f9befaff           call 0x598de0
// 005ecee7  8d4810               lea ecx, [eax + 0x10]
// 005eceea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005eceee  8b10                 mov edx, dword ptr [eax]
// 005ecef0  8b4608               mov eax, dword ptr [esi + 8]
// 005ecef3  52                   push edx
// 005ecef4  ffd0                 call eax
// 005ecef6  5e                   pop esi
// 005ecef7  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$02W4SurfaceType@RBX@@@RBX@@UBEXPAVDescribedBase@Reflection@3@ABW4SurfaceType@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
