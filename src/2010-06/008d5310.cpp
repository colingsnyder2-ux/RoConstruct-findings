// roc 2010-06 008d5310  unit: Ogre::VertexStreamer  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d5310
//
// 008d5310  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008d5314  83ec0c               sub esp, 0xc
// 008d5317  85c9                 test ecx, ecx
// 008d5319  7716                 ja 0x8d5331
// 008d531b  33c9                 xor ecx, ecx
// 008d531d  8d148d00000000       lea edx, [ecx*4]
// 008d5324  52                   push edx
// 008d5325  e87626edff           call 0x7a79a0
// 008d532a  83c404               add esp, 4
// 008d532d  83c40c               add esp, 0xc
// 008d5330  c3                   ret 
// 008d5331  83c8ff               or eax, 0xffffffff
// 008d5334  33d2                 xor edx, edx
// 008d5336  f7f1                 div ecx
// 008d5338  83f804               cmp eax, 4
// 008d533b  73e0                 jae 0x8d531d
// 008d533d  8d442410             lea eax, [esp + 0x10]
// 008d5341  50                   push eax
// 008d5342  8d4c2404             lea ecx, [esp + 4]
// 008d5346  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008d534e  ff1524a99e00         call dword ptr [0x9ea924]
// 008d5354  68b41ab000           push 0xb01ab4
// 008d5359  8d4c2404             lea ecx, [esp + 4]
// 008d535d  51                   push ecx
// 008d535e  c74424082000a000     mov dword ptr [esp + 8], 0xa00020
// 008d5366  e84736edff           call 0x7a89b2
// library openrbx-client/App\reflection\type.cpp (function ??$_Allocate@V_Aux_cont@std@@@std@@YAPAV_Aux_cont@0@IPAV10@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/type.cpp
