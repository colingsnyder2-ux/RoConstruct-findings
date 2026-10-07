// roc 2009-06 00607340  unit: RBX::DataModel  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00607340
//
// 00607340  b801000000           mov eax, 1
// 00607345  840590afa400         test byte ptr [0xa4af90], al
// 0060734b  752a                 jne 0x607377
// 0060734d  d90508e88b00         fld dword ptr [0x8be808]
// 00607353  090590afa400         or dword ptr [0xa4af90], eax
// 00607359  d91580afa400         fst dword ptr [0xa4af80]
// 0060735f  d91584afa400         fst dword ptr [0xa4af84]
// 00607365  d91d88afa400         fstp dword ptr [0xa4af88]
// 0060736b  d9054cad8b00         fld dword ptr [0x8bad4c]
// 00607371  d91d8cafa400         fstp dword ptr [0xa4af8c]
// 00607377  b880afa400           mov eax, 0xa4af80
// 0060737c  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?disabledFill@GuiItem@RBX@@SAABVColor4@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
