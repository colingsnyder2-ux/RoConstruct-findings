// roc 2009-06 00632f50  unit: std::strstream  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00632f50
//
// 00632f50  56                   push esi
// 00632f51  68702c6300           push 0x632c70
// 00632f56  6844baa400           push 0xa4ba44
// 00632f5b  8bf1                 mov esi, ecx
// 00632f5d  e8aee7dcff           call 0x401710
// 00632f62  a130baa400           mov eax, dword ptr [0xa4ba30]
// 00632f67  83c408               add esp, 8
// 00632f6a  6834baa400           push 0xa4ba34
// 00632f6f  8906                 mov dword ptr [esi], eax
// 00632f71  ff15d0e18900         call dword ptr [0x89e1d0]
// 00632f77  894604               mov dword ptr [esi + 4], eax
// 00632f7a  8bc6                 mov eax, esi
// 00632f7c  5e                   pop esi
// 00632f7d  c3                   ret 
// library rbxgs/util\Guid.cpp (function ??0Guid@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Guid.cpp
