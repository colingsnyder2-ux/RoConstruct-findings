// roc 2011-06 008fc570  unit: CXTPRibbonTabPopupToolBar  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fc570
//
// 008fc570  56                   push esi
// 008fc571  57                   push edi
// 008fc572  8bf1                 mov esi, ecx
// 008fc574  e817e5f1ff           call 0x81aa90
// 008fc579  8bc8                 mov ecx, eax
// 008fc57b  e870f1f2ff           call 0x82b6f0
// 008fc580  8bf8                 mov edi, eax
// 008fc582  837f0400             cmp dword ptr [edi + 4], 0
// 008fc586  7f56                 jg 0x8fc5de
// 008fc588  8b4620               mov eax, dword ptr [esi + 0x20]
// 008fc58b  50                   push eax
// 008fc58c  e8ef3ef8ff           call 0x880480
// 008fc591  83c404               add esp, 4
// 008fc594  85c0                 test eax, eax
// 008fc596  7446                 je 0x8fc5de
// 008fc598  56                   push esi
// 008fc599  8bcf                 mov ecx, edi
// 008fc59b  e86040f8ff           call 0x880600
// 008fc5a0  85c0                 test eax, eax
// 008fc5a2  753a                 jne 0x8fc5de
// 008fc5a4  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 008fc5ab  7531                 jne 0x8fc5de
// 008fc5ad  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008fc5b3  e88899faff           call 0x8a5f40
// 008fc5b8  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 008fc5bf  741d                 je 0x8fc5de
// 008fc5c1  8b442414             mov eax, dword ptr [esp + 0x14]
// 008fc5c5  8b965c020000         mov edx, dword ptr [esi + 0x25c]
// 008fc5cb  8b5208               mov edx, dword ptr [edx + 8]
// 008fc5ce  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008fc5d4  50                   push eax
// 008fc5d5  8b442414             mov eax, dword ptr [esp + 0x14]
// 008fc5d9  50                   push eax
// 008fc5da  ffd2                 call edx
// 008fc5dc  eb02                 jmp 0x8fc5e0
// 008fc5de  33c0                 xor eax, eax
// 008fc5e0  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 008fc5e6  7420                 je 0x8fc608
// 008fc5e8  50                   push eax
// 008fc5e9  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008fc5ef  e8ecfeffff           call 0x8fc4e0
// 008fc5f4  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 008fc5fb  740b                 je 0x8fc608
// 008fc5fd  8b4620               mov eax, dword ptr [esi + 0x20]
// 008fc600  50                   push eax
// 008fc601  8bcf                 mov ecx, edi
// 008fc603  e8a83ff8ff           call 0x8805b0
// 008fc608  8b442414             mov eax, dword ptr [esp + 0x14]
// 008fc60c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008fc610  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008fc614  50                   push eax
// 008fc615  51                   push ecx
// 008fc616  52                   push edx
// 008fc617  8bce                 mov ecx, esi
// 008fc619  e84292f5ff           call 0x855860
// 008fc61e  5f                   pop edi
// 008fc61f  5e                   pop esi
// 008fc620  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonTabPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
