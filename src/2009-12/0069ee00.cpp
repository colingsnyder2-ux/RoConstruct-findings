// roc 2009-12 0069ee00  unit: std::strstream  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069ee00
//
// 0069ee00  56                   push esi
// 0069ee01  6820eb6900           push 0x69eb20
// 0069ee06  68f816b900           push 0xb916f8
// 0069ee0b  8bf1                 mov esi, ecx
// 0069ee0d  e81e28d6ff           call 0x401630
// 0069ee12  a1e416b900           mov eax, dword ptr [0xb916e4]
// 0069ee17  83c408               add esp, 8
// 0069ee1a  68e816b900           push 0xb916e8
// 0069ee1f  8906                 mov dword ptr [esi], eax
// 0069ee21  ff150cb29800         call dword ptr [0x98b20c]
// 0069ee27  894604               mov dword ptr [esi + 4], eax
// 0069ee2a  8bc6                 mov eax, esi
// 0069ee2c  5e                   pop esi
// 0069ee2d  c3                   ret 
// library rbxgs/util\Guid.cpp (function ??0Guid@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Guid.cpp
