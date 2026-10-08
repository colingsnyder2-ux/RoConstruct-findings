// roc 2007-03 005832f0  unit: seg_00580000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005832f0
//
// 005832f0  83ec10               sub esp, 0x10
// 005832f3  8d0424               lea eax, [esp]
// 005832f6  50                   push eax
// 005832f7  e894ffffff           call 0x583290
// 005832fc  d900                 fld dword ptr [eax]
// 005832fe  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00583302  d919                 fstp dword ptr [ecx]
// 00583304  d94004               fld dword ptr [eax + 4]
// 00583307  d95904               fstp dword ptr [ecx + 4]
// 0058330a  d94008               fld dword ptr [eax + 8]
// 0058330d  8bc1                 mov eax, ecx
// 0058330f  d95908               fstp dword ptr [ecx + 8]
// 00583312  83c410               add esp, 0x10
// 00583315  c20400               ret 4
// library rbxgs/v8datamodel\BrickColor.cpp (function ?color3@BrickColor@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
