// roc 2007-03 0043b560  unit: seg_00430000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0043b560
//
// 0043b560  56                   push esi
// 0043b561  8b31                 mov esi, dword ptr [ecx]
// 0043b563  85f6                 test esi, esi
// 0043b565  7411                 je 0x43b578
// 0043b567  8d4e08               lea ecx, [esi + 8]
// 0043b56a  e84150fdff           call 0x4105b0
// 0043b56f  56                   push esi
// 0043b570  e87b2b1e00           call 0x61e0f0
// 0043b575  83c404               add esp, 4
// 0043b578  5e                   pop esi
// 0043b579  c3                   ret 
// library rbxgs/v8datamodel\MouseCommand.cpp (function ??1?$auto_ptr@VXmlState@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
