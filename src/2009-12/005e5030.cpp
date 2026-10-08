// roc 2009-12 005e5030  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e5030
//
// 005e5030  8b442404             mov eax, dword ptr [esp + 4]
// 005e5034  56                   push esi
// 005e5035  50                   push eax
// 005e5036  8bf1                 mov esi, ecx
// 005e5038  e853feffff           call 0x5e4e90
// 005e503d  c70634189c00         mov dword ptr [esi], 0x9c1834
// 005e5043  8bc6                 mov eax, esi
// 005e5045  5e                   pop esi
// 005e5046  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
