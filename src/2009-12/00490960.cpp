// roc 2009-12 00490960  unit: Ogre::RbxEntity  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00490960
//
// 00490960  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00490964  83ec0c               sub esp, 0xc
// 00490967  85c9                 test ecx, ecx
// 00490969  770f                 ja 0x49097a
// 0049096b  33c9                 xor ecx, ecx
// 0049096d  51                   push ecx
// 0049096e  e8ed2e3600           call 0x7f3860
// 00490973  83c404               add esp, 4
// 00490976  83c40c               add esp, 0xc
// 00490979  c3                   ret 
// 0049097a  83c8ff               or eax, 0xffffffff
// 0049097d  33d2                 xor edx, edx
// 0049097f  f7f1                 div ecx
// 00490981  83f801               cmp eax, 1
// 00490984  73e7                 jae 0x49096d
// 00490986  8d442410             lea eax, [esp + 0x10]
// 0049098a  50                   push eax
// 0049098b  8d4c2404             lea ecx, [esp + 4]
// 0049098f  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00490997  ff1548b79800         call dword ptr [0x98b748]
// 0049099d  6838efa800           push 0xa8ef38
// 004909a2  8d4c2404             lea ecx, [esp + 4]
// 004909a6  51                   push ecx
// 004909a7  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 004909af  e8c43e3600           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ??$_Allocate@E@std@@YAPAEIPAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
