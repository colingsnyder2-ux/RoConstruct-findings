// roc 2007-08 004cd770  unit: 0RBX::View  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd770
//
// 004cd770  807c240400           cmp byte ptr [esp + 4], 0
// 004cd775  56                   push esi
// 004cd776  8bf1                 mov esi, ecx
// 004cd778  c6464400             mov byte ptr [esi + 0x44], 0
// 004cd77c  7433                 je 0x4cd7b1
// 004cd77e  8b4604               mov eax, dword ptr [esi + 4]
// 004cd781  85c0                 test eax, eax
// 004cd783  742c                 je 0x4cd7b1
// 004cd785  83c004               add eax, 4
// 004cd788  50                   push eax
// 004cd789  ff15e8d27700         call dword ptr [0x77d2e8]
// 004cd78f  85c0                 test eax, eax
// 004cd791  7517                 jne 0x4cd7aa
// 004cd793  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd796  e835a6f8ff           call 0x457dd0
// 004cd79b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004cd79e  85c9                 test ecx, ecx
// 004cd7a0  7408                 je 0x4cd7aa
// 004cd7a2  8b01                 mov eax, dword ptr [ecx]
// 004cd7a4  8b10                 mov edx, dword ptr [eax]
// 004cd7a6  6a01                 push 1
// 004cd7a8  ffd2                 call edx
// 004cd7aa  c7460400000000       mov dword ptr [esi + 4], 0
// 004cd7b1  5e                   pop esi
// 004cd7b2  c20400               ret 4
// library rbxgs-view/View.cpp (function ?invalidateLighting@View@1RBX@@EAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
