// roc 2008-06 005ecdc0  unit: RBX::$00MP8Surface::?$SurfaceGetSet  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecdc0
//
// 005ecdc0  8b442404             mov eax, dword ptr [esp + 4]
// 005ecdc4  56                   push esi
// 005ecdc5  8bf1                 mov esi, ecx
// 005ecdc7  85c0                 test eax, eax
// 005ecdc9  7405                 je 0x5ecdd0
// 005ecdcb  8d48ec               lea ecx, [eax - 0x14]
// 005ecdce  eb02                 jmp 0x5ecdd2
// 005ecdd0  33c9                 xor ecx, ecx
// 005ecdd2  e809c0faff           call 0x598de0
// 005ecdd7  8b5608               mov edx, dword ptr [esi + 8]
// 005ecdda  51                   push ecx
// 005ecddb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ecddf  d901                 fld dword ptr [ecx]
// 005ecde1  8bc8                 mov ecx, eax
// 005ecde3  d91c24               fstp dword ptr [esp]
// 005ecde6  ffd2                 call edx
// 005ecde8  5e                   pop esi
// 005ecde9  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BEMXZP812@AEXM@Z@?$SurfacePropDescriptor@$00M@RBX@@UBEXPAVDescribedBase@Reflection@3@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
