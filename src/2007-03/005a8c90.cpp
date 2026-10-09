// roc 2007-03 005a8c90  unit: seg_005a0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8c90
//
// 005a8c90  56                   push esi
// 005a8c91  8b742408             mov esi, dword ptr [esp + 8]
// 005a8c95  8bce                 mov ecx, esi
// 005a8c97  e8d4c4ecff           call 0x475170
// 005a8c9c  8bc6                 mov eax, esi
// 005a8c9e  5e                   pop esi
// 005a8c9f  c20c00               ret 0xc
// library openrbx-client/App\v8world\Joint.cpp (function ?align@Joint@RBX@@UAE?AVCoordinateFrame@G3D@@PAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Joint.cpp
