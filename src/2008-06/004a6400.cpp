// roc 2008-06 004a6400  unit: RBX::VHint::?$FactoryProduct::Creator  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6400
//
// 004a6400  d9442408             fld dword ptr [esp + 8]
// 004a6404  56                   push esi
// 004a6405  8b742408             mov esi, dword ptr [esp + 8]
// 004a6409  d95c240c             fstp dword ptr [esp + 0xc]
// 004a640d  6a01                 push 1
// 004a640f  6a20                 push 0x20
// 004a6411  8d442414             lea eax, [esp + 0x14]
// 004a6415  50                   push eax
// 004a6416  8bce                 mov ecx, esi
// 004a6418  e8e3f1ffff           call 0x4a5600
// 004a641d  8bc6                 mov eax, esi
// 004a641f  5e                   pop esi
// 004a6420  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
