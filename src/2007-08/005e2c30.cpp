// roc 2007-08 005e2c30  unit: seg_005e0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e2c30
//
// 005e2c30  83ec10               sub esp, 0x10
// 005e2c33  56                   push esi
// 005e2c34  8bf1                 mov esi, ecx
// 005e2c36  837e0800             cmp dword ptr [esi + 8], 0
// 005e2c3a  752c                 jne 0x5e2c68
// 005e2c3c  8b06                 mov eax, dword ptr [esi]
// 005e2c3e  8b10                 mov edx, dword ptr [eax]
// 005e2c40  6a00                 push 0
// 005e2c42  c746081e000000       mov dword ptr [esi + 8], 0x1e
// 005e2c49  ffd2                 call edx
// 005e2c4b  8b4604               mov eax, dword ptr [esi + 4]
// 005e2c4e  85c0                 test eax, eax
// 005e2c50  7416                 je 0x5e2c68
// 005e2c52  8d4c2404             lea ecx, [esp + 4]
// 005e2c56  51                   push ecx
// 005e2c57  8d54240c             lea edx, [esp + 0xc]
// 005e2c5b  52                   push edx
// 005e2c5c  8d4804               lea ecx, [eax + 4]
// 005e2c5f  8974240c             mov dword ptr [esp + 0xc], esi
// 005e2c63  e848fdffff           call 0x5e29b0
// 005e2c68  5e                   pop esi
// 005e2c69  83c410               add esp, 0x10
// 005e2c6c  c3                   ret 
// library openrbx-client/App\v8world\IMoving.cpp (function ?notifyMoved@IMoving@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
