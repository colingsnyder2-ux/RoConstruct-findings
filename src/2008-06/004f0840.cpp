// roc 2008-06 004f0840  unit: RBX::ViewNew::Texture  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0840
//
// 004f0840  51                   push ecx
// 004f0841  56                   push esi
// 004f0842  57                   push edi
// 004f0843  8d442408             lea eax, [esp + 8]
// 004f0847  50                   push eax
// 004f0848  8bf1                 mov esi, ecx
// 004f084a  e8b163ffff           call 0x4e6c00
// 004f084f  8b7c2408             mov edi, dword ptr [esp + 8]
// 004f0853  85ff                 test edi, edi
// 004f0855  7429                 je 0x4f0880
// 004f0857  8b4604               mov eax, dword ptr [esi + 4]
// 004f085a  8b4808               mov ecx, dword ptr [eax + 8]
// 004f085d  83c008               add eax, 8
// 004f0860  3931                 cmp dword ptr [ecx], esi
// 004f0862  740c                 je 0x4f0870
// 004f0864  8b00                 mov eax, dword ptr [eax]
// 004f0866  8b5004               mov edx, dword ptr [eax + 4]
// 004f0869  83c004               add eax, 4
// 004f086c  3932                 cmp dword ptr [edx], esi
// 004f086e  75f4                 jne 0x4f0864
// 004f0870  8b08                 mov ecx, dword ptr [eax]
// 004f0872  8b5104               mov edx, dword ptr [ecx + 4]
// 004f0875  51                   push ecx
// 004f0876  8910                 mov dword ptr [eax], edx
// 004f0878  e8fdfd1a00           call 0x6a067a
// 004f087d  83c404               add esp, 4
// 004f0880  c7460400000000       mov dword ptr [esi + 4], 0
// 004f0887  85ff                 test edi, edi
// 004f0889  741f                 je 0x4f08aa
// 004f088b  8d4704               lea eax, [edi + 4]
// 004f088e  50                   push eax
// 004f088f  ff15ac218000         call dword ptr [0x8021ac]
// 004f0895  85c0                 test eax, eax
// 004f0897  7511                 jne 0x4f08aa
// 004f0899  8bcf                 mov ecx, edi
// 004f089b  e8f0a4f6ff           call 0x45ad90
// 004f08a0  8b17                 mov edx, dword ptr [edi]
// 004f08a2  8b02                 mov eax, dword ptr [edx]
// 004f08a4  6a01                 push 1
// 004f08a6  8bcf                 mov ecx, edi
// 004f08a8  ffd0                 call eax
// 004f08aa  5f                   pop edi
// 004f08ab  5e                   pop esi
// 004f08ac  59                   pop ecx
// 004f08ad  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ?zeroPointer@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
