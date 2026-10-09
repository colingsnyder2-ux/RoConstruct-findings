// roc 2008-06 005ece20  unit: RBX::$03MP8Surface::?$SurfaceGetSet  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ece20
//
// 005ece20  8b442404             mov eax, dword ptr [esp + 4]
// 005ece24  56                   push esi
// 005ece25  8bf1                 mov esi, ecx
// 005ece27  85c0                 test eax, eax
// 005ece29  7405                 je 0x5ece30
// 005ece2b  8d48ec               lea ecx, [eax - 0x14]
// 005ece2e  eb02                 jmp 0x5ece32
// 005ece30  33c9                 xor ecx, ecx
// 005ece32  e8a9bffaff           call 0x598de0
// 005ece37  8b5608               mov edx, dword ptr [esi + 8]
// 005ece3a  8d4808               lea ecx, [eax + 8]
// 005ece3d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ece41  d900                 fld dword ptr [eax]
// 005ece43  51                   push ecx
// 005ece44  d91c24               fstp dword ptr [esp]
// 005ece47  ffd2                 call edx
// 005ece49  5e                   pop esi
// 005ece4a  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BEMXZP812@AEXM@Z@?$SurfacePropDescriptor@$03M@RBX@@UBEXPAVDescribedBase@Reflection@3@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
