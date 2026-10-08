// roc 2008-06 0066c600  unit: RBX::GroupDragTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066c600
//
// 0066c600  56                   push esi
// 0066c601  8bf1                 mov esi, ecx
// 0066c603  c70600000000         mov dword ptr [esi], 0
// 0066c609  c7460406000000       mov dword ptr [esi + 4], 6
// 0066c610  e84b43eaff           call 0x510960
// 0066c615  d900                 fld dword ptr [eax]
// 0066c617  d95e08               fstp dword ptr [esi + 8]
// 0066c61a  d94004               fld dword ptr [eax + 4]
// 0066c61d  d95e0c               fstp dword ptr [esi + 0xc]
// 0066c620  d94008               fld dword ptr [eax + 8]
// 0066c623  d95e10               fstp dword ptr [esi + 0x10]
// 0066c626  e83543eaff           call 0x510960
// 0066c62b  d900                 fld dword ptr [eax]
// 0066c62d  d95e14               fstp dword ptr [esi + 0x14]
// 0066c630  d94004               fld dword ptr [eax + 4]
// 0066c633  d95e18               fstp dword ptr [esi + 0x18]
// 0066c636  d94008               fld dword ptr [eax + 8]
// 0066c639  8bc6                 mov eax, esi
// 0066c63b  d95e1c               fstp dword ptr [esi + 0x1c]
// 0066c63e  5e                   pop esi
// 0066c63f  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??0SnapInfo@RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
