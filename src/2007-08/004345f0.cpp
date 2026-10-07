// roc 2007-08 004345f0  unit: CClassTreeView  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004345f0
//
// 004345f0  6aff                 push -1
// 004345f2  68aedf7300           push 0x73dfae
// 004345f7  64a100000000         mov eax, dword ptr fs:[0]
// 004345fd  50                   push eax
// 004345fe  a188518b00           mov eax, dword ptr [0x8b5188]
// 00434603  33c4                 xor eax, esp
// 00434605  50                   push eax
// 00434606  8d442404             lea eax, [esp + 4]
// 0043460a  64a300000000         mov dword ptr fs:[0], eax
// 00434610  b801000000           mov eax, 1
// 00434615  84055cb98b00         test byte ptr [0x8bb95c], al
// 0043461b  7525                 jne 0x434642
// 0043461d  09055cb98b00         or dword ptr [0x8bb95c], eax
// 00434623  b954b98b00           mov ecx, 0x8bb954
// 00434628  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00434630  e8cb102f00           call 0x725700
// 00434635  68c0797700           push 0x7779c0
// 0043463a  e8e4c61f00           call 0x630d23
// 0043463f  83c404               add esp, 4
// 00434642  b854b98b00           mov eax, 0x8bb954
// 00434647  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043464b  64890d00000000       mov dword ptr fs:[0], ecx
// 00434652  59                   pop ecx
// 00434653  83c40c               add esp, 0xc
// 00434656  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
