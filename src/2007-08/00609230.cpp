// roc 2007-08 00609230  unit: RBX::RotatePJoint  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00609230
//
// 00609230  c781c000000000000000 mov dword ptr [ecx + 0xc0], 0
// 0060923a  e921130000           jmp 0x60a560
// library openrbx-client/App\v8world\RotateJoint.cpp (function ?removeFromKernel@RotateJoint@RBX@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/RotateJoint.cpp
