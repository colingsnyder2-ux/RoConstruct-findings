// roc 2007-03 00498b30  unit: seg_00490000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00498b30
//
// 00498b30  56                   push esi
// 00498b31  8b742408             mov esi, dword ptr [esp + 8]
// 00498b35  57                   push edi
// 00498b36  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00498b3a  6a01                 push 1
// 00498b3c  6a20                 push 0x20
// 00498b3e  57                   push edi
// 00498b3f  8bce                 mov ecx, esi
// 00498b41  e82aeeffff           call 0x497970
// 00498b46  6a01                 push 1
// 00498b48  6a20                 push 0x20
// 00498b4a  8d4704               lea eax, [edi + 4]
// 00498b4d  50                   push eax
// 00498b4e  8bce                 mov ecx, esi
// 00498b50  e81beeffff           call 0x497970
// 00498b55  6a01                 push 1
// 00498b57  6a20                 push 0x20
// 00498b59  83c708               add edi, 8
// 00498b5c  57                   push edi
// 00498b5d  8bce                 mov ecx, esi
// 00498b5f  e80ceeffff           call 0x497970
// 00498b64  5f                   pop edi
// 00498b65  8bc6                 mov eax, esi
// 00498b67  5e                   pop esi
// 00498b68  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ??5Network@RBX@@YAAAVBitStream@RakNet@@AAV23@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
