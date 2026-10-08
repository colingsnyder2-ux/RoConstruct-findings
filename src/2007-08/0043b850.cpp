// roc 2007-08 0043b850  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043b850
//
// 0043b850  56                   push esi
// 0043b851  8b31                 mov esi, dword ptr [ecx]
// 0043b853  85f6                 test esi, esi
// 0043b855  7411                 je 0x43b868
// 0043b857  8d4e08               lea ecx, [esi + 8]
// 0043b85a  e8a13ffdff           call 0x40f800
// 0043b85f  56                   push esi
// 0043b860  e8fd431f00           call 0x62fc62
// 0043b865  83c404               add esp, 4
// 0043b868  5e                   pop esi
// 0043b869  c3                   ret 
// library rbxgs/v8datamodel\MouseCommand.cpp (function ??1?$auto_ptr@VXmlState@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
