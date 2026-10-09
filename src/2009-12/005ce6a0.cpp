// roc 2009-12 005ce6a0  unit: RBX::PartChunk  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ce6a0
//
// 005ce6a0  51                   push ecx
// 005ce6a1  56                   push esi
// 005ce6a2  57                   push edi
// 005ce6a3  8d442408             lea eax, [esp + 8]
// 005ce6a7  50                   push eax
// 005ce6a8  8bf1                 mov esi, ecx
// 005ce6aa  e841e2e7ff           call 0x44c8f0
// 005ce6af  8b7c2408             mov edi, dword ptr [esp + 8]
// 005ce6b3  85ff                 test edi, edi
// 005ce6b5  7429                 je 0x5ce6e0
// 005ce6b7  8b4604               mov eax, dword ptr [esi + 4]
// 005ce6ba  8b4808               mov ecx, dword ptr [eax + 8]
// 005ce6bd  83c008               add eax, 8
// 005ce6c0  3931                 cmp dword ptr [ecx], esi
// 005ce6c2  740c                 je 0x5ce6d0
// 005ce6c4  8b00                 mov eax, dword ptr [eax]
// 005ce6c6  8b5004               mov edx, dword ptr [eax + 4]
// 005ce6c9  83c004               add eax, 4
// 005ce6cc  3932                 cmp dword ptr [edx], esi
// 005ce6ce  75f4                 jne 0x5ce6c4
// 005ce6d0  8b08                 mov ecx, dword ptr [eax]
// 005ce6d2  8b5104               mov edx, dword ptr [ecx + 4]
// 005ce6d5  51                   push ecx
// 005ce6d6  8910                 mov dword ptr [eax], edx
// 005ce6d8  e87d512200           call 0x7f385a
// 005ce6dd  83c404               add esp, 4
// 005ce6e0  c7460400000000       mov dword ptr [esi + 4], 0
// 005ce6e7  85ff                 test edi, edi
// 005ce6e9  741f                 je 0x5ce70a
// 005ce6eb  8d4704               lea eax, [edi + 4]
// 005ce6ee  50                   push eax
// 005ce6ef  ff1508b29800         call dword ptr [0x98b208]
// 005ce6f5  85c0                 test eax, eax
// 005ce6f7  7511                 jne 0x5ce70a
// 005ce6f9  8bcf                 mov ecx, edi
// 005ce6fb  e820c9e7ff           call 0x44b020
// 005ce700  8b17                 mov edx, dword ptr [edi]
// 005ce702  8b02                 mov eax, dword ptr [edx]
// 005ce704  6a01                 push 1
// 005ce706  8bcf                 mov ecx, edi
// 005ce708  ffd0                 call eax
// 005ce70a  5f                   pop edi
// 005ce70b  5e                   pop esi
// 005ce70c  59                   pop ecx
// 005ce70d  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ?zeroPointer@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
