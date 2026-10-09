// roc 2008-06 005b7450  unit: P8CRenderSettings::?$GetSetImpl  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7450
//
// 005b7450  8b442404             mov eax, dword ptr [esp + 4]
// 005b7454  8bd1                 mov edx, ecx
// 005b7456  85c0                 test eax, eax
// 005b7458  7405                 je 0x5b745f
// 005b745a  83c0ec               add eax, -0x14
// 005b745d  eb02                 jmp 0x5b7461
// 005b745f  33c0                 xor eax, eax
// 005b7461  51                   push ecx
// 005b7462  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005b7466  d901                 fld dword ptr [ecx]
// 005b7468  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 005b746b  8b5210               mov edx, dword ptr [edx + 0x10]
// 005b746e  d91c24               fstp dword ptr [esp]
// 005b7471  03c8                 add ecx, eax
// 005b7473  ffd2                 call edx
// 005b7475  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?setValue@?$GetSetImpl@P8Decal@RBX@@BEMXZP812@AEXM@Z@?$PropDescriptor@VDecal@RBX@@M@Reflection@RBX@@UBEXPAVDescribedBase@34@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
