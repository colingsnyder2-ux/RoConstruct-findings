// roc 2007-08 004d1410  unit: RBX::View::PartChunk  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d1410
//
// 004d1410  51                   push ecx
// 004d1411  56                   push esi
// 004d1412  57                   push edi
// 004d1413  8bf9                 mov edi, ecx
// 004d1415  83bfc000000000       cmp dword ptr [edi + 0xc0], 0
// 004d141c  c744240800000000     mov dword ptr [esp + 8], 0
// 004d1424  7507                 jne 0x4d142d
// 004d1426  8b07                 mov eax, dword ptr [edi]
// 004d1428  8b5020               mov edx, dword ptr [eax + 0x20]
// 004d142b  ffd2                 call edx
// 004d142d  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d1431  c70600000000         mov dword ptr [esi], 0
// 004d1437  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 004d143d  50                   push eax
// 004d143e  8bce                 mov ecx, esi
// 004d1440  e82b3bfaff           call 0x474f70
// 004d1445  5f                   pop edi
// 004d1446  8bc6                 mov eax, esi
// 004d1448  5e                   pop esi
// 004d1449  59                   pop ecx
// 004d144a  c20400               ret 4
// library rbxgs-view/Part.cpp (function ?getMesh@PartChunk@View@RBX@@MAE?AV?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view Part.cpp
