// roc 2008-06 005ecdf0  unit: RBX::$03W4SurfaceType::?$SurfaceGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecdf0
//
// 005ecdf0  8b442404             mov eax, dword ptr [esp + 4]
// 005ecdf4  56                   push esi
// 005ecdf5  8bf1                 mov esi, ecx
// 005ecdf7  85c0                 test eax, eax
// 005ecdf9  7405                 je 0x5ece00
// 005ecdfb  8d48ec               lea ecx, [eax - 0x14]
// 005ecdfe  eb02                 jmp 0x5ece02
// 005ece00  33c9                 xor ecx, ecx
// 005ece02  e8d9bffaff           call 0x598de0
// 005ece07  8d4808               lea ecx, [eax + 8]
// 005ece0a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ece0e  8b10                 mov edx, dword ptr [eax]
// 005ece10  8b4608               mov eax, dword ptr [esi + 8]
// 005ece13  52                   push edx
// 005ece14  ffd0                 call eax
// 005ece16  5e                   pop esi
// 005ece17  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$03W4SurfaceType@RBX@@@RBX@@UBEXPAVDescribedBase@Reflection@3@ABW4SurfaceType@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
