// roc 2009-06 00427160  unit: RBX::VScriptContext::?$FactoryProduct::Creator  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427160
//
// 00427160  8b09                 mov ecx, dword ptr [ecx]
// 00427162  85c9                 test ecx, ecx
// 00427164  7405                 je 0x42716b
// 00427166  e93d1e2f00           jmp 0x718fa8
// 0042716b  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ??1shared_count@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O1 /Ob2 /Oy /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
