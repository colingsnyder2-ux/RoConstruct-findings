// roc 2007-03 0068a9a0  unit: seg_00680000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068a9a0
//
// 0068a9a0  8bc1                 mov eax, ecx
// 0068a9a2  c70084fb7c00         mov dword ptr [eax], 0x7cfb84
// 0068a9a8  c7400400000000       mov dword ptr [eax + 4], 0
// 0068a9af  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ??0?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
