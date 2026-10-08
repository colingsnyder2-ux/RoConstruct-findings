// roc 2007-03 00498680  unit: seg_00490000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00498680
//
// 00498680  56                   push esi
// 00498681  8b742408             mov esi, dword ptr [esp + 8]
// 00498685  57                   push edi
// 00498686  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0049868a  d907                 fld dword ptr [edi]
// 0049868c  6a01                 push 1
// 0049868e  6a20                 push 0x20
// 00498690  d95c2418             fstp dword ptr [esp + 0x18]
// 00498694  8d442418             lea eax, [esp + 0x18]
// 00498698  50                   push eax
// 00498699  8bce                 mov ecx, esi
// 0049869b  e810f7ffff           call 0x497db0
// 004986a0  d94704               fld dword ptr [edi + 4]
// 004986a3  6a01                 push 1
// 004986a5  d95c2414             fstp dword ptr [esp + 0x14]
// 004986a9  6a20                 push 0x20
// 004986ab  8d4c2418             lea ecx, [esp + 0x18]
// 004986af  51                   push ecx
// 004986b0  8bce                 mov ecx, esi
// 004986b2  e8f9f6ffff           call 0x497db0
// 004986b7  d94708               fld dword ptr [edi + 8]
// 004986ba  6a01                 push 1
// 004986bc  d95c2414             fstp dword ptr [esp + 0x14]
// 004986c0  6a20                 push 0x20
// 004986c2  8d542418             lea edx, [esp + 0x18]
// 004986c6  52                   push edx
// 004986c7  8bce                 mov ecx, esi
// 004986c9  e8e2f6ffff           call 0x497db0
// 004986ce  5f                   pop edi
// 004986cf  8bc6                 mov eax, esi
// 004986d1  5e                   pop esi
// 004986d2  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??6Network@RBX@@YAAAVBitStream@RakNet@@AAV23@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
