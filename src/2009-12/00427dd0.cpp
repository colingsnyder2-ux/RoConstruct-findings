// roc 2009-12 00427dd0  unit: RBX::VScriptContext::?$FactoryProduct::Creator  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00427dd0
//
// 00427dd0  8b09                 mov ecx, dword ptr [ecx]
// 00427dd2  85c9                 test ecx, ecx
// 00427dd4  7405                 je 0x427ddb
// 00427dd6  e901c03c00           jmp 0x7f3ddc
// 00427ddb  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??1shared_count@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
