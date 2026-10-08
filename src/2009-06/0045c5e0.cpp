// roc 2009-06 0045c5e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045c5e0
//
// 0045c5e0  6820b44500           push 0x45b420
// 0045c5e5  6800b5a300           push 0xa3b500
// 0045c5ea  e82151faff           call 0x401710
// 0045c5ef  83c408               add esp, 8
// 0045c5f2  e929dfffff           jmp 0x45a520
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
