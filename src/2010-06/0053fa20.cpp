// roc 2010-06 0053fa20  unit: RBX::SceneManager  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053fa20
//
// 0053fa20  51                   push ecx
// 0053fa21  56                   push esi
// 0053fa22  57                   push edi
// 0053fa23  8d442408             lea eax, [esp + 8]
// 0053fa27  50                   push eax
// 0053fa28  8bf1                 mov esi, ecx
// 0053fa2a  e871ffffff           call 0x53f9a0
// 0053fa2f  8b7c2408             mov edi, dword ptr [esp + 8]
// 0053fa33  85ff                 test edi, edi
// 0053fa35  7429                 je 0x53fa60
// 0053fa37  8b4604               mov eax, dword ptr [esi + 4]
// 0053fa3a  8b4808               mov ecx, dword ptr [eax + 8]
// 0053fa3d  83c008               add eax, 8
// 0053fa40  3931                 cmp dword ptr [ecx], esi
// 0053fa42  740c                 je 0x53fa50
// 0053fa44  8b00                 mov eax, dword ptr [eax]
// 0053fa46  8b5004               mov edx, dword ptr [eax + 4]
// 0053fa49  83c004               add eax, 4
// 0053fa4c  3932                 cmp dword ptr [edx], esi
// 0053fa4e  75f4                 jne 0x53fa44
// 0053fa50  8b08                 mov ecx, dword ptr [eax]
// 0053fa52  8b5104               mov edx, dword ptr [ecx + 4]
// 0053fa55  51                   push ecx
// 0053fa56  8910                 mov dword ptr [eax], edx
// 0053fa58  e83d7f2600           call 0x7a799a
// 0053fa5d  83c404               add esp, 4
// 0053fa60  c7460400000000       mov dword ptr [esi + 4], 0
// 0053fa67  85ff                 test edi, edi
// 0053fa69  741f                 je 0x53fa8a
// 0053fa6b  8d4704               lea eax, [edi + 4]
// 0053fa6e  50                   push eax
// 0053fa6f  ff157ca39e00         call dword ptr [0x9ea37c]
// 0053fa75  85c0                 test eax, eax
// 0053fa77  7511                 jne 0x53fa8a
// 0053fa79  8bcf                 mov ecx, edi
// 0053fa7b  e8a040f4ff           call 0x483b20
// 0053fa80  8b17                 mov edx, dword ptr [edi]
// 0053fa82  8b02                 mov eax, dword ptr [edx]
// 0053fa84  6a01                 push 1
// 0053fa86  8bcf                 mov ecx, edi
// 0053fa88  ffd0                 call eax
// 0053fa8a  5f                   pop edi
// 0053fa8b  5e                   pop esi
// 0053fa8c  59                   pop ecx
// 0053fa8d  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ?zeroPointer@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
