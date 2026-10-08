// roc 2007-03 0068c500  unit: seg_00680000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068c500
//
// 0068c500  8bc1                 mov eax, ecx
// 0068c502  c700ecff7c00         mov dword ptr [eax], 0x7cffec
// 0068c508  c7400400000000       mov dword ptr [eax + 4], 0
// 0068c50f  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??0?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
