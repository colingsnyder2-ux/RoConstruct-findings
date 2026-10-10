// from server: 100% by tester
// roc 2007-03 00408650  unit: seg_00400000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408650
//
// 00408650  6aff                 push -1
// 00408652  68eebd7300           push 0x73bdee
// 00408657  64a100000000         mov eax, dword ptr fs:[0]
// 0040865d  50                   push eax
// 0040865e  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00408663  33c4                 xor eax, esp
// 00408665  50                   push eax
// 00408666  8d442404             lea eax, [esp + 4]
// 0040866a  64a300000000         mov dword ptr fs:[0], eax
// 00408670  b801000000           mov eax, 1
// 00408675  84054c548b00         test byte ptr [0x8b544c], al
// 0040867b  7525                 jne 0x4086a2
// 0040867d  09054c548b00         or dword ptr [0x8b544c], eax
// 00408683  b900548b00           mov ecx, 0x8b5400
// 00408688  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00408690  e8ebfb1300           call 0x548280
// 00408695  6890737700           push 0x777390
// 0040869a  e8146b2100           call 0x61f1b3
// 0040869f  83c404               add esp, 4
// 004086a2  b800548b00           mov eax, 0x8b5400
// 004086a7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004086ab  64890d00000000       mov dword ptr fs:[0], ecx
// 004086b2  59                   pop ecx
// 004086b3  83c40c               add esp, 0xc
// 004086b6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
