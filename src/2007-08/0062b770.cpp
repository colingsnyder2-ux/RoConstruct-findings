// roc 2007-08 0062b770  unit: RBX::GroupDragTool  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062b770
//
// 0062b770  d9ee                 fldz 
// 0062b772  33c0                 xor eax, eax
// 0062b774  56                   push esi
// 0062b775  8bf1                 mov esi, ecx
// 0062b777  8906                 mov dword ptr [esi], eax
// 0062b779  d95618               fst dword ptr [esi + 0x18]
// 0062b77c  894604               mov dword ptr [esi + 4], eax
// 0062b77f  d9561c               fst dword ptr [esi + 0x1c]
// 0062b782  894608               mov dword ptr [esi + 8], eax
// 0062b785  d95e20               fstp dword ptr [esi + 0x20]
// 0062b788  89460c               mov dword ptr [esi + 0xc], eax
// 0062b78b  894610               mov dword ptr [esi + 0x10], eax
// 0062b78e  894614               mov dword ptr [esi + 0x14], eax
// 0062b791  894624               mov dword ptr [esi + 0x24], eax
// 0062b794  c7462806000000       mov dword ptr [esi + 0x28], 6
// 0062b79b  e84088ecff           call 0x4f3fe0
// 0062b7a0  d900                 fld dword ptr [eax]
// 0062b7a2  d95e2c               fstp dword ptr [esi + 0x2c]
// 0062b7a5  d94004               fld dword ptr [eax + 4]
// 0062b7a8  d95e30               fstp dword ptr [esi + 0x30]
// 0062b7ab  d94008               fld dword ptr [eax + 8]
// 0062b7ae  d95e34               fstp dword ptr [esi + 0x34]
// 0062b7b1  e82a88ecff           call 0x4f3fe0
// 0062b7b6  d900                 fld dword ptr [eax]
// 0062b7b8  8d4e44               lea ecx, [esi + 0x44]
// 0062b7bb  d95e38               fstp dword ptr [esi + 0x38]
// 0062b7be  d94004               fld dword ptr [eax + 4]
// 0062b7c1  d95e3c               fstp dword ptr [esi + 0x3c]
// 0062b7c4  d94008               fld dword ptr [eax + 8]
// 0062b7c7  d95e40               fstp dword ptr [esi + 0x40]
// 0062b7ca  e871b5edff           call 0x506d40
// 0062b7cf  d9ee                 fldz 
// 0062b7d1  8bc6                 mov eax, esi
// 0062b7d3  d95664               fst dword ptr [esi + 0x64]
// 0062b7d6  d95668               fst dword ptr [esi + 0x68]
// 0062b7d9  d95e6c               fstp dword ptr [esi + 0x6c]
// 0062b7dc  5e                   pop esi
// 0062b7dd  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??0RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
