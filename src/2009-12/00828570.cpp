// roc 2009-12 00828570  unit: CXTPReportHeader  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828570
//
// 00828570  6aff                 push -1
// 00828572  6838b89500           push 0x95b838
// 00828577  64a100000000         mov eax, dword ptr fs:[0]
// 0082857d  50                   push eax
// 0082857e  51                   push ecx
// 0082857f  56                   push esi
// 00828580  a10052b600           mov eax, dword ptr [0xb65200]
// 00828585  33c4                 xor eax, esp
// 00828587  50                   push eax
// 00828588  8d44240c             lea eax, [esp + 0xc]
// 0082858c  64a300000000         mov dword ptr fs:[0], eax
// 00828592  8bf1                 mov esi, ecx
// 00828594  89742408             mov dword ptr [esp + 8], esi
// 00828598  c706c4589f00         mov dword ptr [esi], 0x9f58c4
// 0082859e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008285a6  e885fdffff           call 0x828330
// 008285ab  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 008285ae  85c9                 test ecx, ecx
// 008285b0  7407                 je 0x8285b9
// 008285b2  8b01                 mov eax, dword ptr [ecx]
// 008285b4  8b5068               mov edx, dword ptr [eax + 0x68]
// 008285b7  ffd2                 call edx
// 008285b9  8bce                 mov ecx, esi
// 008285bb  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008285c3  e81abefcff           call 0x7f43e2
// 008285c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008285cc  64890d00000000       mov dword ptr fs:[0], ecx
// 008285d3  59                   pop ecx
// 008285d4  5e                   pop esi
// 008285d5  83c410               add esp, 0x10
// 008285d8  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportHeader@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp