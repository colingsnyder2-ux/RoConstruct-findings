// roc 2009-12 007be4a0  unit: RBX::FilterStairs  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007be4a0
//
// 007be4a0  56                   push esi
// 007be4a1  8bf1                 mov esi, ecx
// 007be4a3  c70600000000         mov dword ptr [esi], 0
// 007be4a9  c7460406000000       mov dword ptr [esi + 4], 6
// 007be4b0  e8bb68e3ff           call 0x5f4d70
// 007be4b5  d900                 fld dword ptr [eax]
// 007be4b7  d95e08               fstp dword ptr [esi + 8]
// 007be4ba  d94004               fld dword ptr [eax + 4]
// 007be4bd  d95e0c               fstp dword ptr [esi + 0xc]
// 007be4c0  d94008               fld dword ptr [eax + 8]
// 007be4c3  d95e10               fstp dword ptr [esi + 0x10]
// 007be4c6  e8a568e3ff           call 0x5f4d70
// 007be4cb  d900                 fld dword ptr [eax]
// 007be4cd  d95e14               fstp dword ptr [esi + 0x14]
// 007be4d0  d94004               fld dword ptr [eax + 4]
// 007be4d3  d95e18               fstp dword ptr [esi + 0x18]
// 007be4d6  d94008               fld dword ptr [eax + 8]
// 007be4d9  8bc6                 mov eax, esi
// 007be4db  d95e1c               fstp dword ptr [esi + 0x1c]
// 007be4de  5e                   pop esi
// 007be4df  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??0SnapInfo@RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
