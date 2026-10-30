// roc 2009-12 008ea420  unit: CXTPRibbonTab  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea420
//
// 008ea420  6aff                 push -1
// 008ea422  6817659600           push 0x966517
// 008ea427  64a100000000         mov eax, dword ptr fs:[0]
// 008ea42d  50                   push eax
// 008ea42e  51                   push ecx
// 008ea42f  56                   push esi
// 008ea430  a10052b600           mov eax, dword ptr [0xb65200]
// 008ea435  33c4                 xor eax, esp
// 008ea437  50                   push eax
// 008ea438  8d44240c             lea eax, [esp + 0xc]
// 008ea43c  64a300000000         mov dword ptr fs:[0], eax
// 008ea442  8bf1                 mov esi, ecx
// 008ea444  89742408             mov dword ptr [esp + 8], esi
// 008ea448  c7067cd0a000         mov dword ptr [esi], 0xa0d07c
// 008ea44e  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008ea454  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008ea45c  85c9                 test ecx, ecx
// 008ea45e  740f                 je 0x8ea46f
// 008ea460  e87799f0ff           call 0x7f3ddc
// 008ea465  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 008ea46f  8d8e98000000         lea ecx, [esi + 0x98]
// 008ea475  ff15c0de9800         call dword ptr [0x98dec0]
// 008ea47b  8bce                 mov ecx, esi
// 008ea47d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008ea485  e8c64bfeff           call 0x8cf050
// 008ea48a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ea48e  64890d00000000       mov dword ptr fs:[0], ecx
// 008ea495  59                   pop ecx
// 008ea496  5e                   pop esi
// 008ea497  83c410               add esp, 0x10
// 008ea49a  c3                   ret 
// copied from an identical function in another client (function ??1CXTPRibbonTab@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp