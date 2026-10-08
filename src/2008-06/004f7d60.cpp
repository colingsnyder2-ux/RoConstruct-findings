// roc 2008-06 004f7d60  unit: RBX::ViewNew::WedgeBuilder  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f7d60
//
// 004f7d60  8b442404             mov eax, dword ptr [esp + 4]
// 004f7d64  56                   push esi
// 004f7d65  57                   push edi
// 004f7d66  50                   push eax
// 004f7d67  6a01                 push 1
// 004f7d69  6a01                 push 1
// 004f7d6b  83ec24               sub esp, 0x24
// 004f7d6e  8bf1                 mov esi, ecx
// 004f7d70  8bfc                 mov edi, esp
// 004f7d72  8964243c             mov dword ptr [esp + 0x3c], esp
// 004f7d76  56                   push esi
// 004f7d77  8bcf                 mov ecx, edi
// 004f7d79  e8b2f0ffff           call 0x4f6e30
// 004f7d7e  8bce                 mov ecx, esi
// 004f7d80  c707a8708200         mov dword ptr [edi], 0x8270a8
// 004f7d86  e8f5feffff           call 0x4f7c80
// 004f7d8b  5f                   pop edi
// 004f7d8c  5e                   pop esi
// 004f7d8d  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildBottom@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
