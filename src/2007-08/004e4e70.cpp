// roc 2007-08 004e4e70  unit: WedgeBuilder  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e4e70
//
// 004e4e70  8b442404             mov eax, dword ptr [esp + 4]
// 004e4e74  56                   push esi
// 004e4e75  57                   push edi
// 004e4e76  50                   push eax
// 004e4e77  6a01                 push 1
// 004e4e79  6a01                 push 1
// 004e4e7b  83ec24               sub esp, 0x24
// 004e4e7e  8bf1                 mov esi, ecx
// 004e4e80  8bfc                 mov edi, esp
// 004e4e82  8964243c             mov dword ptr [esp + 0x3c], esp
// 004e4e86  56                   push esi
// 004e4e87  8bcf                 mov ecx, edi
// 004e4e89  e852efffff           call 0x4e3de0
// 004e4e8e  8bce                 mov ecx, esi
// 004e4e90  c70788f37900         mov dword ptr [edi], 0x79f388
// 004e4e96  e8f5feffff           call 0x4e4d90
// 004e4e9b  5f                   pop edi
// 004e4e9c  5e                   pop esi
// 004e4e9d  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildBottom@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
