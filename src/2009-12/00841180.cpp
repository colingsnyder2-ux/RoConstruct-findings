// roc 2009-12 00841180  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841180
//
// 00841180  6aff                 push -1
// 00841182  68fb0d9600           push 0x960dfb
// 00841187  64a100000000         mov eax, dword ptr fs:[0]
// 0084118d  50                   push eax
// 0084118e  56                   push esi
// 0084118f  57                   push edi
// 00841190  a10052b600           mov eax, dword ptr [0xb65200]
// 00841195  33c4                 xor eax, esp
// 00841197  50                   push eax
// 00841198  8d44240c             lea eax, [esp + 0xc]
// 0084119c  64a300000000         mov dword ptr fs:[0], eax
// 008411a2  8bf1                 mov esi, ecx
// 008411a4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008411a8  57                   push edi
// 008411a9  e8c2fcffff           call 0x840e70
// 008411ae  85c0                 test eax, eax
// 008411b0  7572                 jne 0x841224
// 008411b2  6a08                 push 8
// 008411b4  e8a726fbff           call 0x7f3860
// 008411b9  83c404               add esp, 4
// 008411bc  8944241c             mov dword ptr [esp + 0x1c], eax
// 008411c0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008411c8  85c0                 test eax, eax
// 008411ca  7419                 je 0x8411e5
// 008411cc  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 008411d2  8b91b8000000         mov edx, dword ptr [ecx + 0xb8]
// 008411d8  52                   push edx
// 008411d9  57                   push edi
// 008411da  8bc8                 mov ecx, eax
// 008411dc  e83ff6ffff           call 0x840820
// 008411e1  8bf8                 mov edi, eax
// 008411e3  eb02                 jmp 0x8411e7
// 008411e5  33ff                 xor edi, edi
// 008411e7  8b442420             mov eax, dword ptr [esp + 0x20]
// 008411eb  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008411f3  83f8ff               cmp eax, -1
// 008411f6  7506                 jne 0x8411fe
// 008411f8  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 008411fe  6a01                 push 1
// 00841200  57                   push edi
// 00841201  50                   push eax
// 00841202  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00841208  e833c90a00           call 0x8edb40
// 0084120d  8b4704               mov eax, dword ptr [edi + 4]
// 00841210  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00841214  64890d00000000       mov dword ptr fs:[0], ecx
// 0084121b  59                   pop ecx
// 0084121c  5f                   pop edi
// 0084121d  5e                   pop esi
// 0084121e  83c40c               add esp, 0xc
// 00841221  c20800               ret 8
// 00841224  8b4004               mov eax, dword ptr [eax + 4]
// 00841227  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084122b  64890d00000000       mov dword ptr fs:[0], ecx
// 00841232  59                   pop ecx
// 00841233  5f                   pop edi
// 00841234  5e                   pop esi
// 00841235  83c40c               add esp, 0xc
// 00841238  c20800               ret 8
// copied from an identical function in another client (function ?InsertCategory@CXTPCustomizeCommandsPage@@QAEPAVCXTPControls@@PBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCustomizeCommandsPage.cpp