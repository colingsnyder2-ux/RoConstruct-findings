// roc 2009-12 005cf130  unit: RBX::VAggregateChunk::?$WeakReferenceCountedPointer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005cf130
//
// 005cf130  c7014c119c00         mov dword ptr [ecx], 0x9c114c
// 005cf136  e925faffff           jmp 0x5ceb60
// library rbxgs-appdraw/AdornG3D.cpp (function ??1bad_alloc@std@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
