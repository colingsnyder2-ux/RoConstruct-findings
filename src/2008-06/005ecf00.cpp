// roc 2008-06 005ecf00  unit: RBX::$02MP8Surface::?$SurfaceGetSet  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ecf00
//
// 005ecf00  8b442404             mov eax, dword ptr [esp + 4]
// 005ecf04  56                   push esi
// 005ecf05  8bf1                 mov esi, ecx
// 005ecf07  85c0                 test eax, eax
// 005ecf09  7405                 je 0x5ecf10
// 005ecf0b  8d48ec               lea ecx, [eax - 0x14]
// 005ecf0e  eb02                 jmp 0x5ecf12
// 005ecf10  33c9                 xor ecx, ecx
// 005ecf12  e8c9befaff           call 0x598de0
// 005ecf17  8b5608               mov edx, dword ptr [esi + 8]
// 005ecf1a  8d4810               lea ecx, [eax + 0x10]
// 005ecf1d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ecf21  d900                 fld dword ptr [eax]
// 005ecf23  51                   push ecx
// 005ecf24  d91c24               fstp dword ptr [esp]
// 005ecf27  ffd2                 call edx
// 005ecf29  5e                   pop esi
// 005ecf2a  c20800               ret 8
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?setValue@?$GetSetImpl@P8Surface@RBX@@BEMXZP812@AEXM@Z@?$SurfacePropDescriptor@$02M@RBX@@UBEXPAVDescribedBase@Reflection@3@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
