// roc 2009-06 00484f50  unit: RBX::MeshGen  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00484f50
//
// 00484f50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00484f54  83ec0c               sub esp, 0xc
// 00484f57  85c9                 test ecx, ecx
// 00484f59  7712                 ja 0x484f6d
// 00484f5b  33c9                 xor ecx, ecx
// 00484f5d  8d1409               lea edx, [ecx + ecx]
// 00484f60  52                   push edx
// 00484f61  e8d23a2900           call 0x718a38
// 00484f66  83c404               add esp, 4
// 00484f69  83c40c               add esp, 0xc
// 00484f6c  c3                   ret 
// 00484f6d  83c8ff               or eax, 0xffffffff
// 00484f70  33d2                 xor edx, edx
// 00484f72  f7f1                 div ecx
// 00484f74  83f802               cmp eax, 2
// 00484f77  73e4                 jae 0x484f5d
// 00484f79  8d442410             lea eax, [esp + 0x10]
// 00484f7d  50                   push eax
// 00484f7e  8d4c2404             lea ecx, [esp + 4]
// 00484f82  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00484f8a  ff15c4e98900         call dword ptr [0x89e9c4]
// 00484f90  6888919700           push 0x979188
// 00484f95  8d4c2404             lea ecx, [esp + 4]
// 00484f99  51                   push ecx
// 00484f9a  c744240838c98a00     mov dword ptr [esp + 8], 0x8ac938
// 00484fa2  e8a34a2900           call 0x719a4a
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ??$_Allocate@G@std@@YAPAGIPAG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
