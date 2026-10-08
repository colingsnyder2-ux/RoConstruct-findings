// roc 2007-03 00723620  unit: seg_00720000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00723620
//
// 00723620  8bc1                 mov eax, ecx
// 00723622  c700bc407e00         mov dword ptr [eax], 0x7e40bc
// 00723628  c7400400000000       mov dword ptr [eax + 4], 0
// 0072362f  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??0?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
