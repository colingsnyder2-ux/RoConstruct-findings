// roc 2007-03 005d8500  unit: seg_005d0000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d8500
//
// 005d8500  56                   push esi
// 005d8501  8bf1                 mov esi, ecx
// 005d8503  e82850f2ff           call 0x4fd530
// 005d8508  8d4e58               lea ecx, [esi + 0x58]
// 005d850b  e82050f2ff           call 0x4fd530
// 005d8510  d9ee                 fldz 
// 005d8512  d99eb0000000         fstp dword ptr [esi + 0xb0]
// 005d8518  8bc6                 mov eax, esi
// 005d851a  5e                   pop esi
// 005d851b  c3                   ret 
// library rbxgs/v8datamodel\TimeState.cpp (function ??0TimeState@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimeState.cpp
