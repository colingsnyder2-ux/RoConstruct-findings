// roc 2007-03 00679e60  unit: seg_00670000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679e60
//
// 00679e60  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 00679e66  c3                   ret 
// library rbxgs/v8datamodel\Feature.cpp (function ?getLeftRight@Feature@RBX@@QBE?AW4LeftRight@12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp
