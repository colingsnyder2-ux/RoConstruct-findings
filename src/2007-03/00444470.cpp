// roc 2007-03 00444470  unit: seg_00440000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444470
//
// 00444470  a12c748800           mov eax, dword ptr [0x88742c]
// 00444475  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?getAssertAction@DebugSettings@RBX@@QBE?AW4AssertAction@Debugable@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
