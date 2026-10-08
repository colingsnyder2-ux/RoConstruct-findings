// roc 2007-03 004abe00  unit: seg_004a0000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004abe00
//
// 004abe00  8b442408             mov eax, dword ptr [esp + 8]
// 004abe04  8b542404             mov edx, dword ptr [esp + 4]
// 004abe08  50                   push eax
// 004abe09  52                   push edx
// 004abe0a  e8e1210000           call 0x4adff0
// 004abe0f  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryOutput.cpp (function ?writeInt64@BinaryOutput@G3D@@QAEX_J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryOutput.cpp
