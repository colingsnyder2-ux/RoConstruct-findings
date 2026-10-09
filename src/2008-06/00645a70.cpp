// roc 2008-06 00645a70  unit: RBX::PointToPointBreakConnector  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645a70
//
// 00645a70  56                   push esi
// 00645a71  6a02                 push 2
// 00645a73  8bf1                 mov esi, ecx
// 00645a75  e8860e0000           call 0x646900
// 00645a7a  c706c4ad8400         mov dword ptr [esi], 0x84adc4
// 00645a80  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 00645a8a  8bc6                 mov eax, esi
// 00645a8c  5e                   pop esi
// 00645a8d  c3                   ret 
// library openrbx-client/App\v8world\RotateJoint.cpp (function ??0RotateJoint@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/RotateJoint.cpp
