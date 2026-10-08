// roc 2007-03 005eb770  unit: seg_005e0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005eb770
//
// 005eb770  56                   push esi
// 005eb771  8bf1                 mov esi, ecx
// 005eb773  e848fcffff           call 0x5eb3c0
// 005eb778  8b442408             mov eax, dword ptr [esp + 8]
// 005eb77c  50                   push eax
// 005eb77d  8bce                 mov ecx, esi
// 005eb77f  c70614fd7b00         mov dword ptr [esi], 0x7bfd14
// 005eb785  e8a6fcffff           call 0x5eb430
// 005eb78a  8bc6                 mov eax, esi
// 005eb78c  5e                   pop esi
// 005eb78d  c20400               ret 4
// library rbxgs/v8world\MutilJoint.cpp (function ??0MultiJoint@RBX@@IAE@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/MutilJoint.cpp
