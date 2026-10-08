// roc 2007-08 0040f300  unit: VCRenderSettings::?$FactoryProduct::Creator  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f300
//
// 0040f300  85c9                 test ecx, ecx
// 0040f302  7408                 je 0x40f30c
// 0040f304  83c104               add ecx, 4
// 0040f307  e9c4e01400           jmp 0x55d3d0
// 0040f30c  33c9                 xor ecx, ecx
// 0040f30e  e9bde01400           jmp 0x55d3d0
// library rbxgs/v8datamodel\DataModel.cpp (function ??1XmlAttribute@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
