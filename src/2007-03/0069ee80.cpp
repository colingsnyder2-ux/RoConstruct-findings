// roc 2007-03 0069ee80  unit: seg_00690000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069ee80
//
// 0069ee80  a130238c00           mov eax, dword ptr [0x8c2330]
// 0069ee85  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?getAssertAction@DebugSettings@RBX@@QBE?AW4AssertAction@Debugable@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
