// roc 2009-12 007680d0  unit: RBX::VPartAdornment::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007680d0
//
// 007680d0  68c0807600           push 0x7680c0
// 007680d5  68e87db900           push 0xb97de8
// 007680da  e85195c9ff           call 0x401630
// 007680df  83c408               add esp, 8
// 007680e2  e969ffffff           jmp 0x768050
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
