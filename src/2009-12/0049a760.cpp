// roc 2009-12 0049a760  unit: Ogre::RbxMeshPartAdapter::??fillVertices::?L::FileLoader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049a760
//
// 0049a760  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049a764  83ec0c               sub esp, 0xc
// 0049a767  85c9                 test ecx, ecx
// 0049a769  7712                 ja 0x49a77d
// 0049a76b  33c9                 xor ecx, ecx
// 0049a76d  8d1409               lea edx, [ecx + ecx]
// 0049a770  52                   push edx
// 0049a771  e8ea903500           call 0x7f3860
// 0049a776  83c404               add esp, 4
// 0049a779  83c40c               add esp, 0xc
// 0049a77c  c3                   ret 
// 0049a77d  83c8ff               or eax, 0xffffffff
// 0049a780  33d2                 xor edx, edx
// 0049a782  f7f1                 div ecx
// 0049a784  83f802               cmp eax, 2
// 0049a787  73e4                 jae 0x49a76d
// 0049a789  8d442410             lea eax, [esp + 0x10]
// 0049a78d  50                   push eax
// 0049a78e  8d4c2404             lea ecx, [esp + 4]
// 0049a792  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0049a79a  ff1548b79800         call dword ptr [0x98b748]
// 0049a7a0  6838efa800           push 0xa8ef38
// 0049a7a5  8d4c2404             lea ecx, [esp + 4]
// 0049a7a9  51                   push ecx
// 0049a7aa  c744240878f49900     mov dword ptr [esp + 8], 0x99f478
// 0049a7b2  e8c1a03500           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ??$_Allocate@G@std@@YAPAGIPAG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
