// roc 2011-06 00794910  unit: seg_00790000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00794910
//
// 00794910  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00794914  83ec0c               sub esp, 0xc
// 00794917  6a02                 push 2
// 00794919  8d442404             lea eax, [esp + 4]
// 0079491d  50                   push eax
// 0079491e  e8bdb7daff           call 0x5400e0
// 00794923  50                   push eax
// 00794924  e867ffffff           call 0x794890
// 00794929  83c410               add esp, 0x10
// 0079492c  c3                   ret 
// library rbxgs/util\NormalId.cpp (function ?Matrix3ToNormalId@RBX@@YA?AW4NormalId@1@ABVMatrix3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/NormalId.cpp
