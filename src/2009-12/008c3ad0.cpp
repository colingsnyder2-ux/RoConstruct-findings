// roc 2009-12 008c3ad0  unit: CXTPImageEditorDlg  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c3ad0
//
// 008c3ad0  6aff                 push -1
// 008c3ad2  68db419600           push 0x9641db
// 008c3ad7  64a100000000         mov eax, dword ptr fs:[0]
// 008c3add  50                   push eax
// 008c3ade  81ec98000000         sub esp, 0x98
// 008c3ae4  56                   push esi
// 008c3ae5  57                   push edi
// 008c3ae6  a10052b600           mov eax, dword ptr [0xb65200]
// 008c3aeb  33c4                 xor eax, esp
// 008c3aed  50                   push eax
// 008c3aee  8d8424a4000000       lea eax, [esp + 0xa4]
// 008c3af5  64a300000000         mov dword ptr fs:[0], eax
// 008c3afb  8bf1                 mov esi, ecx
// 008c3afd  56                   push esi
// 008c3afe  8dbe64080000         lea edi, [esi + 0x864]
// 008c3b04  6a00                 push 0
// 008c3b06  8bcf                 mov ecx, edi
// 008c3b08  e8a371b5ff           call 0x41acb0
// 008c3b0d  50                   push eax
// 008c3b0e  8d4c2418             lea ecx, [esp + 0x18]
// 008c3b12  e859310600           call 0x926c70
// 008c3b17  8d4c240c             lea ecx, [esp + 0xc]
// 008c3b1b  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 008c3b26  e83f310600           call 0x926c6a
// 008c3b2b  85c0                 test eax, eax
// 008c3b2d  7417                 je 0x8c3b46
// 008c3b2f  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 008c3b36  50                   push eax
// 008c3b37  8bcf                 mov ecx, edi
// 008c3b39  e8f2e3ffff           call 0x8c1f30
// 008c3b3e  57                   push edi
// 008c3b3f  8bce                 mov ecx, esi
// 008c3b41  e89aecffff           call 0x8c27e0
// 008c3b46  8d4c240c             lea ecx, [esp + 0xc]
// 008c3b4a  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 008c3b55  c744240c5cf89a00     mov dword ptr [esp + 0xc], 0x9af85c
// 008c3b5d  e82e06f3ff           call 0x7f4190
// 008c3b62  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 008c3b69  64890d00000000       mov dword ptr fs:[0], ecx
// 008c3b70  59                   pop ecx
// 008c3b71  5f                   pop edi
// 008c3b72  5e                   pop esi
// 008c3b73  81c4a4000000         add esp, 0xa4
// 008c3b79  c20800               ret 8
// copied from an identical function in another client (function ?OnPickerClick@CXTPImageEditorDlg@@AAEXPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp