// roc 2007-03 00533e80  unit: seg_00530000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533e80
//
// 00533e80  b001                 mov al, 1
// 00533e82  8881e8010000         mov byte ptr [ecx + 0x1e8], al
// 00533e88  888118020000         mov byte ptr [ecx + 0x218], al
// 00533e8e  8881b4010000         mov byte ptr [ecx + 0x1b4], al
// 00533e94  e947200800           jmp 0x5b5ee0
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?onExtentsChanged@ModelInstance@RBX@@UBEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
