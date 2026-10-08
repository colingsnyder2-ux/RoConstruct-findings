// roc 2007-03 004c4280  unit: seg_004c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4280
//
// 004c4280  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 004c4286  c3                   ret 
// library rbxgs/script\Script.cpp (function ?getEmbeddedCode@Script@RBX@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
