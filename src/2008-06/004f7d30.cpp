// roc 2008-06 004f7d30  unit: RBX::ViewNew::WedgeBuilder  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f7d30
//
// 004f7d30  8b442404             mov eax, dword ptr [esp + 4]
// 004f7d34  56                   push esi
// 004f7d35  57                   push edi
// 004f7d36  50                   push eax
// 004f7d37  6a01                 push 1
// 004f7d39  6a01                 push 1
// 004f7d3b  83ec24               sub esp, 0x24
// 004f7d3e  8bf1                 mov esi, ecx
// 004f7d40  8bfc                 mov edi, esp
// 004f7d42  8964243c             mov dword ptr [esp + 0x3c], esp
// 004f7d46  56                   push esi
// 004f7d47  8bcf                 mov ecx, edi
// 004f7d49  e8e2f0ffff           call 0x4f6e30
// 004f7d4e  8bce                 mov ecx, esi
// 004f7d50  c707a8708200         mov dword ptr [edi], 0x8270a8
// 004f7d56  e875feffff           call 0x4f7bd0
// 004f7d5b  5f                   pop edi
// 004f7d5c  5e                   pop esi
// 004f7d5d  c20400               ret 4
// library rbxgs-view/WedgeMesh.cpp (function ?buildBottom@WedgeBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
