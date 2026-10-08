// roc 2007-03 0047bbe0  unit: seg_00470000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047bbe0
//
// 0047bbe0  83ec14               sub esp, 0x14
// 0047bbe3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047bbe7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0047bbeb  89442404             mov dword ptr [esp + 4], eax
// 0047bbef  8d0424               lea eax, [esp]
// 0047bbf2  50                   push eax
// 0047bbf3  81c1d8010000         add ecx, 0x1d8
// 0047bbf9  c644240410           mov byte ptr [esp + 4], 0x10
// 0047bbfe  8954240c             mov dword ptr [esp + 0xc], edx
// 0047bc02  e829fdffff           call 0x47b930
// 0047bc07  83c414               add esp, 0x14
// 0047bc0a  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?injectSizeEvent@Win32Window@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
