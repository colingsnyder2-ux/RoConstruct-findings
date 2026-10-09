// roc 2009-06 006b8740  unit: RBX::UniversalTool  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8740
//
// 006b8740  83ec10               sub esp, 0x10
// 006b8743  56                   push esi
// 006b8744  8bf1                 mov esi, ecx
// 006b8746  837e0800             cmp dword ptr [esi + 8], 0
// 006b874a  752c                 jne 0x6b8778
// 006b874c  8b06                 mov eax, dword ptr [esi]
// 006b874e  8b10                 mov edx, dword ptr [eax]
// 006b8750  6a00                 push 0
// 006b8752  c746081e000000       mov dword ptr [esi + 8], 0x1e
// 006b8759  ffd2                 call edx
// 006b875b  8b4604               mov eax, dword ptr [esi + 4]
// 006b875e  85c0                 test eax, eax
// 006b8760  7416                 je 0x6b8778
// 006b8762  8d4c2404             lea ecx, [esp + 4]
// 006b8766  51                   push ecx
// 006b8767  8d54240c             lea edx, [esp + 0xc]
// 006b876b  52                   push edx
// 006b876c  8d4804               lea ecx, [eax + 4]
// 006b876f  8974240c             mov dword ptr [esp + 0xc], esi
// 006b8773  e8b8e9e2ff           call 0x4e7130
// 006b8778  5e                   pop esi
// 006b8779  83c410               add esp, 0x10
// 006b877c  c3                   ret 
// library openrbx-client/App\v8world\IMoving.cpp (function ?notifyMoved@IMoving@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
