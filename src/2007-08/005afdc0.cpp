// roc 2007-08 005afdc0  unit: RBX::RotatePJoint  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005afdc0
//
// 005afdc0  56                   push esi
// 005afdc1  8b742408             mov esi, dword ptr [esp + 8]
// 005afdc5  8bce                 mov ecx, esi
// 005afdc7  e88452ecff           call 0x475050
// 005afdcc  8bc6                 mov eax, esi
// 005afdce  5e                   pop esi
// 005afdcf  c20c00               ret 0xc
// library openrbx-client/App\v8world\Joint.cpp (function ?align@Joint@RBX@@UAE?AVCoordinateFrame@G3D@@PAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Joint.cpp
