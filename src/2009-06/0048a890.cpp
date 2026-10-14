// roc 2009-06 0048a890  unit: Ogre::RbxMeshPartAdapter  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048a890
//
// 0048a890  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048a894  83ec0c               sub esp, 0xc
// 0048a897  85c9                 test ecx, ecx
// 0048a899  770f                 ja 0x48a8aa
// 0048a89b  33c9                 xor ecx, ecx
// 0048a89d  51                   push ecx
// 0048a89e  e895e12800           call 0x718a38
// 0048a8a3  83c404               add esp, 4
// 0048a8a6  83c40c               add esp, 0xc
// 0048a8a9  c3                   ret 
// 0048a8aa  83c8ff               or eax, 0xffffffff
// 0048a8ad  33d2                 xor edx, edx
// 0048a8af  f7f1                 div ecx
// 0048a8b1  83f801               cmp eax, 1
// 0048a8b4  73e7                 jae 0x48a89d
// 0048a8b6  8d442410             lea eax, [esp + 0x10]
// 0048a8ba  50                   push eax
// 0048a8bb  8d4c2404             lea ecx, [esp + 4]
// 0048a8bf  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0048a8c7  ff15c4e98900         call dword ptr [0x89e9c4]
// 0048a8cd  6888919700           push 0x979188
// 0048a8d2  8d4c2404             lea ecx, [esp + 4]
// 0048a8d6  51                   push ecx
// 0048a8d7  c744240838c98a00     mov dword ptr [esp + 8], 0x8ac938
// 0048a8df  e866f12800           call 0x719a4a
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ??$_Allocate@E@std@@YAPAEIPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
