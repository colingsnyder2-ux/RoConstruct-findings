// roc 2009-06 00682eb0  unit: RBX::Sky  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00682eb0
//
// 00682eb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00682eb4  83ec0c               sub esp, 0xc
// 00682eb7  6a02                 push 2
// 00682eb9  8d442404             lea eax, [esp + 4]
// 00682ebd  50                   push eax
// 00682ebe  e8ed4cefff           call 0x577bb0
// 00682ec3  50                   push eax
// 00682ec4  e867ffffff           call 0x682e30
// 00682ec9  83c410               add esp, 0x10
// 00682ecc  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?Matrix3ToNormalId@RBX@@YA?AW4NormalId@1@ABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
