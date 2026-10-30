// roc 2009-12 008ea690  unit: CXTPRibbonTab  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea690
//
// 008ea690  6aff                 push -1
// 008ea692  6891659600           push 0x966591
// 008ea697  64a100000000         mov eax, dword ptr fs:[0]
// 008ea69d  50                   push eax
// 008ea69e  83ec08               sub esp, 8
// 008ea6a1  56                   push esi
// 008ea6a2  57                   push edi
// 008ea6a3  a10052b600           mov eax, dword ptr [0xb65200]
// 008ea6a8  33c4                 xor eax, esp
// 008ea6aa  50                   push eax
// 008ea6ab  8d442414             lea eax, [esp + 0x14]
// 008ea6af  64a300000000         mov dword ptr fs:[0], eax
// 008ea6b5  8bf1                 mov esi, ecx
// 008ea6b7  8974240c             mov dword ptr [esp + 0xc], esi
// 008ea6bb  e88048feff           call 0x8cef40
// 008ea6c0  33ff                 xor edi, edi
// 008ea6c2  8d8e98000000         lea ecx, [esi + 0x98]
// 008ea6c8  897c241c             mov dword ptr [esp + 0x1c], edi
// 008ea6cc  c7067cd0a000         mov dword ptr [esi], 0xa0d07c
// 008ea6d2  ff1574de9800         call dword ptr [0x98de74]
// 008ea6d8  6a3c                 push 0x3c
// 008ea6da  c644242001           mov byte ptr [esp + 0x20], 1
// 008ea6df  89be90000000         mov dword ptr [esi + 0x90], edi
// 008ea6e5  e87691f0ff           call 0x7f3860
// 008ea6ea  83c404               add esp, 4
// 008ea6ed  89442410             mov dword ptr [esp + 0x10], eax
// 008ea6f1  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008ea6f6  3bc7                 cmp eax, edi
// 008ea6f8  7409                 je 0x8ea703
// 008ea6fa  8bc8                 mov ecx, eax
// 008ea6fc  e82f350000           call 0x8edc30
// 008ea701  eb02                 jmp 0x8ea705
// 008ea703  33c0                 xor eax, eax
// 008ea705  898684000000         mov dword ptr [esi + 0x84], eax
// 008ea70b  897034               mov dword ptr [eax + 0x34], esi
// 008ea70e  89be94000000         mov dword ptr [esi + 0x94], edi
// 008ea714  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 008ea71a  89be88000000         mov dword ptr [esi + 0x88], edi
// 008ea720  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 008ea726  8bc6                 mov eax, esi
// 008ea728  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ea72c  64890d00000000       mov dword ptr fs:[0], ecx
// 008ea733  59                   pop ecx
// 008ea734  5f                   pop edi
// 008ea735  5e                   pop esi
// 008ea736  83c414               add esp, 0x14
// 008ea739  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonTab@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp