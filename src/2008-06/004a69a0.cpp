// roc 2008-06 004a69a0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a69a0
//
// 004a69a0  56                   push esi
// 004a69a1  8b742408             mov esi, dword ptr [esp + 8]
// 004a69a5  57                   push edi
// 004a69a6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a69aa  d907                 fld dword ptr [edi]
// 004a69ac  6a01                 push 1
// 004a69ae  6a20                 push 0x20
// 004a69b0  d95c2418             fstp dword ptr [esp + 0x18]
// 004a69b4  8d442418             lea eax, [esp + 0x18]
// 004a69b8  50                   push eax
// 004a69b9  8bce                 mov ecx, esi
// 004a69bb  e840ecffff           call 0x4a5600
// 004a69c0  d94704               fld dword ptr [edi + 4]
// 004a69c3  6a01                 push 1
// 004a69c5  d95c2414             fstp dword ptr [esp + 0x14]
// 004a69c9  6a20                 push 0x20
// 004a69cb  8d4c2418             lea ecx, [esp + 0x18]
// 004a69cf  51                   push ecx
// 004a69d0  8bce                 mov ecx, esi
// 004a69d2  e829ecffff           call 0x4a5600
// 004a69d7  d94708               fld dword ptr [edi + 8]
// 004a69da  6a01                 push 1
// 004a69dc  d95c2414             fstp dword ptr [esp + 0x14]
// 004a69e0  6a20                 push 0x20
// 004a69e2  8d542418             lea edx, [esp + 0x18]
// 004a69e6  52                   push edx
// 004a69e7  8bce                 mov ecx, esi
// 004a69e9  e812ecffff           call 0x4a5600
// 004a69ee  5f                   pop edi
// 004a69ef  8bc6                 mov eax, esi
// 004a69f1  5e                   pop esi
// 004a69f2  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
