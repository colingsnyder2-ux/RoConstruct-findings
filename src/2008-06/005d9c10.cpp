// roc 2008-06 005d9c10  unit: RBX::Humanoid  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9c10
//
// 005d9c10  56                   push esi
// 005d9c11  8b742408             mov esi, dword ptr [esp + 8]
// 005d9c15  6a01                 push 1
// 005d9c17  56                   push esi
// 005d9c18  e833feffff           call 0x5d9a50
// 005d9c1d  8bc6                 mov eax, esi
// 005d9c1f  5e                   pop esi
// 005d9c20  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?updateWalkDirection@Humanoid@RBX@@QAE?AVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
