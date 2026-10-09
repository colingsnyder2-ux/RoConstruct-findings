// roc 2008-06 005ed0e0  unit: RBX::$01MP8Surface::?$SurfaceGetSet  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed0e0
//
// 005ed0e0  8b442404             mov eax, dword ptr [esp + 4]
// 005ed0e4  56                   push esi
// 005ed0e5  8bf1                 mov esi, ecx
// 005ed0e7  85c0                 test eax, eax
// 005ed0e9  7405                 je 0x5ed0f0
// 005ed0eb  8d48ec               lea ecx, [eax - 0x14]
// 005ed0ee  eb02                 jmp 0x5ed0f2
// 005ed0f0  33c9                 xor ecx, ecx
// 005ed0f2  e8e9bcfaff           call 0x598de0
// 005ed0f7  8b5608               mov edx, dword ptr [esi + 8]
// 005ed0fa  8d4828               lea ecx, [eax + 0x28]
// 005ed0fd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ed101  d900                 fld dword ptr [eax]
// 005ed103  51                   push ecx
// 005ed104  d91c24               fstp dword ptr [esp]
// 005ed107  ffd2                 call edx
// 005ed109  5e                   pop esi
// 005ed10a  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BEMXZP812@AEXM@Z@?$SurfacePropDescriptor@$01M@RBX@@UBEXPAVDescribedBase@Reflection@3@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
