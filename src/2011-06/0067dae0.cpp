// roc 2011-06 0067dae0  unit: RBX::RotatePJoint  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067dae0
//
// 0067dae0  56                   push esi
// 0067dae1  8b742408             mov esi, dword ptr [esp + 8]
// 0067dae5  8bce                 mov ecx, esi
// 0067dae7  e8a43decff           call 0x541890
// 0067daec  8bc6                 mov eax, esi
// 0067daee  5e                   pop esi
// 0067daef  c20c00               ret 0xc
// library openrbx-client/App\v8world\Joint.cpp (function ?align@Joint@RBX@@UAE?AVCoordinateFrame@G3D@@PAVPrimitive@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Joint.cpp
