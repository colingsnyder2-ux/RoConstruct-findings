// roc 2008-06 0067c5e0  unit: Ogre::RbxEntity  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067c5e0
//
// 0067c5e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067c5e4  83ec0c               sub esp, 0xc
// 0067c5e7  85c9                 test ecx, ecx
// 0067c5e9  7712                 ja 0x67c5fd
// 0067c5eb  33c9                 xor ecx, ecx
// 0067c5ed  c1e104               shl ecx, 4
// 0067c5f0  51                   push ecx
// 0067c5f1  e82a430200           call 0x6a0920
// 0067c5f6  83c404               add esp, 4
// 0067c5f9  83c40c               add esp, 0xc
// 0067c5fc  c3                   ret 
// 0067c5fd  83c8ff               or eax, 0xffffffff
// 0067c600  33d2                 xor edx, edx
// 0067c602  f7f1                 div ecx
// 0067c604  83f810               cmp eax, 0x10
// 0067c607  73e4                 jae 0x67c5ed
// 0067c609  8d442410             lea eax, [esp + 0x10]
// 0067c60d  50                   push eax
// 0067c60e  8d4c2404             lea ecx, [esp + 4]
// 0067c612  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0067c61a  ff15a4288000         call dword ptr [0x8028a4]
// 0067c620  68d8078d00           push 0x8d07d8
// 0067c625  8d4c2404             lea ecx, [esp + 4]
// 0067c629  51                   push ecx
// 0067c62a  c744240804b18000     mov dword ptr [esp + 8], 0x80b104
// 0067c632  e8554f0200           call 0x6a158c
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$_Allocate@UIDREFItem@MergeBinder@RBX@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@IPAU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
