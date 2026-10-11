// roc 2010-06 008fe5b0  unit: Ogre::RbxSceneUpdater::?1??debugCheckFrame::NodeVisiter  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008fe5b0
//
// 008fe5b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008fe5b4  83ec0c               sub esp, 0xc
// 008fe5b7  85c9                 test ecx, ecx
// 008fe5b9  7716                 ja 0x8fe5d1
// 008fe5bb  33c9                 xor ecx, ecx
// 008fe5bd  8d14cd00000000       lea edx, [ecx*8]
// 008fe5c4  52                   push edx
// 008fe5c5  e8d693eaff           call 0x7a79a0
// 008fe5ca  83c404               add esp, 4
// 008fe5cd  83c40c               add esp, 0xc
// 008fe5d0  c3                   ret 
// 008fe5d1  83c8ff               or eax, 0xffffffff
// 008fe5d4  33d2                 xor edx, edx
// 008fe5d6  f7f1                 div ecx
// 008fe5d8  83f808               cmp eax, 8
// 008fe5db  73e0                 jae 0x8fe5bd
// 008fe5dd  8d442410             lea eax, [esp + 0x10]
// 008fe5e1  50                   push eax
// 008fe5e2  8d4c2404             lea ecx, [esp + 4]
// 008fe5e6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008fe5ee  ff1524a99e00         call dword ptr [0x9ea924]
// 008fe5f4  68b41ab000           push 0xb01ab4
// 008fe5f9  8d4c2404             lea ecx, [esp + 4]
// 008fe5fd  51                   push ecx
// 008fe5fe  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 008fe606  e8a7a3eaff           call 0x7a89b2
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??$_Allocate@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YAPAV?$shared_ptr@VInstance@RBX@@@boost@@IPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/GlobalSettings.cpp
