// roc 2007-08 006091c0  unit: RBX::PointToPointBreakConnector  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006091c0
//
// 006091c0  56                   push esi
// 006091c1  6a02                 push 2
// 006091c3  8bf1                 mov esi, ecx
// 006091c5  e8a6140000           call 0x60a670
// 006091ca  c706842d7c00         mov dword ptr [esi], 0x7c2d84
// 006091d0  c786c000000000000000 mov dword ptr [esi + 0xc0], 0
// 006091da  8bc6                 mov eax, esi
// 006091dc  5e                   pop esi
// 006091dd  c3                   ret 
// library openrbx-client/App\v8world\RotateJoint.cpp (function ??0RotateJoint@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/RotateJoint.cpp
