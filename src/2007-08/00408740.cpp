// roc 2007-08 00408740  unit: VCApp::?$CComObject  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408740
//
// 00408740  6aff                 push -1
// 00408742  68de967300           push 0x7396de
// 00408747  64a100000000         mov eax, dword ptr fs:[0]
// 0040874d  50                   push eax
// 0040874e  a188518b00           mov eax, dword ptr [0x8b5188]
// 00408753  33c4                 xor eax, esp
// 00408755  50                   push eax
// 00408756  8d442404             lea eax, [esp + 4]
// 0040875a  64a300000000         mov dword ptr fs:[0], eax
// 00408760  b801000000           mov eax, 1
// 00408765  84053caf8b00         test byte ptr [0x8baf3c], al
// 0040876b  7525                 jne 0x408792
// 0040876d  09053caf8b00         or dword ptr [0x8baf3c], eax
// 00408773  b9e8ae8b00           mov ecx, 0x8baee8
// 00408778  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00408780  e86b101400           call 0x5497f0
// 00408785  6810737700           push 0x777310
// 0040878a  e894852200           call 0x630d23
// 0040878f  83c404               add esp, 4
// 00408792  b8e8ae8b00           mov eax, 0x8baee8
// 00408797  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040879b  64890d00000000       mov dword ptr fs:[0], ecx
// 004087a2  59                   pop ecx
// 004087a3  83c40c               add esp, 0xc
// 004087a6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
