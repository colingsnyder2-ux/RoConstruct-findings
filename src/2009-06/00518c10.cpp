// roc 2009-06 00518c10  unit: RBX::PartChunk  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00518c10
//
// 00518c10  51                   push ecx
// 00518c11  56                   push esi
// 00518c12  57                   push edi
// 00518c13  8d442408             lea eax, [esp + 8]
// 00518c17  50                   push eax
// 00518c18  8bf1                 mov esi, ecx
// 00518c1a  e8c1daf2ff           call 0x4466e0
// 00518c1f  8b7c2408             mov edi, dword ptr [esp + 8]
// 00518c23  85ff                 test edi, edi
// 00518c25  7429                 je 0x518c50
// 00518c27  8b4604               mov eax, dword ptr [esi + 4]
// 00518c2a  8b4808               mov ecx, dword ptr [eax + 8]
// 00518c2d  83c008               add eax, 8
// 00518c30  3931                 cmp dword ptr [ecx], esi
// 00518c32  740c                 je 0x518c40
// 00518c34  8b00                 mov eax, dword ptr [eax]
// 00518c36  8b5004               mov edx, dword ptr [eax + 4]
// 00518c39  83c004               add eax, 4
// 00518c3c  3932                 cmp dword ptr [edx], esi
// 00518c3e  75f4                 jne 0x518c34
// 00518c40  8b08                 mov ecx, dword ptr [eax]
// 00518c42  8b5104               mov edx, dword ptr [ecx + 4]
// 00518c45  51                   push ecx
// 00518c46  8910                 mov dword ptr [eax], edx
// 00518c48  e8e5fd1f00           call 0x718a32
// 00518c4d  83c404               add esp, 4
// 00518c50  c7460400000000       mov dword ptr [esi + 4], 0
// 00518c57  85ff                 test edi, edi
// 00518c59  741f                 je 0x518c7a
// 00518c5b  8d4704               lea eax, [edi + 4]
// 00518c5e  50                   push eax
// 00518c5f  ff15a4e18900         call dword ptr [0x89e1a4]
// 00518c65  85c0                 test eax, eax
// 00518c67  7511                 jne 0x518c7a
// 00518c69  8bcf                 mov ecx, edi
// 00518c6b  e810c1f2ff           call 0x444d80
// 00518c70  8b17                 mov edx, dword ptr [edi]
// 00518c72  8b02                 mov eax, dword ptr [edx]
// 00518c74  6a01                 push 1
// 00518c76  8bcf                 mov ecx, edi
// 00518c78  ffd0                 call eax
// 00518c7a  5f                   pop edi
// 00518c7b  5e                   pop esi
// 00518c7c  59                   pop ecx
// 00518c7d  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ?zeroPointer@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
