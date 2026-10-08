// roc 2007-08 004e4e40  unit: WedgeBuilder  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e4e40
//
// 004e4e40  8b442404             mov eax, dword ptr [esp + 4]
// 004e4e44  56                   push esi
// 004e4e45  57                   push edi
// 004e4e46  50                   push eax
// 004e4e47  6a01                 push 1
// 004e4e49  6a01                 push 1
// 004e4e4b  83ec24               sub esp, 0x24
// 004e4e4e  8bf1                 mov esi, ecx
// 004e4e50  8bfc                 mov edi, esp
// 004e4e52  8964243c             mov dword ptr [esp + 0x3c], esp
// 004e4e56  56                   push esi
// 004e4e57  8bcf                 mov ecx, edi
// 004e4e59  e882efffff           call 0x4e3de0
// 004e4e5e  8bce                 mov ecx, esi
// 004e4e60  c70788f37900         mov dword ptr [edi], 0x79f388
// 004e4e66  e875feffff           call 0x4e4ce0
// 004e4e6b  5f                   pop edi
// 004e4e6c  5e                   pop esi
// 004e4e6d  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildBottom@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
