// roc 2007-03 00553f30  unit: seg_00550000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00553f30
//
// 00553f30  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 00553f36  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?getProfileWorldStep@World@RBX@@QAEAAVCodeProfiler@Profiling@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
