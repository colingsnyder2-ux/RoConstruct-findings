// roc 2009-06 006f78a0  unit: RBX::GroupDragTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f78a0
//
// 006f78a0  56                   push esi
// 006f78a1  8bf1                 mov esi, ecx
// 006f78a3  c70600000000         mov dword ptr [esi], 0
// 006f78a9  c7460406000000       mov dword ptr [esi + 4], 6
// 006f78b0  e8abb7e7ff           call 0x573060
// 006f78b5  d900                 fld dword ptr [eax]
// 006f78b7  d95e08               fstp dword ptr [esi + 8]
// 006f78ba  d94004               fld dword ptr [eax + 4]
// 006f78bd  d95e0c               fstp dword ptr [esi + 0xc]
// 006f78c0  d94008               fld dword ptr [eax + 8]
// 006f78c3  d95e10               fstp dword ptr [esi + 0x10]
// 006f78c6  e895b7e7ff           call 0x573060
// 006f78cb  d900                 fld dword ptr [eax]
// 006f78cd  d95e14               fstp dword ptr [esi + 0x14]
// 006f78d0  d94004               fld dword ptr [eax + 4]
// 006f78d3  d95e18               fstp dword ptr [esi + 0x18]
// 006f78d6  d94008               fld dword ptr [eax + 8]
// 006f78d9  8bc6                 mov eax, esi
// 006f78db  d95e1c               fstp dword ptr [esi + 0x1c]
// 006f78de  5e                   pop esi
// 006f78df  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??0SnapInfo@RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
