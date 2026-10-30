// roc 2009-12 0086c1a0  unit: CXTPWinThemeWrapper  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c1a0
//
// 0086c1a0  6aff                 push -1
// 0086c1a2  68a0f79500           push 0x95f7a0
// 0086c1a7  64a100000000         mov eax, dword ptr fs:[0]
// 0086c1ad  50                   push eax
// 0086c1ae  51                   push ecx
// 0086c1af  56                   push esi
// 0086c1b0  57                   push edi
// 0086c1b1  a10052b600           mov eax, dword ptr [0xb65200]
// 0086c1b6  33c4                 xor eax, esp
// 0086c1b8  50                   push eax
// 0086c1b9  8d442410             lea eax, [esp + 0x10]
// 0086c1bd  64a300000000         mov dword ptr fs:[0], eax
// 0086c1c3  8bf1                 mov esi, ecx
// 0086c1c5  8974240c             mov dword ptr [esp + 0xc], esi
// 0086c1c9  8d7e54               lea edi, [esi + 0x54]
// 0086c1cc  c706f401a000         mov dword ptr [esi], 0xa001f4
// 0086c1d2  c707e401a000         mov dword ptr [edi], 0xa001e4
// 0086c1d8  8d8edc000000         lea ecx, [esi + 0xdc]
// 0086c1de  c744241803000000     mov dword ptr [esp + 0x18], 3
// 0086c1e6  e865970700           call 0x8e5950
// 0086c1eb  8d8ed4000000         lea ecx, [esi + 0xd4]
// 0086c1f1  c644241802           mov byte ptr [esp + 0x18], 2
// 0086c1f6  e8f77df8ff           call 0x7f3ff2
// 0086c1fb  8d8ed0000000         lea ecx, [esi + 0xd0]
// 0086c201  ff15c0de9800         call dword ptr [0x98dec0]
// 0086c207  8bcf                 mov ecx, edi
// 0086c209  c644241800           mov byte ptr [esp + 0x18], 0
// 0086c20e  e8dddffeff           call 0x85a1f0
// 0086c213  8bce                 mov ecx, esi
// 0086c215  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0086c21d  e8eca50b00           call 0x92680e
// 0086c222  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086c226  64890d00000000       mov dword ptr fs:[0], ecx
// 0086c22d  59                   pop ecx
// 0086c22e  5f                   pop edi
// 0086c22f  5e                   pop esi
// 0086c230  83c410               add esp, 0x10
// 0086c233  c3                   ret 
// copied from an identical function in another client (function ??1CXTCaption@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp