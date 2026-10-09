// roc 2008-06 005ed000  unit: RBX::$04MP8Surface::?$SurfaceGetSet  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed000
//
// 005ed000  8b442404             mov eax, dword ptr [esp + 4]
// 005ed004  56                   push esi
// 005ed005  8bf1                 mov esi, ecx
// 005ed007  85c0                 test eax, eax
// 005ed009  7405                 je 0x5ed010
// 005ed00b  8d48ec               lea ecx, [eax - 0x14]
// 005ed00e  eb02                 jmp 0x5ed012
// 005ed010  33c9                 xor ecx, ecx
// 005ed012  e8c9bdfaff           call 0x598de0
// 005ed017  8b5608               mov edx, dword ptr [esi + 8]
// 005ed01a  8d4820               lea ecx, [eax + 0x20]
// 005ed01d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ed021  d900                 fld dword ptr [eax]
// 005ed023  51                   push ecx
// 005ed024  d91c24               fstp dword ptr [esp]
// 005ed027  ffd2                 call edx
// 005ed029  5e                   pop esi
// 005ed02a  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BEMXZP812@AEXM@Z@?$SurfacePropDescriptor@$04M@RBX@@UBEXPAVDescribedBase@Reflection@3@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
