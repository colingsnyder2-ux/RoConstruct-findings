// roc 2007-08 0057beb0  unit: RBX::ArrowTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057beb0
//
// 0057beb0  6858308c00           push 0x8c3058
// 0057beb5  6810b35700           push 0x57b310
// 0057beba  e861961a00           call 0x725520
// 0057bebf  83c408               add esp, 8
// 0057bec2  e9a9edffff           jmp 0x57ac70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
