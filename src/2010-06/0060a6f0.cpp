// roc 2010-06 0060a6f0  unit: std::strstream  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060a6f0
//
// 0060a6f0  56                   push esi
// 0060a6f1  6810a46000           push 0x60a410
// 0060a6f6  68789ec100           push 0xc19e78
// 0060a6fb  8bf1                 mov esi, ecx
// 0060a6fd  e88e6fdfff           call 0x401690
// 0060a702  a1649ec100           mov eax, dword ptr [0xc19e64]
// 0060a707  83c408               add esp, 8
// 0060a70a  68689ec100           push 0xc19e68
// 0060a70f  8906                 mov dword ptr [esi], eax
// 0060a711  ff1580a39e00         call dword ptr [0x9ea380]
// 0060a717  894604               mov dword ptr [esi + 4], eax
// 0060a71a  8bc6                 mov eax, esi
// 0060a71c  5e                   pop esi
// 0060a71d  c3                   ret 
// library rbxgs/util\Guid.cpp (function ??0Guid@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Guid.cpp
