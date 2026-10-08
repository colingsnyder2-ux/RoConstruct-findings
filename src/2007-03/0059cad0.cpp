// roc 2007-03 0059cad0  unit: seg_00590000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059cad0
//
// 0059cad0  8b8160010000         mov eax, dword ptr [ecx + 0x160]
// 0059cad6  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ?getBinType@HopperBin@RBX@@QBE?AW4BinType@12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
