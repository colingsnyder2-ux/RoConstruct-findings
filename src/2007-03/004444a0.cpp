// roc 2007-03 004444a0  unit: seg_00440000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004444a0
//
// 004444a0  a1c05b8900           mov eax, dword ptr [0x895bc0]
// 004444a5  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?getAssertAction@DebugSettings@RBX@@QBE?AW4AssertAction@Debugable@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
