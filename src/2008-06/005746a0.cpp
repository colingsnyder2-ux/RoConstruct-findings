// roc 2008-06 005746a0  unit: ChatEnter  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005746a0
//
// 005746a0  53                   push ebx
// 005746a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005746a5  56                   push esi
// 005746a6  8bf1                 mov esi, ecx
// 005746a8  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005746ae  57                   push edi
// 005746af  8dbe34010000         lea edi, [esi + 0x134]
// 005746b5  390b                 cmp dword ptr [ebx], ecx
// 005746b7  7512                 jne 0x5746cb
// 005746b9  85c9                 test ecx, ecx
// 005746bb  7407                 je 0x5746c4
// 005746bd  8b01                 mov eax, dword ptr [ecx]
// 005746bf  8b5040               mov edx, dword ptr [eax + 0x40]
// 005746c2  ffd2                 call edx
// 005746c4  8bcf                 mov ecx, edi
// 005746c6  e8b527eeff           call 0x456e80
// 005746cb  53                   push ebx
// 005746cc  8bce                 mov ecx, esi
// 005746ce  e8bd67feff           call 0x55ae90
// 005746d3  5f                   pop edi
// 005746d4  5e                   pop esi
// 005746d5  5b                   pop ebx
// 005746d6  c20400               ret 4
// library openrbx-client/App\gui\GUI.cpp (function ?onDescendentRemoving@GuiItem@RBX@@EAEXABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/gui/GUI.cpp
