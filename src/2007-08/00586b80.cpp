// roc 2007-08 00586b80  unit: RBX::VHat::?$FactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586b80
//
// 00586b80  83ec10               sub esp, 0x10
// 00586b83  8d0424               lea eax, [esp]
// 00586b86  50                   push eax
// 00586b87  e894ffffff           call 0x586b20
// 00586b8c  d900                 fld dword ptr [eax]
// 00586b8e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00586b92  d919                 fstp dword ptr [ecx]
// 00586b94  d94004               fld dword ptr [eax + 4]
// 00586b97  d95904               fstp dword ptr [ecx + 4]
// 00586b9a  d94008               fld dword ptr [eax + 8]
// 00586b9d  8bc1                 mov eax, ecx
// 00586b9f  d95908               fstp dword ptr [ecx + 8]
// 00586ba2  83c410               add esp, 0x10
// 00586ba5  c20400               ret 4
// library rbxgs/v8datamodel\BrickColor.cpp (function ?color3@BrickColor@RBX@@QBE?AVColor3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
