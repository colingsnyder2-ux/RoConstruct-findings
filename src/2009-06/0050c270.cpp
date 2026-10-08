// roc 2009-06 0050c270  unit: RBX::Network::RoundRobinPhysicsSender  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0050c270
//
// 0050c270  d9ee                 fldz 
// 0050c272  8bc1                 mov eax, ecx
// 0050c274  b901000000           mov ecx, 1
// 0050c279  840df8c6a300         test byte ptr [0xa3c6f8], cl
// 0050c27f  7518                 jne 0x50c299
// 0050c281  090df8c6a300         or dword ptr [0xa3c6f8], ecx
// 0050c287  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 0050c28d  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 0050c293  d915f4c6a300         fst dword ptr [0xa3c6f4]
// 0050c299  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 0050c29f  d918                 fstp dword ptr [eax]
// 0050c2a1  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 0050c2a7  d95804               fstp dword ptr [eax + 4]
// 0050c2aa  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 0050c2b0  d95808               fstp dword ptr [eax + 8]
// 0050c2b3  840df8c6a300         test byte ptr [0xa3c6f8], cl
// 0050c2b9  751a                 jne 0x50c2d5
// 0050c2bb  090df8c6a300         or dword ptr [0xa3c6f8], ecx
// 0050c2c1  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 0050c2c7  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 0050c2cd  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 0050c2d3  eb02                 jmp 0x50c2d7
// 0050c2d5  ddd8                 fstp st(0)
// 0050c2d7  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 0050c2dd  d9580c               fstp dword ptr [eax + 0xc]
// 0050c2e0  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 0050c2e6  d95810               fstp dword ptr [eax + 0x10]
// 0050c2e9  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 0050c2ef  d95814               fstp dword ptr [eax + 0x14]
// 0050c2f2  c3                   ret 
// library rbxgs/v8kernel\Body.cpp (function ??0Velocity@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Body.cpp
