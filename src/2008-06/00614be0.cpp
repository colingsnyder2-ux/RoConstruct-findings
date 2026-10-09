// roc 2008-06 00614be0  unit: RBX::RevoluteLink  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614be0
//
// 00614be0  83ec10               sub esp, 0x10
// 00614be3  56                   push esi
// 00614be4  8bf1                 mov esi, ecx
// 00614be6  837e0800             cmp dword ptr [esi + 8], 0
// 00614bea  752c                 jne 0x614c18
// 00614bec  8b06                 mov eax, dword ptr [esi]
// 00614bee  8b10                 mov edx, dword ptr [eax]
// 00614bf0  6a00                 push 0
// 00614bf2  c746081e000000       mov dword ptr [esi + 8], 0x1e
// 00614bf9  ffd2                 call edx
// 00614bfb  8b4604               mov eax, dword ptr [esi + 4]
// 00614bfe  85c0                 test eax, eax
// 00614c00  7416                 je 0x614c18
// 00614c02  8d4c2404             lea ecx, [esp + 4]
// 00614c06  51                   push ecx
// 00614c07  8d54240c             lea edx, [esp + 0xc]
// 00614c0b  52                   push edx
// 00614c0c  8d4804               lea ecx, [eax + 4]
// 00614c0f  8974240c             mov dword ptr [esp + 0xc], esi
// 00614c13  e82840fdff           call 0x5e8c40
// 00614c18  5e                   pop esi
// 00614c19  83c410               add esp, 0x10
// 00614c1c  c3                   ret 
// library openrbx-client/App\v8world\IMoving.cpp (function ?notifyMoved@IMoving@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IMoving.cpp
