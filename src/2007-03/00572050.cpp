// roc 2007-03 00572050  unit: seg_00570000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572050
//
// 00572050  8b8198010000         mov eax, dword ptr [ecx + 0x198]
// 00572056  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?getFormFactor@PartInstance@RBX@@QBE?AW4FormFactor@12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
