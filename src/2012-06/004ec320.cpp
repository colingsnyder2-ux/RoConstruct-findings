// roc 2012-06 004ec320  unit: Ogre::RbxEntity  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ec320
//
// 004ec320  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ec324  83ec0c               sub esp, 0xc
// 004ec327  85c9                 test ecx, ecx
// 004ec329  770f                 ja 0x4ec33a
// 004ec32b  33c9                 xor ecx, ecx
// 004ec32d  51                   push ecx
// 004ec32e  e8e75d4900           call 0x98211a
// 004ec333  83c404               add esp, 4
// 004ec336  83c40c               add esp, 0xc
// 004ec339  c3                   ret 
// 004ec33a  83c8ff               or eax, 0xffffffff
// 004ec33d  33d2                 xor edx, edx
// 004ec33f  f7f1                 div ecx
// 004ec341  83f801               cmp eax, 1
// 004ec344  73e7                 jae 0x4ec32d
// 004ec346  8d442410             lea eax, [esp + 0x10]
// 004ec34a  50                   push eax
// 004ec34b  8d4c2404             lea ecx, [esp + 4]
// 004ec34f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004ec357  ff15d029b200         call dword ptr [0xb229d0]
// 004ec35d  685861cd00           push 0xcd6158
// 004ec362  8d4c2404             lea ecx, [esp + 4]
// 004ec366  51                   push ecx
// 004ec367  c7442408942eb400     mov dword ptr [esp + 8], 0xb42e94
// 004ec36f  e8d06d4900           call 0x983144
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ??$_Allocate@E@std@@YAPAEIPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
