// roc 2011-06 00543340  unit: G3D::Sphere  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00543340
//
// 00543340  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00543344  83ec0c               sub esp, 0xc
// 00543347  85c9                 test ecx, ecx
// 00543349  770f                 ja 0x54335a
// 0054334b  33c9                 xor ecx, ecx
// 0054334d  51                   push ecx
// 0054334e  e80b6d2c00           call 0x80a05e
// 00543353  83c404               add esp, 4
// 00543356  83c40c               add esp, 0xc
// 00543359  c3                   ret 
// 0054335a  83c8ff               or eax, 0xffffffff
// 0054335d  33d2                 xor edx, edx
// 0054335f  f7f1                 div ecx
// 00543361  83f801               cmp eax, 1
// 00543364  73e7                 jae 0x54334d
// 00543366  8d442410             lea eax, [esp + 0x10]
// 0054336a  50                   push eax
// 0054336b  8d4c2404             lea ecx, [esp + 4]
// 0054336f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00543377  ff156c0aa400         call dword ptr [0xa40a6c]
// 0054337d  68c472b800           push 0xb872c4
// 00543382  8d4c2404             lea ecx, [esp + 4]
// 00543386  51                   push ecx
// 00543387  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 0054338f  e8187d2c00           call 0x80b0ac
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ??$_Allocate@E@std@@YAPAEIPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
