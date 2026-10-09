// roc 2008-06 005ecf30  unit: RBX::W4SurfaceType::$0A::?$SurfaceGetSet  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecf30
//
// 005ecf30  8b442404             mov eax, dword ptr [esp + 4]
// 005ecf34  56                   push esi
// 005ecf35  8bf1                 mov esi, ecx
// 005ecf37  85c0                 test eax, eax
// 005ecf39  7405                 je 0x5ecf40
// 005ecf3b  8d48ec               lea ecx, [eax - 0x14]
// 005ecf3e  eb02                 jmp 0x5ecf42
// 005ecf40  33c9                 xor ecx, ecx
// 005ecf42  e899befaff           call 0x598de0
// 005ecf47  8d4818               lea ecx, [eax + 0x18]
// 005ecf4a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ecf4e  8b10                 mov edx, dword ptr [eax]
// 005ecf50  8b4608               mov eax, dword ptr [esi + 8]
// 005ecf53  52                   push edx
// 005ecf54  ffd0                 call eax
// 005ecf56  5e                   pop esi
// 005ecf57  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BE?AW4SurfaceType@2@XZP812@AEXW432@@Z@?$SurfaceEnumPropDescriptor@$0A@W4SurfaceType@RBX@@@RBX@@UBEXPAVDescribedBase@Reflection@3@ABW4SurfaceType@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
