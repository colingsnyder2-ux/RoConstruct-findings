// roc 2007-08 0062b3e0  unit: RBX::GroupDragTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062b3e0
//
// 0062b3e0  56                   push esi
// 0062b3e1  8bf1                 mov esi, ecx
// 0062b3e3  c70600000000         mov dword ptr [esi], 0
// 0062b3e9  c7460406000000       mov dword ptr [esi + 4], 6
// 0062b3f0  e8eb8becff           call 0x4f3fe0
// 0062b3f5  d900                 fld dword ptr [eax]
// 0062b3f7  d95e08               fstp dword ptr [esi + 8]
// 0062b3fa  d94004               fld dword ptr [eax + 4]
// 0062b3fd  d95e0c               fstp dword ptr [esi + 0xc]
// 0062b400  d94008               fld dword ptr [eax + 8]
// 0062b403  d95e10               fstp dword ptr [esi + 0x10]
// 0062b406  e8d58becff           call 0x4f3fe0
// 0062b40b  d900                 fld dword ptr [eax]
// 0062b40d  d95e14               fstp dword ptr [esi + 0x14]
// 0062b410  d94004               fld dword ptr [eax + 4]
// 0062b413  d95e18               fstp dword ptr [esi + 0x18]
// 0062b416  d94008               fld dword ptr [eax + 8]
// 0062b419  8bc6                 mov eax, esi
// 0062b41b  d95e1c               fstp dword ptr [esi + 0x1c]
// 0062b41e  5e                   pop esi
// 0062b41f  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??0SnapInfo@RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
