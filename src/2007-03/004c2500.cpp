// roc 2007-03 004c2500  unit: seg_004c0000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c2500
//
// 004c2500  51                   push ecx
// 004c2501  56                   push esi
// 004c2502  57                   push edi
// 004c2503  8d442408             lea eax, [esp + 8]
// 004c2507  50                   push eax
// 004c2508  8bf1                 mov esi, ecx
// 004c250a  e861feffff           call 0x4c2370
// 004c250f  8b7c2408             mov edi, dword ptr [esp + 8]
// 004c2513  85ff                 test edi, edi
// 004c2515  7429                 je 0x4c2540
// 004c2517  8b4604               mov eax, dword ptr [esi + 4]
// 004c251a  8b4808               mov ecx, dword ptr [eax + 8]
// 004c251d  83c008               add eax, 8
// 004c2520  3931                 cmp dword ptr [ecx], esi
// 004c2522  740c                 je 0x4c2530
// 004c2524  8b00                 mov eax, dword ptr [eax]
// 004c2526  8b5004               mov edx, dword ptr [eax + 4]
// 004c2529  83c004               add eax, 4
// 004c252c  3932                 cmp dword ptr [edx], esi
// 004c252e  75f4                 jne 0x4c2524
// 004c2530  8b08                 mov ecx, dword ptr [eax]
// 004c2532  8b5104               mov edx, dword ptr [ecx + 4]
// 004c2535  51                   push ecx
// 004c2536  8910                 mov dword ptr [eax], edx
// 004c2538  e8b3bb1500           call 0x61e0f0
// 004c253d  83c404               add esp, 4
// 004c2540  85ff                 test edi, edi
// 004c2542  c7460400000000       mov dword ptr [esi + 4], 0
// 004c2549  741f                 je 0x4c256a
// 004c254b  8d4704               lea eax, [edi + 4]
// 004c254e  50                   push eax
// 004c254f  ff15a8d27700         call dword ptr [0x77d2a8]
// 004c2555  85c0                 test eax, eax
// 004c2557  7511                 jne 0x4c256a
// 004c2559  8bcf                 mov ecx, edi
// 004c255b  e8600efaff           call 0x4633c0
// 004c2560  8b17                 mov edx, dword ptr [edi]
// 004c2562  8b02                 mov eax, dword ptr [edx]
// 004c2564  6a01                 push 1
// 004c2566  8bcf                 mov ecx, edi
// 004c2568  ffd0                 call eax
// 004c256a  5f                   pop edi
// 004c256b  5e                   pop esi
// 004c256c  59                   pop ecx
// 004c256d  c3                   ret 
// library rbxgs-view/MaterialFactory.cpp (function ?zeroPointer@?$WeakReferenceCountedPointer@VMaterial@Render@RBX@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view MaterialFactory.cpp
