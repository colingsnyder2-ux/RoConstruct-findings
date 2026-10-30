// roc 2009-12 008567d0  unit: CXTPTabClientWnd  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008567d0
//
// 008567d0  6aff                 push -1
// 008567d2  68c8f39500           push 0x95f3c8
// 008567d7  64a100000000         mov eax, dword ptr fs:[0]
// 008567dd  50                   push eax
// 008567de  83ec24               sub esp, 0x24
// 008567e1  56                   push esi
// 008567e2  a10052b600           mov eax, dword ptr [0xb65200]
// 008567e7  33c4                 xor eax, esp
// 008567e9  50                   push eax
// 008567ea  8d44242c             lea eax, [esp + 0x2c]
// 008567ee  64a300000000         mov dword ptr fs:[0], eax
// 008567f4  8bf1                 mov esi, ecx
// 008567f6  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 008567fd  7516                 jne 0x856815
// 008567ff  e82cd6f9ff           call 0x7f3e30
// 00856804  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00856808  64890d00000000       mov dword ptr fs:[0], ecx
// 0085680f  59                   pop ecx
// 00856810  5e                   pop esi
// 00856811  83c430               add esp, 0x30
// 00856814  c3                   ret 
// 00856815  56                   push esi
// 00856816  8d4c241c             lea ecx, [esp + 0x1c]
// 0085681a  e86bfc0c00           call 0x92648a
// 0085681f  56                   push esi
// 00856820  8d4c240c             lea ecx, [esp + 0xc]
// 00856824  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0085682c  e83f4affff           call 0x84b270
// 00856831  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00856835  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00856839  50                   push eax
// 0085683a  51                   push ecx
// 0085683b  8d542410             lea edx, [esp + 0x10]
// 0085683f  52                   push edx
// 00856840  ff156ccc9800         call dword ptr [0x98cc6c]
// 00856846  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0085684c  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00856852  8b11                 mov edx, dword ptr [ecx]
// 00856854  8b5238               mov edx, dword ptr [edx + 0x38]
// 00856857  6a00                 push 0
// 00856859  8d44240c             lea eax, [esp + 0xc]
// 0085685d  50                   push eax
// 0085685e  8d442420             lea eax, [esp + 0x20]
// 00856862  50                   push eax
// 00856863  ffd2                 call edx
// 00856865  8d4c2418             lea ecx, [esp + 0x18]
// 00856869  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00856871  e80efc0c00           call 0x926484
// 00856876  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085687a  64890d00000000       mov dword ptr fs:[0], ecx
// 00856881  59                   pop ecx
// 00856882  5e                   pop esi
// 00856883  83c430               add esp, 0x30
// 00856886  c3                   ret 
// copied from an identical function in another client (function ?OnNcPaint@CXTPTabClientWnd@@IAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp