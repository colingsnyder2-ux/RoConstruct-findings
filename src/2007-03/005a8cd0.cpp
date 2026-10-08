// roc 2007-03 005a8cd0  unit: seg_005a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8cd0
//
// 005a8cd0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 005a8cd6  c3                   ret 
// library rbxgs/v8datamodel\Feature.cpp (function ?getFaceId@Feature@RBX@@QBE?AW4NormalId@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp
