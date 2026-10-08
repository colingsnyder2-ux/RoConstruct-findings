// roc 2007-03 00553f40  unit: seg_00550000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00553f40
//
// 00553f40  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 00553f46  c3                   ret 
// library rbxgs/reflection\reflection_object.cpp (function ?getBase@ClassDescriptor@Reflection@RBX@@QBEPBV123@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
