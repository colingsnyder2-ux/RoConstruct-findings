// roc 2009-12 008f3490  unit: CXTColorSelectorCtrlThemeOffice2003  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3490
//
// 008f3490  6aff                 push -1
// 008f3492  68ca459600           push 0x9645ca
// 008f3497  64a100000000         mov eax, dword ptr fs:[0]
// 008f349d  50                   push eax
// 008f349e  51                   push ecx
// 008f349f  56                   push esi
// 008f34a0  a10052b600           mov eax, dword ptr [0xb65200]
// 008f34a5  33c4                 xor eax, esp
// 008f34a7  50                   push eax
// 008f34a8  8d44240c             lea eax, [esp + 0xc]
// 008f34ac  64a300000000         mov dword ptr fs:[0], eax
// 008f34b2  6a14                 push 0x14
// 008f34b4  e8a703f0ff           call 0x7f3860
// 008f34b9  8bf0                 mov esi, eax
// 008f34bb  83c404               add esp, 4
// 008f34be  89742408             mov dword ptr [esp + 8], esi
// 008f34c2  33c0                 xor eax, eax
// 008f34c4  89442414             mov dword ptr [esp + 0x14], eax
// 008f34c8  3bf0                 cmp esi, eax
// 008f34ca  740f                 je 0x8f34db
// 008f34cc  8bce                 mov ecx, esi
// 008f34ce  e8cd70f6ff           call 0x85a5a0
// 008f34d3  c7065cf9a000         mov dword ptr [esi], 0xa0f95c
// 008f34d9  8bc6                 mov eax, esi
// 008f34db  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f34df  64890d00000000       mov dword ptr fs:[0], ecx
// 008f34e6  59                   pop ecx
// 008f34e7  5e                   pop esi
// 008f34e8  83c410               add esp, 0x10
// 008f34eb  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTButtonThemeFactory@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp