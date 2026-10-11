// roc 2011-06 0095db80  unit: Ogre::RbxMeshPartAdapter  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0095db80
//
// 0095db80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0095db84  83ec0c               sub esp, 0xc
// 0095db87  85c9                 test ecx, ecx
// 0095db89  7716                 ja 0x95dba1
// 0095db8b  33c9                 xor ecx, ecx
// 0095db8d  8d14cd00000000       lea edx, [ecx*8]
// 0095db94  52                   push edx
// 0095db95  e8c4c4eaff           call 0x80a05e
// 0095db9a  83c404               add esp, 4
// 0095db9d  83c40c               add esp, 0xc
// 0095dba0  c3                   ret 
// 0095dba1  83c8ff               or eax, 0xffffffff
// 0095dba4  33d2                 xor edx, edx
// 0095dba6  f7f1                 div ecx
// 0095dba8  83f808               cmp eax, 8
// 0095dbab  73e0                 jae 0x95db8d
// 0095dbad  8d442410             lea eax, [esp + 0x10]
// 0095dbb1  50                   push eax
// 0095dbb2  8d4c2404             lea ecx, [esp + 4]
// 0095dbb6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0095dbbe  ff156c0aa400         call dword ptr [0xa40a6c]
// 0095dbc4  68c472b800           push 0xb872c4
// 0095dbc9  8d4c2404             lea ecx, [esp + 4]
// 0095dbcd  51                   push ecx
// 0095dbce  c7442408b4b5a500     mov dword ptr [esp + 8], 0xa5b5b4
// 0095dbd6  e8d1d4eaff           call 0x80b0ac
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??$_Allocate@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YAPAV?$shared_ptr@VInstance@RBX@@@boost@@IPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
