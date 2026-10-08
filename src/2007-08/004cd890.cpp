// roc 2007-08 004cd890  unit: 0RBX::View  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd890
//
// 004cd890  51                   push ecx
// 004cd891  56                   push esi
// 004cd892  57                   push edi
// 004cd893  8d442408             lea eax, [esp + 8]
// 004cd897  50                   push eax
// 004cd898  8bf1                 mov esi, ecx
// 004cd89a  e8c13f0000           call 0x4d1860
// 004cd89f  8b7c2408             mov edi, dword ptr [esp + 8]
// 004cd8a3  85ff                 test edi, edi
// 004cd8a5  7429                 je 0x4cd8d0
// 004cd8a7  8b4604               mov eax, dword ptr [esi + 4]
// 004cd8aa  8b4808               mov ecx, dword ptr [eax + 8]
// 004cd8ad  83c008               add eax, 8
// 004cd8b0  3931                 cmp dword ptr [ecx], esi
// 004cd8b2  740c                 je 0x4cd8c0
// 004cd8b4  8b00                 mov eax, dword ptr [eax]
// 004cd8b6  8b5004               mov edx, dword ptr [eax + 4]
// 004cd8b9  83c004               add eax, 4
// 004cd8bc  3932                 cmp dword ptr [edx], esi
// 004cd8be  75f4                 jne 0x4cd8b4
// 004cd8c0  8b08                 mov ecx, dword ptr [eax]
// 004cd8c2  8b5104               mov edx, dword ptr [ecx + 4]
// 004cd8c5  51                   push ecx
// 004cd8c6  8910                 mov dword ptr [eax], edx
// 004cd8c8  e895231600           call 0x62fc62
// 004cd8cd  83c404               add esp, 4
// 004cd8d0  85ff                 test edi, edi
// 004cd8d2  c7460400000000       mov dword ptr [esi + 4], 0
// 004cd8d9  741f                 je 0x4cd8fa
// 004cd8db  8d4704               lea eax, [edi + 4]
// 004cd8de  50                   push eax
// 004cd8df  ff15e8d27700         call dword ptr [0x77d2e8]
// 004cd8e5  85c0                 test eax, eax
// 004cd8e7  7511                 jne 0x4cd8fa
// 004cd8e9  8bcf                 mov ecx, edi
// 004cd8eb  e8e0a4f8ff           call 0x457dd0
// 004cd8f0  8b17                 mov edx, dword ptr [edi]
// 004cd8f2  8b02                 mov eax, dword ptr [edx]
// 004cd8f4  6a01                 push 1
// 004cd8f6  8bcf                 mov ecx, edi
// 004cd8f8  ffd0                 call eax
// 004cd8fa  5f                   pop edi
// 004cd8fb  5e                   pop esi
// 004cd8fc  59                   pop ecx
// 004cd8fd  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ?zeroPointer@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
