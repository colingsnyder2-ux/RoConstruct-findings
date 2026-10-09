// roc 2009-06 00666ba0  unit: RBX::RotatePJoint  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666ba0
//
// 00666ba0  56                   push esi
// 00666ba1  8b742408             mov esi, dword ptr [esp + 8]
// 00666ba5  8bce                 mov ecx, esi
// 00666ba7  e8048de3ff           call 0x49f8b0
// 00666bac  8bc6                 mov eax, esi
// 00666bae  5e                   pop esi
// 00666baf  c20c00               ret 0xc
// library openrbx-client/App\v8world\Joint.cpp (function ?align@Joint@RBX@@UAE?AVCoordinateFrame@G3D@@PAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Joint.cpp
