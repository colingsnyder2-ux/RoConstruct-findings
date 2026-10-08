// roc 2007-03 00445cd0  unit: seg_00440000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00445cd0
//
// 00445cd0  6aff                 push -1
// 00445cd2  686e217400           push 0x74216e
// 00445cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00445cdd  50                   push eax
// 00445cde  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00445ce3  33c4                 xor eax, esp
// 00445ce5  50                   push eax
// 00445ce6  8d442404             lea eax, [esp + 4]
// 00445cea  64a300000000         mov dword ptr fs:[0], eax
// 00445cf0  b801000000           mov eax, 1
// 00445cf5  840578608b00         test byte ptr [0x8b6078], al
// 00445cfb  7525                 jne 0x445d22
// 00445cfd  090578608b00         or dword ptr [0x8b6078], eax
// 00445d03  b9e85f8b00           mov ecx, 0x8b5fe8
// 00445d08  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00445d10  e83bfeffff           call 0x445b50
// 00445d15  68207d7700           push 0x777d20
// 00445d1a  e894941d00           call 0x61f1b3
// 00445d1f  83c404               add esp, 4
// 00445d22  b8e85f8b00           mov eax, 0x8b5fe8
// 00445d27  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00445d2b  64890d00000000       mov dword ptr fs:[0], ecx
// 00445d32  59                   pop ecx
// 00445d33  83c40c               add esp, 0xc
// 00445d36  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
