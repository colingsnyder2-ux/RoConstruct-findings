// roc 2010-06 00903ed0  unit: Ogre::RbxCullableSceneNode  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00903ed0
//
// 00903ed0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00903ed4  83ec0c               sub esp, 0xc
// 00903ed7  85c9                 test ecx, ecx
// 00903ed9  7712                 ja 0x903eed
// 00903edb  33c9                 xor ecx, ecx
// 00903edd  c1e104               shl ecx, 4
// 00903ee0  51                   push ecx
// 00903ee1  e8ba3aeaff           call 0x7a79a0
// 00903ee6  83c404               add esp, 4
// 00903ee9  83c40c               add esp, 0xc
// 00903eec  c3                   ret 
// 00903eed  83c8ff               or eax, 0xffffffff
// 00903ef0  33d2                 xor edx, edx
// 00903ef2  f7f1                 div ecx
// 00903ef4  83f810               cmp eax, 0x10
// 00903ef7  73e4                 jae 0x903edd
// 00903ef9  8d442410             lea eax, [esp + 0x10]
// 00903efd  50                   push eax
// 00903efe  8d4c2404             lea ecx, [esp + 4]
// 00903f02  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00903f0a  ff1524a99e00         call dword ptr [0x9ea924]
// 00903f10  68b41ab000           push 0xb01ab4
// 00903f15  8d4c2404             lea ecx, [esp + 4]
// 00903f19  51                   push ecx
// 00903f1a  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 00903f22  e88b4aeaff           call 0x7a89b2
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??$_Allocate@UIDREFItem@MergeBinder@RBX@@@std@@YAPAUIDREFItem@MergeBinder@RBX@@IPAU123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
