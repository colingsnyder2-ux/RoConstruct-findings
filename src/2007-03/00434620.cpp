// roc 2007-03 00434620  unit: seg_00430000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00434620
//
// 00434620  6aff                 push -1
// 00434622  68ee097400           push 0x7409ee
// 00434627  64a100000000         mov eax, dword ptr fs:[0]
// 0043462d  50                   push eax
// 0043462e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00434633  33c4                 xor eax, esp
// 00434635  50                   push eax
// 00434636  8d442404             lea eax, [esp + 4]
// 0043463a  64a300000000         mov dword ptr fs:[0], eax
// 00434640  b801000000           mov eax, 1
// 00434645  8405685e8b00         test byte ptr [0x8b5e68], al
// 0043464b  7525                 jne 0x434672
// 0043464d  0905685e8b00         or dword ptr [0x8b5e68], eax
// 00434653  b9605e8b00           mov ecx, 0x8b5e60
// 00434658  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00434660  e8cb232f00           call 0x726a30
// 00434665  68b0797700           push 0x7779b0
// 0043466a  e844ab1e00           call 0x61f1b3
// 0043466f  83c404               add esp, 4
// 00434672  b8605e8b00           mov eax, 0x8b5e60
// 00434677  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043467b  64890d00000000       mov dword ptr fs:[0], ecx
// 00434682  59                   pop ecx
// 00434683  83c40c               add esp, 0xc
// 00434686  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
