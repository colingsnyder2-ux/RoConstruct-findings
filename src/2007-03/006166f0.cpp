// roc 2007-03 006166f0  unit: seg_00610000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006166f0
//
// 006166f0  56                   push esi
// 006166f1  8bf1                 mov esi, ecx
// 006166f3  c70600000000         mov dword ptr [esi], 0
// 006166f9  c7460406000000       mov dword ptr [esi + 4], 6
// 00616700  e8cb12edff           call 0x4e79d0
// 00616705  d900                 fld dword ptr [eax]
// 00616707  d95e08               fstp dword ptr [esi + 8]
// 0061670a  d94004               fld dword ptr [eax + 4]
// 0061670d  d95e0c               fstp dword ptr [esi + 0xc]
// 00616710  d94008               fld dword ptr [eax + 8]
// 00616713  d95e10               fstp dword ptr [esi + 0x10]
// 00616716  e8b512edff           call 0x4e79d0
// 0061671b  d900                 fld dword ptr [eax]
// 0061671d  d95e14               fstp dword ptr [esi + 0x14]
// 00616720  d94004               fld dword ptr [eax + 4]
// 00616723  d95e18               fstp dword ptr [esi + 0x18]
// 00616726  d94008               fld dword ptr [eax + 8]
// 00616729  8bc6                 mov eax, esi
// 0061672b  d95e1c               fstp dword ptr [esi + 0x1c]
// 0061672e  5e                   pop esi
// 0061672f  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??0SnapInfo@RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
