// roc 2007-08 005d9d80  unit: RBX::UnifiedImageWidget  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d9d80
//
// 005d9d80  56                   push esi
// 005d9d81  8bf1                 mov esi, ecx
// 005d9d83  e8f8e7f2ff           call 0x508580
// 005d9d88  8d4e58               lea ecx, [esi + 0x58]
// 005d9d8b  e8f0e7f2ff           call 0x508580
// 005d9d90  d9ee                 fldz 
// 005d9d92  d99eb0000000         fstp dword ptr [esi + 0xb0]
// 005d9d98  8bc6                 mov eax, esi
// 005d9d9a  5e                   pop esi
// 005d9d9b  c3                   ret 
// library rbxgs/v8datamodel\TimeState.cpp (function ??0TimeState@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimeState.cpp
