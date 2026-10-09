// roc 2008-06 00645ae0  unit: RBX::RotatePJoint  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645ae0
//
// 00645ae0  c781c000000000000000 mov dword ptr [ecx + 0xc0], 0
// 00645aea  e9f10e0000           jmp 0x6469e0
// library openrbx-client/App\v8world\RotateJoint.cpp (function ?removeFromKernel@RotateJoint@RBX@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/RotateJoint.cpp
