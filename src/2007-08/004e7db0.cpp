// roc 2007-08 004e7db0  unit: TorsoBuilder  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e7db0
//
// 004e7db0  8b442404             mov eax, dword ptr [esp + 4]
// 004e7db4  56                   push esi
// 004e7db5  57                   push edi
// 004e7db6  50                   push eax
// 004e7db7  6a01                 push 1
// 004e7db9  6a01                 push 1
// 004e7dbb  83ec28               sub esp, 0x28
// 004e7dbe  8bf1                 mov esi, ecx
// 004e7dc0  8bfc                 mov edi, esp
// 004e7dc2  89642440             mov dword ptr [esp + 0x40], esp
// 004e7dc6  56                   push esi
// 004e7dc7  8bcf                 mov ecx, edi
// 004e7dc9  e812c0ffff           call 0x4e3de0
// 004e7dce  c707e0f37900         mov dword ptr [edi], 0x79f3e0
// 004e7dd4  d94624               fld dword ptr [esi + 0x24]
// 004e7dd7  8bce                 mov ecx, esi
// 004e7dd9  d95f24               fstp dword ptr [edi + 0x24]
// 004e7ddc  e81fffffff           call 0x4e7d00
// 004e7de1  5f                   pop edi
// 004e7de2  5e                   pop esi
// 004e7de3  c20400               ret 4
// library rbxgs-view/TorsoMesh.cpp (function ?buildBottom@TorsoBuilder@@MAEXW4Purpose@LevelBuilder@View@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view TorsoMesh.cpp
