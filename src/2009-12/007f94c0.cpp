// roc 2009-12 007f94c0  unit: CPatchedControlComboBox  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f94c0
//
// 007f94c0  56                   push esi
// 007f94c1  8bf1                 mov esi, ecx
// 007f94c3  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007f94c9  85c0                 test eax, eax
// 007f94cb  740a                 je 0x7f94d7
// 007f94cd  83785400             cmp dword ptr [eax + 0x54], 0
// 007f94d1  0f85d4000000         jne 0x7f95ab
// 007f94d7  e8d4c9ffff           call 0x7f5eb0
// 007f94dc  85c0                 test eax, eax
// 007f94de  743d                 je 0x7f951d
// 007f94e0  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f94e6  6a00                 push 0
// 007f94e8  6aff                 push -1
// 007f94ea  e8b1d00000           call 0x8065a0
// 007f94ef  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f94f5  8b01                 mov eax, dword ptr [ecx]
// 007f94f7  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007f94fd  6a00                 push 0
// 007f94ff  6aff                 push -1
// 007f9501  ffd2                 call edx
// 007f9503  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9507  8b06                 mov eax, dword ptr [esi]
// 007f9509  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f950d  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 007f9513  51                   push ecx
// 007f9514  52                   push edx
// 007f9515  8bce                 mov ecx, esi
// 007f9517  ffd0                 call eax
// 007f9519  5e                   pop esi
// 007f951a  c20c00               ret 0xc
// 007f951d  57                   push edi
// 007f951e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007f9522  85ff                 test edi, edi
// 007f9524  7448                 je 0x7f956e
// 007f9526  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007f952c  83f8ff               cmp eax, -1
// 007f952f  750f                 jne 0x7f9540
// 007f9531  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007f9537  85c9                 test ecx, ecx
// 007f9539  7405                 je 0x7f9540
// 007f953b  e870d0ffff           call 0x7f65b0
// 007f9540  85c0                 test eax, eax
// 007f9542  742a                 je 0x7f956e
// 007f9544  8b16                 mov edx, dword ptr [esi]
// 007f9546  8b4274               mov eax, dword ptr [edx + 0x74]
// 007f9549  8bce                 mov ecx, esi
// 007f954b  ffd0                 call eax
// 007f954d  8b16                 mov edx, dword ptr [esi]
// 007f954f  8bce                 mov ecx, esi
// 007f9551  85c0                 test eax, eax
// 007f9553  740d                 je 0x7f9562
// 007f9555  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 007f955b  ffd0                 call eax
// 007f955d  5f                   pop edi
// 007f955e  5e                   pop esi
// 007f955f  c20c00               ret 0xc
// 007f9562  8b4270               mov eax, dword ptr [edx + 0x70]
// 007f9565  6a01                 push 1
// 007f9567  ffd0                 call eax
// 007f9569  5f                   pop edi
// 007f956a  5e                   pop esi
// 007f956b  c20c00               ret 0xc
// 007f956e  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 007f9575  7421                 je 0x7f9598
// 007f9577  8b16                 mov edx, dword ptr [esi]
// 007f9579  8b4274               mov eax, dword ptr [edx + 0x74]
// 007f957c  8bce                 mov ecx, esi
// 007f957e  ffd0                 call eax
// 007f9580  85c0                 test eax, eax
// 007f9582  7414                 je 0x7f9598
// 007f9584  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f958a  6a00                 push 0
// 007f958c  6aff                 push -1
// 007f958e  e80dd00000           call 0x8065a0
// 007f9593  5f                   pop edi
// 007f9594  5e                   pop esi
// 007f9595  c20c00               ret 0xc
// 007f9598  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f959c  8b542410             mov edx, dword ptr [esp + 0x10]
// 007f95a0  51                   push ecx
// 007f95a1  52                   push edx
// 007f95a2  57                   push edi
// 007f95a3  8bce                 mov ecx, esi
// 007f95a5  e8961c0400           call 0x83b240
// 007f95aa  5f                   pop edi
// 007f95ab  5e                   pop esi
// 007f95ac  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnClick@CXTPControlComboBox@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp