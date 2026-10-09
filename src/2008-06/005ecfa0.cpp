// roc 2008-06 005ecfa0  unit: RBX::MP8Surface::$0A::?$SurfaceGetSet  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecfa0
//
// 005ecfa0  8b442404             mov eax, dword ptr [esp + 4]
// 005ecfa4  56                   push esi
// 005ecfa5  8bf1                 mov esi, ecx
// 005ecfa7  85c0                 test eax, eax
// 005ecfa9  7405                 je 0x5ecfb0
// 005ecfab  8d48ec               lea ecx, [eax - 0x14]
// 005ecfae  eb02                 jmp 0x5ecfb2
// 005ecfb0  33c9                 xor ecx, ecx
// 005ecfb2  e829befaff           call 0x598de0
// 005ecfb7  8b5608               mov edx, dword ptr [esi + 8]
// 005ecfba  8d4818               lea ecx, [eax + 0x18]
// 005ecfbd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ecfc1  d900                 fld dword ptr [eax]
// 005ecfc3  51                   push ecx
// 005ecfc4  d91c24               fstp dword ptr [esp]
// 005ecfc7  ffd2                 call edx
// 005ecfc9  5e                   pop esi
// 005ecfca  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BEMXZP812@AEXM@Z@?$SurfacePropDescriptor@$0A@M@RBX@@UBEXPAVDescribedBase@Reflection@3@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
