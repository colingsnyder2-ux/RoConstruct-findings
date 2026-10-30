// roc 2009-12 008d9090  unit: CXTSplitterWndThemeOffice2003  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d9090
//
// 008d9090  6aff                 push -1
// 008d9092  68ca459600           push 0x9645ca
// 008d9097  64a100000000         mov eax, dword ptr fs:[0]
// 008d909d  50                   push eax
// 008d909e  51                   push ecx
// 008d909f  56                   push esi
// 008d90a0  a10052b600           mov eax, dword ptr [0xb65200]
// 008d90a5  33c4                 xor eax, esp
// 008d90a7  50                   push eax
// 008d90a8  8d44240c             lea eax, [esp + 0xc]
// 008d90ac  64a300000000         mov dword ptr fs:[0], eax
// 008d90b2  6a14                 push 0x14
// 008d90b4  e8a7a7f1ff           call 0x7f3860
// 008d90b9  8bf0                 mov esi, eax
// 008d90bb  83c404               add esp, 4
// 008d90be  89742408             mov dword ptr [esp + 8], esi
// 008d90c2  33c0                 xor eax, eax
// 008d90c4  89442414             mov dword ptr [esp + 0x14], eax
// 008d90c8  3bf0                 cmp esi, eax
// 008d90ca  740f                 je 0x8d90db
// 008d90cc  8bce                 mov ecx, esi
// 008d90ce  e8cd14f8ff           call 0x85a5a0
// 008d90d3  c7064caca000         mov dword ptr [esi], 0xa0ac4c
// 008d90d9  8bc6                 mov eax, esi
// 008d90db  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d90df  64890d00000000       mov dword ptr fs:[0], ecx
// 008d90e6  59                   pop ecx
// 008d90e7  5e                   pop esi
// 008d90e8  83c410               add esp, 0x10
// 008d90eb  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTButtonThemeFactory@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp