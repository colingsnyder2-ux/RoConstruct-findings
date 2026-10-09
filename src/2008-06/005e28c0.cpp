// roc 2008-06 005e28c0  unit: RBX::RotatePJoint  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e28c0
//
// 005e28c0  56                   push esi
// 005e28c1  8b742408             mov esi, dword ptr [esp + 8]
// 005e28c5  8bce                 mov ecx, esi
// 005e28c7  e8045ae9ff           call 0x4782d0
// 005e28cc  8bc6                 mov eax, esi
// 005e28ce  5e                   pop esi
// 005e28cf  c20c00               ret 0xc
// library openrbx-client/App\v8world\Joint.cpp (function ?align@Joint@RBX@@UAE?AVCoordinateFrame@G3D@@PAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Joint.cpp
