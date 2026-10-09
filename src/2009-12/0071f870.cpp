// roc 2009-12 0071f870  unit: RBX::VInstance::?$NonFactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071f870
//
// 0071f870  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0071f874  83ec0c               sub esp, 0xc
// 0071f877  6a02                 push 2
// 0071f879  8d442404             lea eax, [esp + 4]
// 0071f87d  50                   push eax
// 0071f87e  e80d41edff           call 0x5f3990
// 0071f883  50                   push eax
// 0071f884  e867ffffff           call 0x71f7f0
// 0071f889  83c410               add esp, 0x10
// 0071f88c  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?Matrix3ToNormalId@RBX@@YA?AW4NormalId@1@ABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
