// roc 2007-03 007019f0  unit: seg_00700000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007019f0
//
// 007019f0  a150288c00           mov eax, dword ptr [0x8c2850]
// 007019f5  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?getAssertAction@DebugSettings@RBX@@QBE?AW4AssertAction@Debugable@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
