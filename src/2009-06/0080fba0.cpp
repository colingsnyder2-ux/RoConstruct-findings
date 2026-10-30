// roc 2009-06 0080fba0  unit: CXTPRibbonTab  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080fba0
//
// 0080fba0  6aff                 push -1
// 0080fba2  68c1238800           push 0x8823c1
// 0080fba7  64a100000000         mov eax, dword ptr fs:[0]
// 0080fbad  50                   push eax
// 0080fbae  83ec08               sub esp, 8
// 0080fbb1  56                   push esi
// 0080fbb2  57                   push edi
// 0080fbb3  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080fbb8  33c4                 xor eax, esp
// 0080fbba  50                   push eax
// 0080fbbb  8d442414             lea eax, [esp + 0x14]
// 0080fbbf  64a300000000         mov dword ptr fs:[0], eax
// 0080fbc5  8bf1                 mov esi, ecx
// 0080fbc7  8974240c             mov dword ptr [esp + 0xc], esi
// 0080fbcb  e8c047feff           call 0x7f4390
// 0080fbd0  33ff                 xor edi, edi
// 0080fbd2  8d8e98000000         lea ecx, [esi + 0x98]
// 0080fbd8  897c241c             mov dword ptr [esp + 0x1c], edi
// 0080fbdc  c7060ccc9000         mov dword ptr [esi], 0x90cc0c
// 0080fbe2  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0080fbe8  6a3c                 push 0x3c
// 0080fbea  c644242001           mov byte ptr [esp + 0x20], 1
// 0080fbef  89be90000000         mov dword ptr [esi + 0x90], edi
// 0080fbf5  e83e8ef0ff           call 0x718a38
// 0080fbfa  83c404               add esp, 4
// 0080fbfd  89442410             mov dword ptr [esp + 0x10], eax
// 0080fc01  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0080fc06  3bc7                 cmp eax, edi
// 0080fc08  7409                 je 0x80fc13
// 0080fc0a  8bc8                 mov ecx, eax
// 0080fc0c  e8cf240000           call 0x8120e0
// 0080fc11  eb02                 jmp 0x80fc15
// 0080fc13  33c0                 xor eax, eax
// 0080fc15  898684000000         mov dword ptr [esi + 0x84], eax
// 0080fc1b  897034               mov dword ptr [eax + 0x34], esi
// 0080fc1e  89be94000000         mov dword ptr [esi + 0x94], edi
// 0080fc24  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 0080fc2a  89be88000000         mov dword ptr [esi + 0x88], edi
// 0080fc30  89be8c000000         mov dword ptr [esi + 0x8c], edi
// 0080fc36  8bc6                 mov eax, esi
// 0080fc38  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080fc3c  64890d00000000       mov dword ptr fs:[0], ecx
// 0080fc43  59                   pop ecx
// 0080fc44  5f                   pop edi
// 0080fc45  5e                   pop esi
// 0080fc46  83c414               add esp, 0x14
// 0080fc49  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonTab@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp