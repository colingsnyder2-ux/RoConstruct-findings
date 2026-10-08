// roc 2007-03 00536360  unit: seg_00530000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536360
//
// 00536360  a13cb68b00           mov eax, dword ptr [0x8bb63c]
// 00536365  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?getAssertAction@DebugSettings@RBX@@QBE?AW4AssertAction@Debugable@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
