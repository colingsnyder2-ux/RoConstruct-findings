// roc 2009-06 00484ef0  unit: RBX::MeshGen  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00484ef0
//
// 00484ef0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00484ef4  83ec0c               sub esp, 0xc
// 00484ef7  85c9                 test ecx, ecx
// 00484ef9  7716                 ja 0x484f11
// 00484efb  33c9                 xor ecx, ecx
// 00484efd  8d14cd00000000       lea edx, [ecx*8]
// 00484f04  52                   push edx
// 00484f05  e82e3b2900           call 0x718a38
// 00484f0a  83c404               add esp, 4
// 00484f0d  83c40c               add esp, 0xc
// 00484f10  c3                   ret 
// 00484f11  83c8ff               or eax, 0xffffffff
// 00484f14  33d2                 xor edx, edx
// 00484f16  f7f1                 div ecx
// 00484f18  83f808               cmp eax, 8
// 00484f1b  73e0                 jae 0x484efd
// 00484f1d  8d442410             lea eax, [esp + 0x10]
// 00484f21  50                   push eax
// 00484f22  8d4c2404             lea ecx, [esp + 4]
// 00484f26  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00484f2e  ff15c4e98900         call dword ptr [0x89e9c4]
// 00484f34  6888919700           push 0x979188
// 00484f39  8d4c2404             lea ecx, [esp + 4]
// 00484f3d  51                   push ecx
// 00484f3e  c744240838c98a00     mov dword ptr [esp + 8], 0x8ac938
// 00484f46  e8ff4a2900           call 0x719a4a
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??$_Allocate@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YAPAV?$shared_ptr@VInstance@RBX@@@boost@@IPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/GlobalSettings.cpp
