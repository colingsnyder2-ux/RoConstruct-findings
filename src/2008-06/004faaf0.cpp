// roc 2008-06 004faaf0  unit: RBX::ViewNew::TorsoBuilder  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004faaf0
//
// 004faaf0  8b442404             mov eax, dword ptr [esp + 4]
// 004faaf4  56                   push esi
// 004faaf5  57                   push edi
// 004faaf6  50                   push eax
// 004faaf7  6a01                 push 1
// 004faaf9  6a01                 push 1
// 004faafb  83ec28               sub esp, 0x28
// 004faafe  8bf1                 mov esi, ecx
// 004fab00  8bfc                 mov edi, esp
// 004fab02  89642440             mov dword ptr [esp + 0x40], esp
// 004fab06  56                   push esi
// 004fab07  8bcf                 mov ecx, edi
// 004fab09  e822c3ffff           call 0x4f6e30
// 004fab0e  c70700718200         mov dword ptr [edi], 0x827100
// 004fab14  d94624               fld dword ptr [esi + 0x24]
// 004fab17  8bce                 mov ecx, esi
// 004fab19  d95f24               fstp dword ptr [edi + 0x24]
// 004fab1c  e80fffffff           call 0x4faa30
// 004fab21  5f                   pop edi
// 004fab22  5e                   pop esi
// 004fab23  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildBottom@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
